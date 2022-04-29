using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipInitializer : MonoBehaviour
{
    public int initialShield = 4;
    public int initialHealth = 2;

    public double initialTime = 60f;

    public float baseStrafingSpeed = 8f;
    public float baseForwardSpeed = 100f;

    public float baseForwardAcceleration = 10000f;

    public float boostMultiplier = 10f;
    public float brakeMultiplier = .1f;

    public float obstacleDespawnDuration = 10f;
    public int dummyShipIndex = 0;

    public ShipSelectionMarker shipSelector;
    public ShipMarker shipParent;

    public bool useDummyShip = false;
    public void Start()
    {
        Player.GetInstance().SummaryValues.Score = 1000;

        Player.GetInstance().StateMachine.ObstacleDespawnDuration = obstacleDespawnDuration;

        Player.GetInstance().StateMachine.PausedCanvas = GetComponentInChildren<PausedCanvasMarker>(true);
        Player.GetInstance().StateMachine.HUD = GetComponentInChildren<ShipHUDController>();
        Player.GetInstance().StateMachine.HUDC = GetComponentInChildren<HUDController>();

        Player.GetInstance().AudioContext.BGMSource = GetComponentInChildren<BGMSourceMarker>().GetComponentInParent<AudioSource>();
        Player.GetInstance().AudioContext.SFXSource = GetComponentInChildren<SFXSourceMarker>().GetComponentInParent<AudioSource>();

        Player.GetInstance().AudioContext.BGMSource.volume = Player.GetInstance().Options.BGMVolume;
        Player.GetInstance().AudioContext.SFXSource.volume = Player.GetInstance().Options.SFXVolume;
        

        LoadShipModel();

        if (useDummyShip)
        {
            UseDummyShip();
        }
        else
        {
            Player.GetInstance().ShipContext.Initialize();
            
        }
    }

    // Update is called once per frame
    public void Update()
    {
        Player.GetInstance().ShipContext.baseForwardAcceleration = 10000f;
        Player.GetInstance().StateMachine.Distance = Vector3.Distance(GetComponentInChildren<ShipMarker>().transform.position, GetComponentInChildren<DestinationMarker>().transform.position);
    }

    public void UseDummyShip()
    {
        Debug.Log("Using Dummy Ship");
        Player.GetInstance().StateMachine.Shield = initialShield;
        Player.GetInstance().StateMachine.Health = initialHealth;

        Player.GetInstance().StateMachine.Timer = initialTime;

        Player.GetInstance().MotionContext.BaseStrafingSpeed = baseStrafingSpeed;
        Player.GetInstance().MotionContext.CurrentStrafingSpeed = baseStrafingSpeed;

        Player.GetInstance().MotionContext.BaseForwardSpeed = baseForwardSpeed;
        Player.GetInstance().MotionContext.CurrentForwardSpeed = baseForwardSpeed;
        Player.GetInstance().MotionContext.ModifiedForwardSpeed = 0;

        Player.GetInstance().MotionContext.BaseForwardAcceleration = baseForwardAcceleration;

        Player.GetInstance().MotionContext.BoostMultiplier = boostMultiplier;
        Player.GetInstance().MotionContext.BrakeMultiplier = brakeMultiplier;

        Player.GetInstance().ShipContext.ShipModelIndex = dummyShipIndex;
    }
    public void LoadShipModel()
    {
        var index = Player.GetInstance().ShipContext.ShipModelIndex;
        //Debug.Log("Ship index in loadshipmodel: " + index);
        if (index == -1) return;
        var model = GetComponentInChildren<ShipSelectionMarker>().transform.GetChild(index);
        var ship = Instantiate(model, shipParent.transform.position, Quaternion.identity);
        ship.gameObject.transform.parent = shipParent.gameObject.transform;
        ship.GetComponent<RotateShip>().doRotate = false;
        ship.localScale = ship.localScale * .5f;
        ship.gameObject.SetActive(true);
        Player.GetInstance().ShipContext = ship.GetComponent<ShipContext>();
    }
}

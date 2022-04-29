using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shipMovement : MonoBehaviour
{
    //[SerializeField] private float moveSpeed = 4.0f;

    public speedModes currentSpeedMode;

    public const float maximumSpeed = 8f;

    public float currentSpeed = 10f;

    // Update is called once per frame
    void Update()
    {
        UpdateSpeedMode();
        UpdateCurrentSpeed(currentSpeedMode);
        Move();

        float horizontal = Input.GetAxis("Horizontal");
        float vertical = Input.GetAxis("Vertical");
    
        Vector3 direction = new Vector3(horizontal, vertical, 0);
        Vector3 FinalDirection = new Vector3(horizontal, vertical, 1.0f);

        transform.position += direction * currentSpeed * Time.deltaTime;
        
        transform.rotation = Quaternion.RotateTowards(transform.rotation, Quaternion.LookRotation(FinalDirection), (Mathf.Deg2Rad * 50.0f));

    }

    public enum speedModes
    {
        Stop,
        QuarterSpeed,
        HalfSpeed,
        ThreeQuartersSpeed,
        FullSpeed
    }

    internal float CurrentSpeed
    {
        get { return currentSpeed; }
        set { currentSpeed = value; }
    }

    private float accelerationRate = 1.5f;

    internal float AccelerationRate
    {
        get { return accelerationRate; }
        set { accelerationRate = value; }
    }

    private void UpdateSpeedMode()
    {
        //if (Input.GetKey(KeyCode.Alpha0)) currentSpeedMode = speedModes.Stop;
        //if (Input.GetKey(KeyCode.Alpha1)) currentSpeedMode = speedModes.QuarterSpeed;
        if (Input.GetKey(KeyCode.Space)) currentSpeedMode = speedModes.HalfSpeed;
        if (Input.GetKey(KeyCode.W)) currentSpeedMode = speedModes.ThreeQuartersSpeed;
        if (Input.GetKey(KeyCode.A)) currentSpeedMode = speedModes.ThreeQuartersSpeed;
        if (Input.GetKey(KeyCode.S)) currentSpeedMode = speedModes.ThreeQuartersSpeed;
        if (Input.GetKey(KeyCode.D)) currentSpeedMode = speedModes.ThreeQuartersSpeed;
        if (Input.GetKey(KeyCode.LeftShift)) currentSpeedMode = speedModes.FullSpeed;
    }

    private void UpdateCurrentSpeed(speedModes speedMode)
    {
        switch (speedMode)
        {
            //case speedModes.Stop:
                //MoveSpeedTowards(0);
                //break;
            //case speedModes.QuarterSpeed:
                //MoveSpeedTowards(maximumSpeed * 0.25f);
                //break;
            case speedModes.HalfSpeed:
                MoveSpeedTowards(maximumSpeed * 0.5f);
                break;
            case speedModes.ThreeQuartersSpeed:
                MoveSpeedTowards(maximumSpeed * 0.75f);
                break;
            case speedModes.FullSpeed:
                MoveSpeedTowards(maximumSpeed);
                break;
        }
    }

    private void MoveSpeedTowards(float value)
    {
        while (Mathf.Abs(CurrentSpeed - value) > Mathf.Epsilon)
        {
            if (CurrentSpeed < value) CurrentSpeed += AccelerationRate * Time.deltaTime;
            else CurrentSpeed -= AccelerationRate * Time.deltaTime;
            break;
        }
    }

    private void Move()
    {
        if (CurrentSpeed < 0)
        {
            CurrentSpeed = 0;
            return;
        }

        //transform.position += new Vector3(0f, 0f, CurrentSpeed * Time.deltaTime);
    }
}

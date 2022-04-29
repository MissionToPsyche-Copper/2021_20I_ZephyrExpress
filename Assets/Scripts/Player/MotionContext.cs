public class MotionContext
{
    //Strafing Speed
    public float BaseStrafingSpeed { get; set; }
    private float currentStrafingSpeed = 0;
    public float CurrentStrafingSpeed
    {
        get { return currentStrafingSpeed; }
        set
        {
            currentStrafingSpeed = value;
            if (currentStrafingSpeed < 0)
                currentStrafingSpeed = 0;
        }
    }

    //Forward Speed
    public float BaseForwardSpeed { get; set; }
    
    private float currentForwardSpeed = 0;
    public float CurrentForwardSpeed
    {
        get { return currentForwardSpeed; }
        set
        {
            currentForwardSpeed = value;
            if (currentForwardSpeed < 0)
                currentForwardSpeed = 0;
        }
    }
    public float TargetForwardSpeed { get; set; }
    public float ModifiedForwardSpeed { get; set; }

    //Forward Acceleration
    public float BaseForwardAcceleration { get; set; }

    //Controls
    public float BrakeMultiplier { get; set; }
    public float BoostMultiplier { get; set; }

}

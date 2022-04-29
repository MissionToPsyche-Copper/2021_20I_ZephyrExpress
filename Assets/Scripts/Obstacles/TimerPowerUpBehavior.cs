public class TimerPowerUpBehavior : PowerUpBehavior
{
    public int modifier = 20;
    public override void Activate()
    {
        Player.GetInstance().StateMachine.Timer += modifier;
        Player.Log("+" + modifier + " TIMER");
    }
}

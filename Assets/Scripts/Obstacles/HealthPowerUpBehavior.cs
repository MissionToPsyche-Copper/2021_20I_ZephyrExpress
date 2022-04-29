public class HealthPowerUpBehavior : PowerUpBehavior
{
    public int modifier = 1;
    public override void Activate()
    {
        Player.GetInstance().StateMachine.Health += modifier;
        Player.Log("+"+ modifier + " HEALTH");
    }
}

// Shoot them Up games. 


#include "Components/STUCharacterMovementComponent.h"
#include "Player/STUBaseCharacter.h"
float USTUCharacterMovementComponent::GetMaxSpeed() const
{
	const float MaxSpeed = Super::GetMaxSpeed();
	const ASTUBaseCharacter* Player = Cast<ASTUBaseCharacter>(GetPawnOwner());
	if (Player)
		return Player->IsRunning() ? MaxSpeed * RunModifier : MaxSpeed;
	return MaxSpeed;
}
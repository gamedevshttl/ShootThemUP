// Shoot them Up games. 

#pragma once

#include "CoreMinimal.h"
#include "Weapon/STUBaseWeapon.h"
#include "STULauncherWeapon.generated.h"

class ASTUProjectile;

UCLASS()
class SHOOTTHEMUP_API ASTULauncherWeapon : public ASTUBaseWeapon
{
	GENERATED_BODY()

public:
	virtual void StartFire() override;
	//virtual void StopFire();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, category = "Weapon")
		TSubclassOf<ASTUProjectile> ProjectileClass;

	virtual void MakeShot() override;
};

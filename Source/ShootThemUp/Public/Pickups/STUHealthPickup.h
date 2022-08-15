// Shoot them Up games. 

#pragma once

#include "CoreMinimal.h"
#include "Pickups/STUBasePickup.h"
#include "STUHealthPickup.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTTHEMUP_API ASTUHealthPickup : public ASTUBasePickup
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup", meta = (ClamMin = "1.0", ClampMax = "100.0"))
	float HealthAmount = 10.f;
private:
	virtual bool GeivePickupTo(APawn* PlayerPawn) override;
};

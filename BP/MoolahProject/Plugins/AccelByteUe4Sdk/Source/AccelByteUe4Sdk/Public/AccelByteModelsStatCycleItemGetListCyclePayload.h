#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPredefinedEvent.h"
#include "AccelByteModelsStatCycleItemGetListCyclePayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsStatCycleItemGetListCyclePayload : public FAccelByteModelsPredefinedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FAccelByteModelsStatCycleItemGetListCyclePayload();
};


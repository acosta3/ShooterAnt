// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_ClearBlackboardValue.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"



UBTTask_ClearBlackboardValue::UBTTask_ClearBlackboardValue()
{
	NodeName = TEXT("Clear Blackboard Value");
}

EBTNodeResult::Type UBTTask_ClearBlackboardValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	// Get Black Board
	// clear the value of selected key
	// return success or failure

	
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	if ( Blackboard)
	{
		Blackboard->ClearValue(GetSelectedBlackboardKey());

	}

	return EBTNodeResult::Succeeded;

}

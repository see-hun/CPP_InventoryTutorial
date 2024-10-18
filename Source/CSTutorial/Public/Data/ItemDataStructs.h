#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemDataStructs.generated.h"

UENUM()
enum class EItemQuality : uint8
{
	Shoddy UMETA(DisplayName = "Shoddy"),
	Common UMETA(DisplayName = "Common"),
	Quality UMETA(DisplayName = "Quality"),
	Masterwork UMETA(DisplayName = "Masterwork"),
	Grandmaster UMETA(DisplayName = "Grandmaster")

};

UENUM()
enum class EItemType : uint8
{
	Armor UMETA(DisplayName = "Armor"),
	Weapon UMETA(DisplayName = "Weapon"),
	Shield UMETA(DisplayName = "Shield"),
	Spell UMETA(DisplayName = "Spell"),
	Consumable UMETA(DisplayName = "Consumable"),
	Quest UMETA(DisplayName = "Quest"),
	Mundane UMETA(DisplayName = "Mundane")
};

USTRUCT()
struct FItemStatistics
{
	GENERATED_BODY()

	UPROPERTY(EditAnyWhere)
	float ArmorRating;

	UPROPERTY(EditAnyWhere)
	float DamageValue;

	UPROPERTY(EditAnyWhere)
	float RestorationAmount;

	UPROPERTY(EditAnyWhere)
	float SellValue;
};

USTRUCT()
struct FItemTextData
{
	GENERATED_BODY()

	UPROPERTY(EditAnyWhere)
	FText Name;
	UPROPERTY(EditAnyWhere)
	FText Description;
	UPROPERTY(EditAnyWhere)
	FText InteractionText;
	UPROPERTY(EditAnyWhere)
	FText UsageText;
};

USTRUCT()
struct FItemNumericData
{
	GENERATED_BODY()
	UPROPERTY(EditAnyWhere)
	float Weight;

	//아이템 최대 쌓을수있는 수
	UPROPERTY(EditAnyWhere)
	int MaxStackSize;

	//아이템 쌓을수 있는지없는지 체크
	UPROPERTY(EditAnyWhere)
	bool bIsStackable;
};

USTRUCT()
struct FItemAssetData
{
	GENERATED_BODY()
	UPROPERTY(EditAnyWhere)
	UTexture2D* Icon;

	UPROPERTY(EditAnyWhere)
	UStaticMesh* Mesh;
	
};

USTRUCT()
struct FItemData : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnyWhere, Category = "ItemData")
	EItemType ItemType;

	UPROPERTY(EditAnyWhere, Category = "ItemData")
	EItemQuality ItemQuality;

	UPROPERTY(EditAnyWhere, Category = "ItemData")
	FItemStatistics ItemStatistics;

	UPROPERTY(EditAnyWhere, Category = "ItemData")
	FItemTextData TextData;
	
	UPROPERTY(EditAnyWhere, Category = "ItemData")
	FItemNumericData NumericData;

	UPROPERTY(EditAnyWhere, Category = "ItemData")
	FItemAssetData AssetData;



};
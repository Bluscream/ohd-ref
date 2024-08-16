#include "HDBaseCapturePoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonkehFrameworkUI -ObjectName=DFPOIComponent -FallbackName=DFPOIComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "Net/UnrealNetwork.h"

AHDBaseCapturePoint::AHDBaseCapturePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Mesh = (USkeletalMeshComponent*)RootComponent;
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
    this->POI = CreateDefaultSubobject<UDFPOIComponent>(TEXT("POI"));
    this->NavigationInvoker = NULL;
    this->bActive = false;
    this->bLocked = false;
    this->bContested = false;
    this->bCaptured = false;
    this->bCapturedOnce = false;
    this->CaptureProgress = 0;
    this->ActiveRoute = -1;
    this->StartingTeam = EHDTeam::NoTeam;
    this->CaptureDisplayName = FText::FromString(TEXT("Capture Point"));
    this->CaptureTimerRate = 1.00f;
    this->CaptureSpeed = 5;
    this->CaptureRadius = 100.00f;
    this->MinPlayersToCapture = 1;
    this->bEnforceMinPlayersToCaptureWithSmallerPlayerCount = false;
    this->bScaleCaptureSpeed = true;
    this->bRecapturable = true;
    this->bWinOnCapture = false;
    this->bProvideSpawnPoint = true;
    this->bProvideSpawnPointWhenUnderAttack = false;
    this->Tier = 1;
    this->SpawnPointTransforms.AddDefaulted(4);
    this->OwningTeam = EHDTeam::NoTeam;
    this->PrevNonNeutralOwningTeam = EHDTeam::NoTeam;
    this->bCapturableByTeamRed = false;
    this->bCapturableByTeamBlue = false;
    this->SphereCollision->SetupAttachment(RootComponent);
}

void AHDBaseCapturePoint::Unlock() {
}

void AHDBaseCapturePoint::SetActiveRoute(const int32 NewActiveRoute) {
}

void AHDBaseCapturePoint::SetActive(const bool bNewActive) {
}






void AHDBaseCapturePoint::OnRep_OwningTeam(EHDTeam LastOwningTeam) {
}

void AHDBaseCapturePoint::OnRep_Locked() {
}

void AHDBaseCapturePoint::OnRep_Contested() {
}

void AHDBaseCapturePoint::OnRep_CaptureProgress() {
}

void AHDBaseCapturePoint::OnRep_CapturableByTeam() {
}

void AHDBaseCapturePoint::OnRep_Active() {
}

void AHDBaseCapturePoint::OnOwningTeamUpdated(EHDTeam LastOwningTeam) {
}

void AHDBaseCapturePoint::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHDBaseCapturePoint::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHDBaseCapturePoint::Lock() {
}

bool AHDBaseCapturePoint::IsCapturableByTeam(EHDTeam CaptureTeam) const {
    return false;
}

void AHDBaseCapturePoint::GetOverlappingCharactersByTeam(TArray<ADFBaseCharacter*>& OverlappingCharsRed, TArray<ADFBaseCharacter*>& OverlappingCharsBlue) const {
}

EHDControlPointObjectiveType AHDBaseCapturePoint::GetObjectiveTypeForTeam(EHDTeam ObjTeam) const {
    return EHDControlPointObjectiveType::Offensive;
}

int32 AHDBaseCapturePoint::GetMinPlayersRequiredForCaptureTeam(EHDTeam CaptureTeam) const {
    return 0;
}

AActor* AHDBaseCapturePoint::ChoosePlayerStart_Implementation(AHDPlayerController* Player) {
    return NULL;
}

bool AHDBaseCapturePoint::CanRestartPlayer(AController* Player) const {
    return false;
}

bool AHDBaseCapturePoint::CanCapture() const {
    return false;
}

void AHDBaseCapturePoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHDBaseCapturePoint, bActive);
    DOREPLIFETIME(AHDBaseCapturePoint, bLocked);
    DOREPLIFETIME(AHDBaseCapturePoint, bContested);
    DOREPLIFETIME(AHDBaseCapturePoint, CaptureProgress);
    DOREPLIFETIME(AHDBaseCapturePoint, ActiveRoute);
    DOREPLIFETIME(AHDBaseCapturePoint, MinPlayersToCapture);
    DOREPLIFETIME(AHDBaseCapturePoint, bEnforceMinPlayersToCaptureWithSmallerPlayerCount);
    DOREPLIFETIME(AHDBaseCapturePoint, OwningTeam);
    DOREPLIFETIME(AHDBaseCapturePoint, bCapturableByTeamRed);
    DOREPLIFETIME(AHDBaseCapturePoint, bCapturableByTeamBlue);
}



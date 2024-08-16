enum class EHDAICaptureMode {
    Attack = 0,
    Defend = 1,
    None = 2,
    EHDAICaptureMode_MAX = 3,
};

enum class EHDAICombatTargetType {
    None = 0,
    EnemyActor = 1,
    SuppressionLocation = 2,
    SafeSuppressionLocation = 3,
    CustomSetLocation = 4,
    ClearTarget = 5,
    EHDAICombatTargetType_MAX = 6,
};

enum class EHDAIThreatLevel {
    None = 0,
    Safe = 1,
    Aware = 2,
    Combat = 3,
    Danger = 4,
    EHDAIThreatLevel_MAX = 5,
};

enum class EHDAIVocalizationType {
    None = 0,
    Contact = 1,
    LostContact = 2,
    Reloading = 3,
    BeenHit = 4,
    UnderSuppression = 5,
    Death = 6,
    EHDAIVocalizationType_MAX = 7,
};

enum class EHDControlPointObjectiveType {
    Offensive = 0,
    Defensive = 1,
    NoObjective = 2,
    EHDControlPointObjectiveType_MAX = 3,
};

enum class EHDFilterRuleBehavior {
    Show = 0,
    Hide = 1,
    OnlyShow = 2,
    EHDFilterRuleBehavior_MAX = 3,
};

enum class EHDFilterRuleComparisonOp {
    EqualTo = 0,
    NotEqualTo = 1,
    EHDFilterRuleComparisonOp_MAX = 2,
};

enum class EHDPrimaryAssetType {
    Faction = 0,
    GameMode = 1,
    Map = 2,
    Platoon = 3,
    Ruleset = 4,
    EHDPrimaryAssetType_MAX = 5,
};

enum class EHDServerListSortBy {
    None = 0,
    Name = 1,
    Mode = 2,
    Map = 3,
    PlayerCount = 4,
    Ping = 5,
    Version = 6,
    EHDServerListSortBy_MAX = 7,
};

enum class EHDTeam {
    Red = 0,
    Blue = 1,
    NoTeam = 255,
    EHDTeam_MAX = 256,
};

enum class EHDUICharacterStanceState {
    Stand = 0,
    StandAim = 1,
    StandMount = 2,
    Sprint = 3,
    Crouch = 4,
    CrouchAim = 5,
    CrouchMount = 6,
    Prone = 7,
    EHDUICharacterStanceState_MAX = 8,
};

enum class EHDWeaponAimStyle {
    None = 0,
    PointAim = 1,
    OpticMode1 = 2,
    OpticMode2 = 3,
    OpticMode3 = 4,
    EHDWeaponAimStyle_MAX = 5,
};


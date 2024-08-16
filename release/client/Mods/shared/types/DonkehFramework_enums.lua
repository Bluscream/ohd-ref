---@enum EAmmoClipReloadBehavior
EAmmoClipReloadBehavior = {
    DiscardOnEmpty = 0,
    DiscardOnReload = 1,
    NoDiscard = 2,
    EAmmoClipReloadBehavior_MAX = 3,
}

---@enum ECardinalDirection
ECardinalDirection = {
    North = 0,
    South = 1,
    East = 2,
    West = 3,
    ECardinalDirection_MAX = 4,
}

---@enum ECharacterStance
ECharacterStance = {
    None = 0,
    Stand = 1,
    Crouch = 2,
    Prone = 3,
    Custom = 4,
    ECharacterStance_MAX = 5,
}

---@enum EDFCharacterCustomMovementMode
EDFCharacterCustomMovementMode = {
    None = 0,
    Vaulting = 1,
    MAX = 2,
}

---@enum EDFItemEnabledMode
EDFItemEnabledMode = {
    Enabled = 0,
    Disabled = 1,
    Hidden = 2,
    EDFItemEnabledMode_MAX = 3,
}

---@enum EDFPlayerWhitelistType
EDFPlayerWhitelistType = {
    None = 0,
    Manual = 1,
    Token = 2,
    EDFPlayerWhitelistType_MAX = 3,
}

---@enum EDFVoteStatus
EDFVoteStatus = {
    Inactive = 0,
    InProgress = 1,
    Passed = 2,
    FailedNotEnoughVotes = 3,
    FailedInsufficientVoteRatio = 4,
    EDFVoteStatus_MAX = 5,
}

---@enum EDFVotingChannel
EDFVotingChannel = {
    All = 0,
    EDFVotingChannel_MAX = 1,
}

---@enum EFireMode
EFireMode = {
    Semi = 0,
    Auto = 1,
    Burst = 2,
    EFireMode_MAX = 3,
}

---@enum EGunReloadState
EGunReloadState = {
    NotReloading = 0,
    PartialReloadStart = 1,
    FullReloadStart = 2,
    PartialReload = 3,
    FullReload = 4,
    PartialReloadEnd = 5,
    FullReloadEnd = 6,
    EGunReloadState_MAX = 7,
}

---@enum EItemType
EItemType = {
    Melee = 0,
    Other = 1,
    Pistol = 2,
    Throwable = 3,
    Rifle = 4,
    Equipment = 5,
    EItemType_MAX = 6,
}

---@enum ELeanDirection
ELeanDirection = {
    None = 0,
    Left = 1,
    Right = 2,
    ELeanDirection_MAX = 3,
}

---@enum ELogVerbosityBP
ELogVerbosityBP = {
    Error = 2,
    Warning = 3,
    Log = 5,
    Verbose = 6,
    VeryVerbose = 7,
    MAX = 0,
}

---@enum EPlayerKind
EPlayerKind = {
    Human = 0,
    Bot = 1,
    Either = 2,
    EPlayerKind_MAX = 3,
}

---@enum EPlayerVoiceState
EPlayerVoiceState = {
    NotTalking = 0,
    Talking = 1,
    Muted = 2,
    EPlayerVoiceState_MAX = 3,
}

---@enum ESessionSearchPresenceType
ESessionSearchPresenceType = {
    AllServers = 0,
    ListenServersOnly = 1,
    DedicatedServersOnly = 2,
    ESessionSearchPresenceType_MAX = 3,
}

---@enum ESpecificItemType
ESpecificItemType = {
    None = 0,
    Rifle = 10,
    MachineGun = 11,
    GrenadeLauncher = 12,
    RocketLauncher = 13,
    SniperRifle = 14,
    SubmachineGun = 30,
    Pistol = 31,
    FragGrenade = 50,
    SmokeGrenade = 51,
    Melee = 80,
    Bandage = 110,
    AmmoBag = 120,
    MedicBag = 121,
    Binoculars = 150,
    Radio = 151,
    Shovel = 152,
    SpecialItem1 = 210,
    SpecialItem2 = 211,
    SpecialItem3 = 212,
    SpecialItem4 = 212,
    SpecialItem5 = 212,
    CustomItem1 = 220,
    CustomItem2 = 221,
    CustomItem3 = 222,
    CustomItem4 = 223,
    CustomItem5 = 224,
    Undefined = 255,
    ESpecificItemType_MAX = 256,
}

---@enum EVaultBehavior
EVaultBehavior = {
    None = 0,
    VaultOver = 1,
    SprintVaultOver = 2,
    ClimbOnto = 3,
    SprintClimbOnto = 4,
    EVaultBehavior_MAX = 5,
}


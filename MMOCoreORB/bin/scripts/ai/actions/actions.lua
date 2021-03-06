require("ai.ai")
require("ai.interrupts")

includeAiFile("actions/movebase.lua")
includeAiFile("actions/generatepatrolbase.lua")
includeAiFile("actions/waitbase.lua")
includeAiFile("actions/gettargetbase.lua")
includeAiFile("actions/selectweaponbase.lua")
includeAiFile("actions/selectattackbase.lua")

Move = createClass(MoveBase, Interrupt)
MoveDefault = createClass(MoveBase, DefaultInterrupt)
MovePack = createClass(MoveBase, PackInterrupt)
MoveCreaturePet = createClass(MovePetBase, CreaturePetInterrupt)
MoveDroidPet = createClass(MovePetBase, DroidPetInterrupt)
MoveFactionPet = createClass(MovePetBase, FactionPetInterrupt)
MoveVillageRaider = createClass(MoveVillageRaiderBase, VillageRaiderInterrupt)
MoveEscort = createClass(MoveEscortBase, CreaturePetInterrupt)
MoveEnclaveSentinel = createClass(MoveBase, EnclaveSentinelInterrupt)
MoveDeathWatchDefender = createClass(MoveBase, DeathWatchDefenderInterrupt)

CombatMove = createClass(CombatMoveBase, Interrupt)
CombatMoveCreaturePet = createClass(CombatMoveBase, CreaturePetInterrupt)
CombatMoveDroidPet = createClass(CombatMoveBase, DroidPetInterrupt)
CombatMoveFactionPet = createClass(CombatMoveBase, FactionPetInterrupt)
CombatMoveVillageRaider = createClass(CombatMoveBase, VillageRaiderInterrupt)
CombatMoveEnclaveSentinel = createClass(CombatMoveBase, EnclaveSentinelInterrupt)
CombatMoveDeathWatchDefender = createClass(CombatMoveBase, DeathWatchDefenderInterrupt)
CombatMoveCombatPatrol = createClass(CombatMoveBase, CombatPatrolInterrupt)

Walk = createClass(WalkBase, Interrupt)
WalkDefault = createClass(WalkBase, DefaultInterrupt)
WalkPack = createClass(WalkBase, PackInterrupt)
WalkCreaturePet = createClass(WalkBase, CreaturePetInterrupt)
WalkDroidPet = createClass(WalkBase, DroidPetInterrupt)
WalkFactionPet = createClass(WalkBase, FactionPetInterrupt)
WalkCityPatrol = createClass(WalkBase, CityPatrolInterrupt)
WalkCombatPatrol = createClass(WalkBase, CombatPatrolInterrupt)

GeneratePatrol = createClass(GeneratePatrolBase, Interrupt)
GeneratePatrolDefault = createClass(GeneratePatrolBase, DefaultInterrupt)
GeneratePatrolPack = createClass(GeneratePatrolBase, PackInterrupt)
GeneratePatrolVillageRaider = createClass(GeneratePatrolBase, VillageRaiderInterrupt)

Wait = createClass(WaitBase, Interrupt)
WaitDefault = createClass(WaitBase, DefaultInterrupt)
WaitPack = createClass(WaitBase, PackInterrupt)
WaitCreaturePet = createClass(WaitBase, CreaturePetInterrupt)
WaitDroidPet = createClass(WaitBase, DroidPetInterrupt)
WaitFactionPet = createClass(WaitBase, FactionPetInterrupt)
WaitEnclaveSentinel = createClass(WaitBase, EnclaveSentinelInterrupt)
WaitDeathWatchDefender = createClass(WaitBase, DeathWatchDefenderInterrupt)
WaitCityPatrol = createClass(WaitBase, CityPatrolInterrupt)
WaitCombatPatrol = createClass(WaitBase, CombatPatrolInterrupt)

Wait10 = createClass(Wait10Base, Interrupt)
Wait10Default = createClass(Wait10Base, DefaultInterrupt)
Wait10Pack = createClass(Wait10Base, PackInterrupt)
Wait10CreaturePet = createClass(Wait10Base, CreaturePetInterrupt)
Wait10DroidPet = createClass(Wait10Base, DroidPetInterrupt)
Wait10FactionPet = createClass(Wait10Base, FactionPetInterrupt)
Wait10VillageRaider = createClass(Wait10VillageRaiderBase, VillageRaiderInterrupt)

GetTarget = createClass(GetTargetBase, Interrupt)
GetTargetCreaturePet = createClass(GetTargetBase, CreaturePetInterrupt)
GetTargetDroidPet = createClass(GetTargetBase, DroidPetInterrupt)
GetTargetFactionPet = createClass(GetTargetBase, FactionPetInterrupt)
GetTargetVillageRaider = createClass(GetTargetBase, VillageRaiderInterrupt)
GetTargetEnclaveSentinel = createClass(GetTargetBase, EnclaveSentinelInterrupt)
GetTargetDeathWatchDefender = createClass(GetTargetBase, DeathWatchDefenderInterrupt)
GetTargetCombatPatrol = createClass(GetTargetBase, CombatPatrolInterrupt)

SelectWeapon = createClass(SelectWeaponBase, Interrupt)
SelectWeaponCreaturePet = createClass(SelectWeaponBase, CreaturePetInterrupt)
SelectWeaponDroidPet = createClass(SelectWeaponBase, DroidPetInterrupt)
SelectWeaponFactionPet = createClass(SelectWeaponBase, FactionPetInterrupt)
SelectWeaponVillageRaider = createClass(SelectWeaponBase, VillageRaiderInterrupt)
SelectWeaponEnclaveSentinel = createClass(SelectWeaponBase, EnclaveSentinelInterrupt)
SelectWeaponDeathWatchDefender = createClass(SelectWeaponBase, DeathWatchDefenderInterrupt)
SelectWeaponCombatPatrol = createClass(SelectWeaponBase, CombatPatrolInterrupt)

SelectAttack = createClass(SelectAttackBase, Interrupt)
SelectAttackCreaturePet = createClass(SelectAttackBase, CreaturePetInterrupt)
SelectAttackDroidPet = createClass(SelectAttackBase, DroidPetInterrupt)
SelectAttackFactionPet = createClass(SelectAttackBase, FactionPetInterrupt)
SelectAttackVillageRaider = createClass(SelectAttackBase, VillageRaiderInterrupt)
SelectAttackEnclaveSentinel = createClass(SelectAttackBase, EnclaveSentinelInterrupt)
SelectAttackDeathWatchDefender = createClass(SelectAttackBase, DeathWatchDefenderInterrupt)
SelectAttackCombatPatrol = createClass(SelectAttackBase, CombatPatrolInterrupt)

-- these are done backwards and should probably be moved
includeAiFile("actions/combatmove.lua")
includeAiFile("actions/walk.lua")
includeAiFile("actions/wait10.lua")
includeAiFile("actions/gettarget.lua")
includeAiFile("actions/selectweapon.lua")
includeAiFile("actions/selectattack.lua")

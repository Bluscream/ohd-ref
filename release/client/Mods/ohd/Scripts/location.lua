local UEHelpers = require("UEHelpers")

print("[MyLuaMod] Mod loaded\n")

local lastLocation = nil

function ReadPlayerLocation()
    local FirstPlayerController = UEHelpers:GetPlayerController()
    local Pawn = FirstPlayerController.Pawn
    local Location = Pawn:K2_GetActorLocation()
    Log(string.format("Player location: {X=%.3f, Y=%.3f, Z=%.3f}\n", Location.X, Location.Y, Location.Z))
    if lastLocation then
        Log(string.format("Player moved: {delta_X=%.3f, delta_Y=%.3f, delta_Z=%.3f}\n",
            Location.X - lastLocation.X,
            Location.Y - lastLocation.Y,
            Location.Z - lastLocation.Z)
        )
    end
    lastLocation = Location
    return true
end

RegisterConsoleCommandHandler("getPos", ReadPlayerLocation)
RegisterKeyBind(Key.F1, { ModifierKey.CONTROL }, function()
    Log("Key pressed\n")
    ExecuteInGameThread(function()
        ReadPlayerLocation()
    end)
end)
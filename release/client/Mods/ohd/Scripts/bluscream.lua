function bluscream(FullCommand, Parameters, Ar)
    -- If we have no parameters then just let someone else handle this command
    if #Parameters > 1 then return false end

    GlobalAr = Ar
    
    Log("Hello world <3")
    
    return true
end

NotifyOnNewObject("/Script/Engine.PlayerController", function(CreatedObject)
    Log(string.format("Object \"%s\" was created", CreatedObject))
end)

RegisterConsoleCommandHandler("bluscream", bluscream)
RegisterConsoleCommandHandler("blu", bluscream)

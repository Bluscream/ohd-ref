GlobalAr = nil

function Log(Message)
    Message = "[BLUSCREAM] " .. Message
    print(Message .. "\n")
    if type(GlobalAr) == "userdata" and GlobalAr:type() == "FOutputDevice" then
        GlobalAr:Log(Message)
    end
end

require("bluscream")
require("location")
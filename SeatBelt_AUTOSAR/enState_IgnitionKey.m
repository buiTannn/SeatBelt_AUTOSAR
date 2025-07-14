classdef enState_IgnitionKey < Simulink.IntEnumType
    enumeration
        OFF   (0)
        ACC   (1)
        ON    (2)
        CRANK (3)
    end

    methods (Static = true)
        function retVal = getHeaderFile()
            retVal = 'Rte_Type.h'; 
        end

        function retVal = getDataScope()
            retVal = 'Imported';  
        end
    end
end

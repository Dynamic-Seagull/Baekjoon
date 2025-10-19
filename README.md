# Baekjoon

graph TD
    %% Define Components
    subgraph Files [파일 컴포넌트]
        main_h[main.h]
        CreateShm_h[CreateShm.h]
        main_cpp[main.cpp]
        CreateShm_cpp[CreateShm.cpp]
    end

    %% Styles for visual distinction
    style CreateShm_cpp fill:#DAF7A6,stroke:#000000,stroke-width:2px
    style main_cpp fill:#F9E79F,stroke:#000000,stroke-width:2px
    classDef headerStyle fill:#D6EAF8,stroke:#1A5276
    class main_h, CreateShm_h headerStyle

    %% Data Structures (Interface 제공)
    subgraph DataStructures
        reqDataSet[(reqDataSet)]
        rcvDataSet[(rcvDataSet)]
    end
    
    CreateShm_h -- Defines --> reqDataSet
    CreateShm_h -- Defines --> rcvDataSet

    %% Dependencies (#include)
    main_cpp --> |#include| main_h
    main_cpp --> |#include| CreateShm_h
    CreateShm_cpp --> |#include| main_h
    CreateShm_cpp --> |#include| CreateShm_h

    %% Function Calls / Execution Flow
    main_cpp -.-|> |Calls FileMapping()| CreateShm_cpp
    main_cpp -.-|> |Spawns thread(readReqMsg)| CreateShm_cpp

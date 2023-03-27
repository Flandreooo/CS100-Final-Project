CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(unit-test)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
ADD_SUBDIRECTORY(googletest)

#[[
ADD_EXECUTABLE(DungeonTest
    DungeonTest.cpp
    Dungeon.cpp
    Character/character.cpp
    Friendly/friendly.cpp
    Enemy/enemy.cpp
    Player/Player.cpp
)

TARGET_LINK_LIBRARIES(EnemyTest gtest)
TARGET_COMPILE_DEFINITIONS(EnemyTest PRIVATE gtest_disable_pthreads=ON)]]

ADD_EXECUTABLE(testingFriend
    Friendly/testFriend.cpp
    Friendly/friendly.cpp
    Character/character.cpp
)

TARGET_LINK_LIBRARIES(testingFriend gmock gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testingFriend PRIVATE gtest_disable_pthreads=ON)

ADD_EXECUTABLE(testingCharacter
    Character/chartest.cpp
    Character/character.cpp
)

TARGET_LINK_LIBRARIES(testingCharacter gmock gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testingCharacter PRIVATE gtest_disable_pthreads=ON)

ADD_EXECUTABLE(testingEnemy
    Enemy/enemytester.cpp
    Enemy/enemy.cpp
    Character/character.cpp
)

TARGET_LINK_LIBRARIES(testingEnemy gmock gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testingEnemy PRIVATE gtest_disable_pthreads=ON)

ADD_EXECUTABLE(testingPlayer
    Player/playertest.cpp
    Player/Player.cpp
    Friendly/friendly.cpp
    Character/character.cpp
)

TARGET_LINK_LIBRARIES(testingPlayer gmock gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testingPlayer PRIVATE gtest_disable_pthreads=ON)

ADD_EXECUTABLE(runGame
    main.cpp
    GameMaster.cpp
    Dungeon.cpp
    GameText.cpp
    Character/character.cpp
    Friendly/friendly.cpp
    Enemy/enemy.cpp
    Player/Player.cpp
)

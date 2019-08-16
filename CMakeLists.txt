cmake_minimum_required(VERSION 3.8)
project(3d_pinball_space_cadet)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_C_COMPILER, gcc)
set(CMAKE_CXX_COMPILER, g++)

set(SOURCE_FILES
        Classes/Objlist/Objlist.cpp
        Classes/Objlist/objlist.h
        Classes/TBall/TBall.cpp
        Classes/TBall/TBall.h
        Classes/TBlocker/TBlocker.cpp
        Classes/TBumper/TBumper.cpp
        Classes/TCircle/TCircle.cpp
        Classes/TCollisionComponent/TCollisionComponent.cpp
        Classes/TComponentGroup/TComponentGroup.cpp
        Classes/TDemo/TDemo.cpp
        Classes/TDrain/TDrain.cpp
        Classes/TEdgeBox/TEdgeBox.cpp
        Classes/TEdgeBox/TEdgeBox.h
        Classes/TEdgeManager/TEdgeManager.cpp
        Classes/TEdgeManager/TEdgeManager.h
        Classes/TEdgeSegment/TEdgeSegment.cpp
        Classes/TFlagSpinner/TFlagSpinner.cpp
        Classes/TFlipper/TFlipper.cpp
        Classes/TFlipperEdge/TFlipperEdge.cpp
        Classes/TGate/TGate.cpp
        Classes/THole/THole.cpp
        Classes/TKickback/TKickback.cpp
        Classes/TKickout/TKickout.cpp
        Classes/TLight/TLight.cpp
        Classes/TLight/TLight.h
        Classes/TLightBargraph/TLightBargraph.cpp
        Classes/TLightBargraph/TLightBargraph.h
        Classes/TlightGroup/TLightGroup.cpp
        Classes/TlightGroup/TLightGroup.h
        Classes/TLightRollover/TLightRollover.cpp
        Classes/TLine/TLine.cpp
        Classes/TOneWay/TOneWay.cpp
        Classes/TPinballComponent/TPinballComponent.cpp
        Classes/TPinballComponent/TPinballComponent.h
        Classes/TPinballTable/TPinballTable.cpp
        Classes/TPlunger/TPlunger.cpp
        Classes/TPopupTarget/TPopupTarget.cpp
        Classes/TRamp/TRamp.cpp
        Classes/TRollover/TRollover.cpp
        Classes/TSink/TSink.cpp
        Classes/TSoloTarget/TSoloTarget.cpp
        Classes/TSound/TSound.cpp
        Classes/TSound/TSound.h
        Classes/TTableLayer/TTableLayer.cpp
        Classes/TTextBox/TTextBox.cpp
        Classes/TTextBoxMessage/TTextBoxMessage.cpp
        Classes/TTimer/TTimer.cpp
        Classes/TTripwire/TTripwire.cpp
        Classes/TWall/TWall.cpp
        Classes/TZmapList/TZmapList.cpp
        geometry/edges.cpp
        geometry/geometry.cpp
        graphics/flasher.cpp
        graphics/fullscreen.cpp
        graphics/graphics.cpp
        graphics/render.cpp
        graphics/splash.cpp
        graphics/timer.cpp
        partman/loader.cpp
        partman/partman.cpp
        sound/midi.cpp
        sound/sound.cpp
        about.cpp
        control.cpp
        exceptionhandling.cpp
        help.cpp
        highscore.cpp
        lights.cpp
        memory.cpp
        missions.cpp
        objlist.cpp
        options.cpp
        pinball.cpp
        pinball.h
        score.cpp
        table.cpp
        underscore.cpp
        vectors.cpp
        wavemix.cpp
        windows.cpp)

add_executable(3d_pinball_space_cadet ${SOURCE_FILES})
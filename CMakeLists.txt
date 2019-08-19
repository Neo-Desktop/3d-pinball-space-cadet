cmake_minimum_required(VERSION 3.8)
project(3d_pinball_space_cadet)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
		Classes/classes.h
        Classes/Objlist/Objlist_Class.cpp
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
        Forms/about.cpp
        Forms/options.cpp
        Forms/help.cpp
        Forms/highscore.cpp
		Forms/winmain.cpp
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
        sound/wavemix.cpp
        control.cpp
		guicon.cpp
        lights.cpp
        memory.cpp
        missions.cpp
        pinball.cpp
        pinball.h
        score.cpp
        table.cpp
        underscore.cpp
        vectors.cpp
        windows.cpp)

add_library(SDL2 IMPORTED SHARED)
set_target_properties(SDL2 PROPERTIES
  IMPORTED_LOCATION "/SDL/SDL2-2.0.10/lib/x64/SDL2.dll"
  INTERFACE_INCLUDE_DIRECTORIES "/SDL/SDL2-2.0.10/include"
)

add_library(SDL2_IMAGE IMPORTED SHARED)
set_target_properties(SDL2_IMAGE PROPERTIES
  IMPORTED_LOCATION "/SDL/SDL2_image-2.0.5/lib/x64/SDL2_image.dll"
  INTERFACE_INCLUDE_DIRECTORIES "/SDL/SDL2_image-2.0.5/include"
)

add_library(SDL2_MIXER IMPORTED SHARED)
set_target_properties(SDL2_MIXER PROPERTIES
  IMPORTED_LOCATION "/SDL/SDL2_mixer-2.0.4/lib/x64/SDL2_mixer.dll"
  INTERFACE_INCLUDE_DIRECTORIES "/SDL/SDL2_mixer-2.0.4/include"
)

target_link_libraries(SDL2 INTERFACE
	SDL2_IMAGE INTERFACE
	SDL2_MIXER INTERFACE)

include_directories(/SDL/SDL2-2.0.10/include
/SDL/SDL2_image-2.0.5/include
/SDL/SDL2_mixer-2.0.4/include)

add_executable(3d_pinball_space_cadet ${SOURCE_FILES})
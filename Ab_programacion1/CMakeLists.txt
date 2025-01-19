# CMakeList.txt: proyecto de CMake para Ab_programacion1, incluya el origen y defina
# la lógica específica del proyecto aquí.
#
cmake_minimum_required (VERSION 3.8)

# Habilite Recarga activa para los compiladores de MSVC si se admiten.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Ab_programacion1")

include_directories(${CMAKE_SOURCE_DIR} ../Ab_programacion1/include)

# Agregue un origen al ejecutable de este proyecto.
#add_executable (Ab_programacion1 "main.cpp" "Ab_programacion1.h")
add_executable(Ab_programacion1 "../Ab_programacion1/src/main.cpp" "../Ab_programacion1/src/Paciente.cpp" "../Ab_programacion1/src/Medico.cpp" "../Ab_programacion1/src/Cita.cpp" )


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Ab_programacion1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Agregue pruebas y destinos de instalación si es necesario.



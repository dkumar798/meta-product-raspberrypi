#TYPE: Soc
#Product: raspberrypi4
#@DESCRIPTION: Include only the default providers name for HAL,mfr,egl,iarmmgr,
#              device settings,dvrmgr,westeros,hdmicec and wifi.
#

PREFERRED_PROVIDER_virtual/kernel = "android-raspberrypi"
PREFERRED_PROVIDER_virtual/vendor-westeros-drm = "westeros-soc-drm"
PREFERRED_PROVIDER_virtual/vendor-westeros-soc = "westeros-soc"
PREFERRED_PROVIDER_virtual/vendor-westeros-sink = "westeros-sink"

PREFERRED_PROVIDER_virtual/egl = "${@bb.utils.contains("MACHINE_FEATURES", "vc4graphics", "mesa", "userland", d)}"
PREFERRED_PROVIDER_virtual/libgles2 = "${@bb.utils.contains("MACHINE_FEATURES", "vc4graphics", "mesa", "userland", d)}"
PREFERRED_PROVIDER_virtual/libgl = "${@bb.utils.contains("MACHINE_FEATURES", "vc4graphics", "mesa", "mesa-gl", d)}"
PREFERRED_PROVIDER_virtual/mesa = "${@bb.utils.contains("MACHINE_FEATURES", "vc4graphics", "mesa", "mesa-gl", d)}"
PREFERRED_PROVIDER_virtual/libgbm = "${@bb.utils.contains("MACHINE_FEATURES", "vc4graphics", "mesa", "mesa-gl", d)}"

PREFERRED_PROVIDER_virtual/vendor-devicesettings-hal = "devicesettings-hal-raspberrypi4"
PREFERRED_PROVIDER_virtual/vendor-iarmmgrs-hal = "iarmmgrs-hal-raspberrypi4"
PREFERRED_PROVIDER_virtual/mfrlib = "mfrlibs-hal-raspberrypi4"

#Temp add media-utils as provider for vendor-media-utils, to be re-worked if hal changes are required.
PREFERRED_PROVIDER_virtual/vendor-media-utils = "media-utils"

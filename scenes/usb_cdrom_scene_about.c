#include "../usb_cdrom_app_i.h"

void usb_cdrom_scene_about_on_enter(void* context) {
    UsbCdromApp* app = context;

    widget_add_text_scroll_element(
        app->widget,
        0,
        0,
        128,
        64,
        "\e#USB CD-ROM v" FAP_VERSION "\n"
        "Emulates a USB CD/DVD-ROM drive. The disc is an .iso image from the SD card.\n\n"
        "Put images in\n"
        "apps_data/usb_cdrom\n\n"
        "\e#Source code\n"
        "github.com/piersroberts/\n"
        "flippercd");

    view_dispatcher_switch_to_view(app->view_dispatcher, UsbCdromAppViewWidget);
}

bool usb_cdrom_scene_about_on_event(void* context, SceneManagerEvent event) {
    UNUSED(context);
    UNUSED(event);
    return false;
}

void usb_cdrom_scene_about_on_exit(void* context) {
    UsbCdromApp* app = context;
    widget_reset(app->widget);
}

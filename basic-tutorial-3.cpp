#include <gst/gst.h>

// Structure to contain all our information, so we can pass it around
typedef struct _CustomData
{
    GstElement *pipeline;
    GstElement *source;
    GstElement *convert;
    GstElement *sink;
} CustomData;

// Handler for the pad-added signal
static void pad_added_handler(GstElement *src, GstPad *new_pad, CustomData *data);

int main(int argc, char* argv[])
{
    CustomData data;
    GstBus *bus;
    GstMessage *msg;
    GstStateChangeReturn ret;
    gboolean terminate = FALSE;

    /* Initialize GStreamer */
    gst_init(&argc, &argv);

    /* Create the elements */
    data.source = gst_element_factory_make("uridecodebin", "source");
    data.convert = gst_element_factory_make("audioconvert", "convert");
    data.sink = gst_element_factory_make("autoaudiosink", "sink");

    /* Create the empty pipeline */
    data.pipeline = gst_pipeline_new("test-pipeline");

    if(!data.pipeline || !data.source || !data.convert || !data.sink) {
        g_printerr("Not all elements could be created.\n");
        return -1;
    }
}
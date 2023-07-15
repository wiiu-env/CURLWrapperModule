#ifdef __cplusplus
extern "C" {
#endif
#include <curl/curl.h>
#ifdef __cplusplus
}
#endif
#include "cacert_pem.h"
#include <curl/mprintf.h>
#include <wums.h>

WUMS_MODULE_EXPORT_NAME("homebrew_curlwrapper");

WUMS_APPLICATION_STARTS() {
    curl_global_init(CURL_GLOBAL_ALL);
}

WUMS_APPLICATION_ENDS() {
    curl_global_cleanup();
}

// to set socket options we need to use the function of this module.
WUMS_EXPORT_FUNCTION(setsockopt);

// Export curl functions
WUMS_EXPORT_FUNCTION(curl_share_init);
WUMS_EXPORT_FUNCTION(curl_share_setopt);
WUMS_EXPORT_FUNCTION(curl_share_cleanup);
WUMS_EXPORT_FUNCTION(curl_version_info);
WUMS_EXPORT_FUNCTION(curl_easy_strerror);
WUMS_EXPORT_FUNCTION(curl_share_strerror);
WUMS_EXPORT_FUNCTION(curl_easy_pause);
WUMS_EXPORT_FUNCTION(curl_strequal);
WUMS_EXPORT_FUNCTION(curl_strnequal);
WUMS_EXPORT_FUNCTION(curl_mime_init);
WUMS_EXPORT_FUNCTION(curl_mime_free);
WUMS_EXPORT_FUNCTION(curl_mime_addpart);
WUMS_EXPORT_FUNCTION(curl_mime_name);
WUMS_EXPORT_FUNCTION(curl_mime_filename);
WUMS_EXPORT_FUNCTION(curl_mime_type);
WUMS_EXPORT_FUNCTION(curl_mime_encoder);
WUMS_EXPORT_FUNCTION(curl_mime_data);
WUMS_EXPORT_FUNCTION(curl_mime_filedata);
WUMS_EXPORT_FUNCTION(curl_mime_data_cb);
WUMS_EXPORT_FUNCTION(curl_mime_subparts);
WUMS_EXPORT_FUNCTION(curl_mime_headers);
WUMS_EXPORT_FUNCTION(curl_formadd);
WUMS_EXPORT_FUNCTION(curl_formget);
WUMS_EXPORT_FUNCTION(curl_formfree);
WUMS_EXPORT_FUNCTION(curl_getenv);
WUMS_EXPORT_FUNCTION(curl_version);
WUMS_EXPORT_FUNCTION(curl_easy_escape);
WUMS_EXPORT_FUNCTION(curl_escape);
WUMS_EXPORT_FUNCTION(curl_easy_unescape);
WUMS_EXPORT_FUNCTION(curl_unescape);
WUMS_EXPORT_FUNCTION(curl_free);
WUMS_EXPORT_FUNCTION(curl_global_init_mem);
WUMS_EXPORT_FUNCTION(curl_global_sslset);
WUMS_EXPORT_FUNCTION(curl_slist_append);
WUMS_EXPORT_FUNCTION(curl_slist_free_all);
WUMS_EXPORT_FUNCTION(curl_getdate);
WUMS_EXPORT_FUNCTION(curl_multi_init);
WUMS_EXPORT_FUNCTION(curl_multi_add_handle);
WUMS_EXPORT_FUNCTION(curl_multi_remove_handle);
WUMS_EXPORT_FUNCTION(curl_multi_fdset);
WUMS_EXPORT_FUNCTION(curl_multi_wait);
WUMS_EXPORT_FUNCTION(curl_multi_poll);
WUMS_EXPORT_FUNCTION(curl_multi_wakeup);
WUMS_EXPORT_FUNCTION(curl_multi_perform);
WUMS_EXPORT_FUNCTION(curl_multi_cleanup);
WUMS_EXPORT_FUNCTION(curl_multi_info_read);
WUMS_EXPORT_FUNCTION(curl_multi_strerror);
WUMS_EXPORT_FUNCTION(curl_multi_socket);
WUMS_EXPORT_FUNCTION(curl_multi_socket_action);
WUMS_EXPORT_FUNCTION(curl_multi_socket_all);
WUMS_EXPORT_FUNCTION(curl_multi_timeout);
WUMS_EXPORT_FUNCTION(curl_multi_setopt);
WUMS_EXPORT_FUNCTION(curl_multi_assign);
WUMS_EXPORT_FUNCTION(curl_pushheader_bynum);
WUMS_EXPORT_FUNCTION(curl_pushheader_byname);
WUMS_EXPORT_FUNCTION(curl_easy_init);
WUMS_EXPORT_FUNCTION(curl_easy_setopt);
WUMS_EXPORT_FUNCTION(curl_easy_perform);
WUMS_EXPORT_FUNCTION(curl_easy_cleanup);
WUMS_EXPORT_FUNCTION(curl_easy_getinfo);
WUMS_EXPORT_FUNCTION(curl_easy_duphandle);
WUMS_EXPORT_FUNCTION(curl_easy_reset);
WUMS_EXPORT_FUNCTION(curl_easy_recv);
WUMS_EXPORT_FUNCTION(curl_easy_send);
WUMS_EXPORT_FUNCTION(curl_easy_upkeep);
WUMS_EXPORT_FUNCTION(curl_easy_header);
WUMS_EXPORT_FUNCTION(curl_easy_nextheader);
WUMS_EXPORT_FUNCTION(curl_mprintf);
WUMS_EXPORT_FUNCTION(curl_mfprintf);
WUMS_EXPORT_FUNCTION(curl_msprintf);
WUMS_EXPORT_FUNCTION(curl_msnprintf);
WUMS_EXPORT_FUNCTION(curl_mvprintf);
WUMS_EXPORT_FUNCTION(curl_mvfprintf);
WUMS_EXPORT_FUNCTION(curl_mvsprintf);
WUMS_EXPORT_FUNCTION(curl_mvsnprintf);
WUMS_EXPORT_FUNCTION(curl_maprintf);
WUMS_EXPORT_FUNCTION(curl_mvaprintf);
WUMS_EXPORT_FUNCTION(curl_easy_option_by_name);
WUMS_EXPORT_FUNCTION(curl_easy_option_by_id);
WUMS_EXPORT_FUNCTION(curl_easy_option_next);
WUMS_EXPORT_FUNCTION(curl_url);
WUMS_EXPORT_FUNCTION(curl_url_cleanup);
WUMS_EXPORT_FUNCTION(curl_url_dup);
WUMS_EXPORT_FUNCTION(curl_url_get);
WUMS_EXPORT_FUNCTION(curl_url_set);
WUMS_EXPORT_FUNCTION(curl_url_strerror);
WUMS_EXPORT_FUNCTION(curl_ws_send);
WUMS_EXPORT_FUNCTION(curl_ws_recv);

// Export cacerts
WUMS_EXPORT_DATA(cacert_pem);
WUMS_EXPORT_DATA(cacert_pem_size);
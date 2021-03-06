
#include <ccd/gdrive/model/gdrive_file.h>
#include <ccd/utils.h>

namespace ccd::gdrive
{
inline namespace v3
{
namespace model
{

file::capabilities::capabilities()
    : m_json(ccd::var::map_t{})
{

}

file::capabilities::capabilities(ccd::var js)
    : m_json(std::move(js))
{

}

ccd::var file::capabilities::to_json() const
{
    return m_json;
}

std::optional<bool> file::capabilities::get_can_add_children() const
{
    return get_value<bool>(m_json, "canAddChildren");
}

std::optional<bool> file::capabilities::get_can_change_copy_requires_writer_permission() const
{
    return get_value<bool>(m_json, "canChangeCopyRequiresWriterPermission");
}

std::optional<bool> file::capabilities::get_can_change_viewers_can_copy_content() const
{
    return get_value<bool>(m_json, "canChangeViewersCanCopyContent");
}

std::optional<bool> file::capabilities::get_can_comment() const
{
    return get_value<bool>(m_json, "canComment");
}

std::optional<bool> file::capabilities::get_can_copy() const
{
    return get_value<bool>(m_json, "canCopy");
}

std::optional<bool> file::capabilities::get_can_delete() const
{
    return get_value<bool>(m_json, "canDelete");
}

std::optional<bool> file::capabilities::get_can_delete_children() const
{
    return get_value<bool>(m_json, "canDeleteChildren");
}

std::optional<bool> file::capabilities::get_can_download() const
{
    return get_value<bool>(m_json, "canDownload");
}

std::optional<bool> file::capabilities::get_can_edit() const
{
    return get_value<bool>(m_json, "canEdit");
}

std::optional<bool> file::capabilities::get_can_list_children() const
{
    return get_value<bool>(m_json, "canListChildren");
}

std::optional<bool> file::capabilities::get_can_move_children_out_of_team_drive() const
{
    return get_value<bool>(m_json, "canMoveChildrenOutOfTeamDrive");
}

std::optional<bool> file::capabilities::get_can_move_children_within_team_drive() const
{
    return get_value<bool>(m_json, "canMoveChildrenWithinTeamDrive");
}

std::optional<bool> file::capabilities::get_can_move_item_into_team_drive() const
{
    return get_value<bool>(m_json, "canMoveItemIntoTeamDrive");
}

std::optional<bool> file::capabilities::get_can_move_item_out_of_team_drive() const
{
    return get_value<bool>(m_json, "canMoveItemOutOfTeamDrive");
}

std::optional<bool> file::capabilities::get_can_move_item_within_team_drive() const
{
    return get_value<bool>(m_json, "canMoveItemWithinTeamDrive");
}

std::optional<bool> file::capabilities::get_can_move_team_drive_item() const
{
    return get_value<bool>(m_json, "canMoveTeamDriveItem");
}

std::optional<bool> file::capabilities::get_can_read_revisions() const
{
    return get_value<bool>(m_json, "canReadRevisions");
}

std::optional<bool> file::capabilities::get_can_read_team_drive() const
{
    return get_value<bool>(m_json, "canReadTeamDrive");
}

std::optional<bool> file::capabilities::get_can_remove_children() const
{
    return get_value<bool>(m_json, "canRemoveChildren");
}

std::optional<bool> file::capabilities::get_can_rename() const
{
    return get_value<bool>(m_json, "canRename");
}

std::optional<bool> file::capabilities::get_can_share() const
{
    return get_value<bool>(m_json, "canShare");
}

std::optional<bool> file::capabilities::get_can_trash() const
{
    return get_value<bool>(m_json, "canTrash");
}

std::optional<bool> file::capabilities::get_can_trash_children() const
{
    return get_value<bool>(m_json, "canTrashChildren");
}

std::optional<bool> file::capabilities::get_can_untrash() const
{
    return get_value<bool>(m_json, "canUntrash");
}


file::capabilities& file::capabilities::set_can_add_children(std::optional<bool> x)
{
    set_value<bool>(m_json, "canAddChildren", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_change_copy_requires_writer_permission(std::optional<bool> x)
{
    set_value<bool>(m_json, "canChangeCopyRequiresWriterPermission", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_change_viewers_can_copy_content(std::optional<bool> x)
{
    set_value<bool>(m_json, "canChangeViewersCanCopyContent", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_comment(std::optional<bool> x)
{
    set_value<bool>(m_json, "canComment", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_copy(std::optional<bool> x)
{
    set_value<bool>(m_json, "canCopy", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_delete(std::optional<bool> x)
{
    set_value<bool>(m_json, "canDelete", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_delete_children(std::optional<bool> x)
{
    set_value<bool>(m_json, "canDeleteChildren", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_download(std::optional<bool> x)
{
    set_value<bool>(m_json, "canDownload", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_edit(std::optional<bool> x)
{
    set_value<bool>(m_json, "canEdit", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_list_children(std::optional<bool> x)
{
    set_value<bool>(m_json, "canListChildren", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_move_children_out_of_team_drive(std::optional<bool> x)
{
    set_value<bool>(m_json, "canMoveChildrenOutOfTeamDrive", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_move_children_within_team_drive(std::optional<bool> x)
{
    set_value<bool>(m_json, "canMoveChildrenWithinTeamDrive", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_move_item_into_team_drive(std::optional<bool> x)
{
    set_value<bool>(m_json, "canMoveItemIntoTeamDrive", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_move_item_out_of_team_drive(std::optional<bool> x)
{
    set_value<bool>(m_json, "canMoveItemOutOfTeamDrive", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_move_item_within_team_drive(std::optional<bool> x)
{
    set_value<bool>(m_json, "canMoveItemWithinTeamDrive", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_move_team_drive_item(std::optional<bool> x)
{
    set_value<bool>(m_json, "canMoveTeamDriveItem", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_read_revisions(std::optional<bool> x)
{
    set_value<bool>(m_json, "canReadRevisions", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_read_team_drive(std::optional<bool> x)
{
    set_value<bool>(m_json, "canReadTeamDrive", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_remove_children(std::optional<bool> x)
{
    set_value<bool>(m_json, "canRemoveChildren", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_rename(std::optional<bool> x)
{
    set_value<bool>(m_json, "canRename", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_share(std::optional<bool> x)
{
    set_value<bool>(m_json, "canShare", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_trash(std::optional<bool> x)
{
    set_value<bool>(m_json, "canTrash", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_trash_children(std::optional<bool> x)
{
    set_value<bool>(m_json, "canTrashChildren", x);
    return *this;
}

file::capabilities& file::capabilities::set_can_untrash(std::optional<bool> x)
{
    set_value<bool>(m_json, "canUntrash", x);
    return *this;
}

// ---------------------------------------------------------------------------------------------------------------------

file::content_hints::thumbnail::thumbnail()
    : m_json(ccd::var::map_t{})
{

}

file::content_hints::thumbnail::thumbnail(ccd::var js)
    : m_json(std::move(js))
{
}

ccd::var file::content_hints::thumbnail::to_json() const
{
    return m_json;
}

std::optional <std::string> file::content_hints::thumbnail::get_image() const
{
    return get_value<std::string>(m_json, "image");
}

std::optional <std::string> file::content_hints::thumbnail::get_mime_type() const
{
    return get_value<std::string>(m_json, "mimeType");
}

file::content_hints::thumbnail& file::content_hints::thumbnail::set_image(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "image", x);
    return *this;
}

file::content_hints::thumbnail& file::content_hints::thumbnail::set_mime_type(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "mimeType", x);
    return *this;
}

// ---------------------------------------------------------------------------------------------------------------------

file::content_hints::content_hints()
    : m_json(ccd::var::map_t{})
    , m_thumbnail(std::nullopt)
{

}

file::content_hints::content_hints(ccd::var js)
    : m_json(std::move(js))
    , m_thumbnail(create_object<thumbnail>(m_json, "thumbnail"))
{

}

ccd::var file::content_hints::to_json() const
{
    auto js = m_json;
    object_to_json(js, "thumbnail", m_thumbnail);

    return js;
}

std::optional <file::content_hints::thumbnail> file::content_hints::get_thumbnail() const
{
    return m_thumbnail;
}

std::optional <std::string> file::content_hints::get_indexable_text() const
{
    return get_value<std::string>(m_json, "indexableText");
}

file::content_hints& file::content_hints::set_thumbnail(std::optional <file::content_hints::thumbnail> x)
{
    m_thumbnail = std::move(x);
    return *this;
}

file::content_hints& file::content_hints::set_indexable_text(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "indexableText", x);
    return *this;
}

// ---------------------------------------------------------------------------------------------------------------------

file::image_media_metadata::location::location()
    : m_json(ccd::var::map_t{})
{

}

file::image_media_metadata::location::location(ccd::var js)
    : m_json(std::move(js))
{

}

ccd::var file::image_media_metadata::location::to_json() const
{
    return m_json;
}

std::optional<double> file::image_media_metadata::location::get_latitude() const
{
    return get_value<double>(m_json, "latitude");
}

std::optional<double> file::image_media_metadata::location::get_longitude() const
{
    return get_value<double>(m_json, "longitude");
}

std::optional<double> file::image_media_metadata::location::get_altitude() const
{
    return get_value<double>(m_json, "altitude");
}

file::image_media_metadata::location& file::image_media_metadata::location::set_latitude(std::optional<double> x)
{
    set_value<double>(m_json, "latitude", x);
    return *this;
}

file::image_media_metadata::location& file::image_media_metadata::location::set_longitude(std::optional<double> x)
{
    set_value<double>(m_json, "longitude", x);
    return *this;
}

file::image_media_metadata::location& file::image_media_metadata::location::set_altitude(std::optional<double> x)
{
    set_value<double>(m_json, "altitude", x);
    return *this;
}

// ---------------------------------------------------------------------------------------------------------------------

file::image_media_metadata::image_media_metadata()
    : m_json(ccd::var::map_t{})
    , m_location(std::nullopt)
{

}

file::image_media_metadata::image_media_metadata(ccd::var js)
    : m_json(std::move(js))
    , m_location(create_object<location>(m_json, "location"))
{

}

ccd::var file::image_media_metadata::to_json() const
{
    auto js = m_json;
    object_to_json(js, "location", m_location);

    return js;
}

std::optional <int32_t> file::image_media_metadata::get_width() const
{
    return get_value<ccd::var::int_t>(m_json, "width");
}

std::optional <int32_t> file::image_media_metadata::get_height() const
{
    return get_value<ccd::var::int_t>(m_json, "height");
}

std::optional <int32_t> file::image_media_metadata::get_rotation() const
{
    return get_value<ccd::var::int_t>(m_json, "rotation");
}

std::optional <file::image_media_metadata::location> file::image_media_metadata::get_location() const
{
    return m_location;
}

std::optional <std::string> file::image_media_metadata::get_time() const
{
    return get_value<std::string>(m_json, "time");
}

std::optional <std::string> file::image_media_metadata::get_camera_make() const
{
    return get_value<std::string>(m_json, "cameraMake");
}

std::optional <std::string> file::image_media_metadata::get_camera_model() const
{
    return get_value<std::string>(m_json, "cameraModel");
}

std::optional<double> file::image_media_metadata::get_exposure_time() const
{
    return get_value<double>(m_json, "exposureTime");
}

std::optional<double> file::image_media_metadata::get_aperture() const
{
    return get_value<double>(m_json, "aperture");
}

std::optional<bool> file::image_media_metadata::get_flash_used() const
{
    return get_value<bool>(m_json, "flashUsed");
}

std::optional<double> file::image_media_metadata::get_focal_length() const
{
    return get_value<double>(m_json, "focalLength");
}

std::optional <int32_t> file::image_media_metadata::get_iso_speed() const
{
    return get_value<ccd::var::int_t>(m_json, "isoSpeed");
}

std::optional <std::string> file::image_media_metadata::get_metering_mode() const
{
    return get_value<std::string>(m_json, "meteringMode");
}

std::optional <std::string> file::image_media_metadata::get_sensor() const
{
    return get_value<std::string>(m_json, "sensor");
}

std::optional <std::string> file::image_media_metadata::get_exposure_mode() const
{
    return get_value<std::string>(m_json, "exposureMode");
}

std::optional <std::string> file::image_media_metadata::get_color_space() const
{
    return get_value<std::string>(m_json, "colorSpace");
}

std::optional <std::string> file::image_media_metadata::get_white_balance() const
{
    return get_value<std::string>(m_json, "whiteBalance");
}

std::optional<double> file::image_media_metadata::get_exposure_bias() const
{
    return get_value<double>(m_json, "exposureBias");
}

std::optional<double> file::image_media_metadata::get_max_aperture_value() const
{
    return get_value<double>(m_json, "maxApertureValue");
}

std::optional <int32_t> file::image_media_metadata::get_subject_distance() const
{
    return get_value<ccd::var::int_t>(m_json, "subjectDistance");
}

std::optional <std::string> file::image_media_metadata::get_lens() const
{
    return get_value<std::string>(m_json, "lens");
}

file::image_media_metadata& file::image_media_metadata::set_width(std::optional <int32_t> x)
{
    set_value<ccd::var::int_t>(m_json, "width", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_height(std::optional <int32_t> x)
{
    set_value<ccd::var::int_t>(m_json, "height", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_rotation(std::optional <int32_t> x)
{
    set_value<ccd::var::int_t>(m_json, "rotation", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_location(
    std::optional <file::image_media_metadata::location> x)
{
    m_location = std::move(x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_time(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "time", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_camera_make(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "cameraMake", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_camera_model(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "cameraModel", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_exposure_time(std::optional<double> x)
{
    set_value<double>(m_json, "exposureTime", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_aperture(std::optional<double> x)
{
    set_value<double>(m_json, "aperture", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_flash_used(std::optional<bool> x)
{
    set_value<bool>(m_json, "flashUsed", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_focal_length(std::optional<double> x)
{
    set_value<double>(m_json, "focalLength", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_iso_lpeed(std::optional <int32_t> x)
{
    set_value<ccd::var::int_t>(m_json, "isoSpeed", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_metering_mode(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "meteringMode", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_sensor(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "sensor", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_exposure_mode(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "exposureMode", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_color_space(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "colorSpace", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_white_balance(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "whiteBalance", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_exposure_bias(std::optional<double> x)
{
    set_value<double>(m_json, "exposureBias", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_max_aperture_value(std::optional<double> x)
{
    set_value<double>(m_json, "maxApertureValue", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_subject_distance(std::optional <int32_t> x)
{
    set_value<ccd::var::int_t>(m_json, "subjectDistance", x);
    return *this;
}

file::image_media_metadata& file::image_media_metadata::set_lens(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "lens", x);
    return *this;
}

// ---------------------------------------------------------------------------------------------------------------------

file::video_media_metadata::video_media_metadata()
    : m_json(ccd::var::map_t{})
{

}

file::video_media_metadata::video_media_metadata(ccd::var js)
    : m_json(std::move(js))
{

}

ccd::var file::video_media_metadata::to_json() const
{
    return m_json;
}

std::optional <int32_t> file::video_media_metadata::get_width() const
{
    return get_value<ccd::var::int_t>(m_json, "width");
}

std::optional <int32_t> file::video_media_metadata::get_heigth() const
{
    return get_value<ccd::var::int_t>(m_json, "height");
}

std::optional <int64_t> file::video_media_metadata::get_duration_millis() const
{
    return get_value<ccd::var::int_t>(m_json, "durationMillis");
}

file::video_media_metadata& file::video_media_metadata::get_width(std::optional <int32_t> x)
{
    set_value<ccd::var::int_t>(m_json, "width", x);
    return *this;
}

file::video_media_metadata& file::video_media_metadata::get_heigth(std::optional <int32_t> x)
{
    set_value<ccd::var::int_t>(m_json, "height", x);
    return *this;
}

file::video_media_metadata& file::video_media_metadata::get_duration_millis(std::optional <int64_t> x)
{
    set_value<ccd::var::int_t>(m_json, "durationMillis", x);
    return *this;
}

// ---------------------------------------------------------------------------------------------------------------------

file::file()
    : m_json(ccd::var::map_t{})
    , m_trashing_user(std::nullopt)
    , m_parents(std::nullopt)
    , m_properties(std::nullopt)
    , m_app_properties(std::nullopt)
    , m_spaces(std::nullopt)
    , m_sharing_user(std::nullopt)
    , m_owners(std::nullopt)
    , m_last_modifying_user(std::nullopt)
    , m_capabilities(std::nullopt)
    , m_permissions(std::nullopt)
    , m_permission_ids(std::nullopt)
    , m_content_hints(std::nullopt)
    , m_image_media_metadata(std::nullopt)
    , m_video_media_metadata(std::nullopt)
    , m_export_links(std::nullopt)
{

}

file::file(ccd::var js)
    : m_json(js)
    , m_trashing_user{ create_object<user>(m_json, "trashingUser") }
    , m_parents{ create_string_list(m_json, "parents") }
    , m_properties{ create_key_value_list(m_json, "properties") }
    , m_app_properties{ create_key_value_list(m_json, "appProperties") }
    , m_spaces{ create_string_list(m_json, "spaces") }
    , m_sharing_user{ create_object<user>(m_json, "sharingUser") }
    , m_owners{ create_object_list<user>(m_json, "owners") }
    , m_last_modifying_user{ create_object<user>(m_json, "lastModifyingUser") }
    , m_capabilities{ create_object<capabilities>(m_json, "capabilities") }
    , m_permissions{ create_object_list<permission>(m_json, "permissions") }
    , m_permission_ids{ create_string_list(m_json, "permissionIds") }
    , m_content_hints{ create_object<content_hints>(m_json, "contentHints") }
    , m_image_media_metadata{ create_object<image_media_metadata>(m_json, "imageMediaMetadata") }
    , m_video_media_metadata{ create_object<video_media_metadata>(m_json, "videoMediaMetadata") }
    , m_export_links{ create_key_value_list(m_json, "exportLinks") }
{

}

ccd::var file::to_json() const
{
    auto js = m_json;
    object_to_json(js, "trashingUser", m_trashing_user);
    string_list_to_json(js, "parents", m_parents);
    key_value_list_to_json(js, "properties", m_properties);
    key_value_list_to_json(js, "appProperties", m_app_properties);
    string_list_to_json(js, "spaces", m_spaces);
    object_to_json(js, "sharingUser", m_sharing_user);
    object_list_to_json(js, "owners", m_owners);
    object_to_json(js, "lastModifyingUser", m_last_modifying_user);
    object_to_json(js, "capabilities", m_capabilities);
    object_list_to_json(js, "permissions", m_permissions);
    string_list_to_json(js, "permissionIds", m_permission_ids);
    object_to_json(js, "contentHints", m_content_hints);
    object_to_json(js, "imageMediaMetadata", m_image_media_metadata);
    object_to_json(js, "videoMediaMetadata", m_video_media_metadata);
    key_value_list_to_json(js, "exportLinks", m_export_links);

    return js;
}

std::optional <std::string> file::get_id() const
{
    return get_value<std::string>(m_json, "id");
}

std::optional <std::string> file::get_name() const
{
    return get_value<std::string>(m_json, "name");
}

std::optional <std::string> file::get_mime_type() const
{
    return get_value<std::string>(m_json, "mimeType");
}

std::optional <std::string> file::get_description() const
{
    return get_value<std::string>(m_json, "description");
}

std::optional<bool> file::get_starred() const
{
    return get_value<bool>(m_json, "starred");
}

std::optional<bool> file::get_trashed() const
{
    return get_value<bool>(m_json, "trashed");
}

std::optional<bool> file::get_explicitly_trashed() const
{
    return get_value<bool>(m_json, "explicitlyTrashed");
}

std::optional <user> file::get_trashing_user() const
{
    return m_trashing_user;
}

std::optional <timestamp_t> file::get_trashed_time() const
{
    return get_value<std::string>(m_json, "trashedTime");
}

std::optional <string_list_t> file::get_parents() const
{
    return m_parents;
}

std::optional <key_value_list_t> file::get_properties() const
{
    return m_properties;
}

std::optional <key_value_list_t> file::get_app_properties() const
{
    return m_app_properties;
}

std::optional <string_list_t> file::get_spaces() const
{
    return m_spaces;
}

std::optional <int64_t> file::get_version() const
{
    return get_value<ccd::var::int_t>(m_json, "version");
}

std::optional <std::string> file::get_web_content_link() const
{
    return get_value<std::string>(m_json, "webContentLink");
}

std::optional <std::string> file::get_web_view_link() const
{
    return get_value<std::string>(m_json, "webViewLink");
}

std::optional <std::string> file::get_icon_link() const
{
    return get_value<std::string>(m_json, "iconLink");
}

std::optional<bool> file::get_has_thumbnail() const
{
    return get_value<bool>(m_json, "hasThumbnail");
}

std::optional <std::string> file::get_thumbnail_link() const
{
    return get_value<std::string>(m_json, "thumbnailLink");
}

std::optional <int64_t> file::get_thumbnail_version() const
{
    return get_value<ccd::var::int_t>(m_json, "thumbnailVersion");
}

std::optional<bool> file::get_viewed_by_me() const
{
    return get_value<bool>(m_json, "viewedByMe");
}

std::optional <timestamp_t> file::get_viewed_by_me_time() const
{
    return get_value<std::string>(m_json, "viewedByMeTime");
}

std::optional <timestamp_t> file::get_created_time() const
{
    return get_value<std::string>(m_json, "createdTime");
}

std::optional <timestamp_t> file::get_modified_time() const
{
    return get_value<std::string>(m_json, "modifiedTime");
}

std::optional <timestamp_t> file::get_modified_by_me_time() const
{
    return get_value<std::string>(m_json, "modifiedByMeTime");
}

std::optional<bool> file::get_modified_by_me() const
{
    return get_value<bool>(m_json, "modifiedByMe");
}

std::optional <timestamp_t> file::get_shared_with_me_time() const
{
    return get_value<std::string>(m_json, "sharedWithMeTime");
}

std::optional <user> file::get_sharing_user() const
{
    return m_sharing_user;
}

std::optional <std::vector<user>> file::get_owners() const
{
    return m_owners;
}

std::optional <std::string> file::get_teamdrive_id() const
{
    return get_value<std::string>(m_json, "teamDriveId");
}

std::optional <user> file::get_last_modifying_user() const
{
    return m_last_modifying_user;
}

std::optional<bool> file::get_shared() const
{
    return get_value<bool>(m_json, "shared");
}

std::optional<bool> file::get_owned_by_me() const
{
    return get_value<bool>(m_json, "ownedByMe");
}

std::optional <file::capabilities> file::get_capabilities() const
{
    return m_capabilities;
}

std::optional<bool> file::get_viewers_can_copy_content() const
{
    return get_value<bool>(m_json, "viewersCanCopyContent");
}

std::optional<bool> file::get_copy_requires_writer_permission() const
{
    return get_value<bool>(m_json, "copyRequiresWriterPermission");
}

std::optional<bool> file::get_writers_can_share() const
{
    return get_value<bool>(m_json, "writersCanShare");
}

std::optional <permission_list_t> file::get_permissions() const
{
    return m_permissions;
}

std::optional <string_list_t> file::get_permission_ids() const
{
    return m_permission_ids;
}

std::optional<bool> file::get_has_augmented_permissions() const
{
    return get_value<bool>(m_json, "hasAugmentedPermissions");
}

std::optional <std::string> file::get_folder_color_rgb() const
{
    return get_value<std::string>(m_json, "folderColorRgb");
}

std::optional <std::string> file::get_original_filename() const
{
    return get_value<std::string>(m_json, "originalFilename");
}

std::optional <std::string> file::get_full_file_extension() const
{
    return get_value<std::string>(m_json, "fullFileExtension");
}

std::optional <std::string> file::get_file_extension() const
{
    return get_value<std::string>(m_json, "fileExtension");
}

std::optional <std::string> file::get_md5_checksum() const
{
    return get_value<std::string>(m_json, "md5Checksum");
}

std::optional <int64_t> file::get_size() const
{
    return get_value<ccd::var::int_t>(m_json, "size");
}

std::optional <int64_t> file::get_quota_bytes_used() const
{
    return get_value<ccd::var::int_t>(m_json, "quotaBytesUsed");
}

std::optional <std::string> file::get_head_revision_id() const
{
    return get_value<std::string>(m_json, "headRevisionId");
}

std::optional <file::content_hints> file::get_content_hints() const
{
    return m_content_hints;
}

std::optional <file::image_media_metadata> file::get_image_media_metadata() const
{
    return m_image_media_metadata;
}

std::optional <file::video_media_metadata> file::get_video_media_metadata() const
{
    return m_video_media_metadata;
}

std::optional<bool> file::get_is_app_authorized() const
{
    return get_value<bool>(m_json, "isAppAuthorized");
}

std::optional <key_value_list_t> file::get_export_links() const
{
    return m_export_links;
}

file& file::set_id(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "id", x);
    return *this;
}

file& file::set_name(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "name", x);
    return *this;
}

file& file::set_mime_type(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "mimeType", x);
    return *this;
}

file& file::set_description(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "description", x);
    return *this;
}

file& file::set_starred(std::optional<bool> x)
{
    set_value<bool>(m_json, "starred", x);
    return *this;
}

file& file::set_trashed(std::optional<bool> x)
{
    set_value<bool>(m_json, "trashed", x);
    return *this;
}

file& file::set_explicitly_trashed(std::optional<bool> x)
{
    set_value<bool>(m_json, "explicitlyTrashed", x);
    return *this;
}

file& file::set_trashing_user(std::optional <user> x)
{
    m_trashing_user = std::move(x);
    return *this;
}

file& file::set_trashed_time(std::optional <timestamp_t> x)
{
    set_value<std::string>(m_json, "trashedTime", x);
    return *this;
}

file& file::set_parents(std::string x)
{
    m_parents = string_list_t{ std::move(x) };
    return *this;
}

file& file::set_parents(string_list_t x)
{
    m_parents = std::move(x);
    return *this;
}

file& file::set_parents(std::optional <string_list_t> x)
{
    m_parents = std::move(x);
    return *this;
}

file& file::set_properties(std::optional <key_value_list_t> x)
{
    m_properties = std::move(x);
    return *this;
}

file& file::set_app_properties(std::optional <key_value_list_t> x)
{
    m_app_properties = std::move(x);
    return *this;
}

file& file::set_spaces(std::optional <string_list_t> x)
{
    m_spaces = std::move(x);
    return *this;
}

file& file::set_version(std::optional <int64_t> x)
{
    set_value<ccd::var::int_t>(m_json, "version", x);
    return *this;
}

file& file::set_web_content_link(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "webContentLink", x);
    return *this;
}

file& file::set_web_view_link(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "webViewLink", x);
    return *this;
}

file& file::set_icon_link(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "iconLink", x);
    return *this;
}

file& file::set_has_thumbnail(std::optional<bool> x)
{
    set_value<bool>(m_json, "hasThumbnail", x);
    return *this;
}

file& file::set_thumbnail_link(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "thumbnailLink", x);
    return *this;
}

file& file::set_thumbnail_version(std::optional <int64_t> x)
{
    set_value<ccd::var::int_t>(m_json, "thumbnailVersion", x);
    return *this;
}

file& file::set_viewed_by_me(std::optional<bool> x)
{
    set_value<bool>(m_json, "viewedByMe", x);
    return *this;
}

file& file::set_viewed_by_me_time(std::optional <timestamp_t> x)
{
    set_value<std::string>(m_json, "viewedByMeTime", x);
    return *this;
}

file& file::set_created_time(std::optional <timestamp_t> x)
{
    set_value<std::string>(m_json, "createdTime", x);
    return *this;
}

file& file::set_modified_time(std::optional <timestamp_t> x)
{
    set_value<std::string>(m_json, "modifiedTime", x);
    return *this;
}

file& file::set_modified_by_me_time(std::optional <timestamp_t> x)
{
    set_value<std::string>(m_json, "modifiedByMeTime", x);
    return *this;
}

file& file::set_modified_by_me(std::optional<bool> x)
{
    set_value<bool>(m_json, "modifiedByMe", x);
    return *this;
}

file& file::set_shared_with_me_time(std::optional <timestamp_t> x)
{
    set_value<std::string>(m_json, "sharedWithMeTime", x);
    return *this;
}

file& file::set_sharing_user(std::optional <user> x)
{
    m_sharing_user = std::move(x);
    return *this;
}

file& file::set_owners(std::optional <user_list_t> x)
{
    m_owners = std::move(x);
    return *this;
}

file& file::set_teamdrive_id(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "teamDriveId", x);
    return *this;
}

file& file::set_last_modifying_user(std::optional <user> x)
{
    m_last_modifying_user = std::move(x);
    return *this;
}

file& file::set_shared(std::optional<bool> x)
{
    set_value<bool>(m_json, "shared", x);
    return *this;
}

file& file::set_owned_by_me(std::optional<bool> x)
{
    set_value<bool>(m_json, "ownedByMe", x);
    return *this;
}

file& file::set_capabilities(std::optional <file::capabilities> x)
{
    m_capabilities = std::move(x);
    return *this;
}

file& file::set_viewers_can_copy_content(std::optional<bool> x)
{
    set_value<bool>(m_json, "viewersCanCopyContent", x);
    return *this;
}

file& file::set_copy_requires_writer_permission(std::optional<bool> x)
{
    set_value<bool>(m_json, "copyRequiresWriterPermission", x);
    return *this;
}

file& file::set_writers_can_share(std::optional<bool> x)
{
    set_value<bool>(m_json, "writersCanShare", x);
    return *this;
}

file& file::set_permissions(std::optional <permission_list_t> x)
{
    m_permissions = std::move(x);
    return *this;
}

file& file::set_permission_ids(std::optional <string_list_t> x)
{
    m_permission_ids = std::move(x);
    return *this;
}

file& file::set_has_augmented_permissions(std::optional<bool> x)
{
    set_value<bool>(m_json, "hasAugmentedPermissions", x);
    return *this;
}

file& file::set_folder_color_rgb(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "folderColorRgb", x);
    return *this;
}

file& file::set_original_filename(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "originalFilename", x);
    return *this;
}

file& file::set_full_file_extension(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "fullFileExtension", x);
    return *this;
}

file& file::set_file_extension(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "fileExtension", x);
    return *this;
}

file& file::set_md5_checksum(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "md5Checksum", x);
    return *this;
}

file& file::set_size(std::optional <int64_t> x)
{
    set_value<ccd::var::int_t>(m_json, "size", x);
    return *this;
}

file& file::set_quota_bytes_used(std::optional <int64_t> x)
{
    set_value<ccd::var::int_t>(m_json, "quotaBytesUsed", x);
    return *this;
}

file& file::set_head_revision_id(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "headRevisionId", x);
    return *this;
}

file& file::set_content_hints(std::optional <file::content_hints> x)
{
    m_content_hints = std::move(x);
    return *this;
}

file& file::set_image_media_metadata(std::optional <file::image_media_metadata> x)
{
    m_image_media_metadata = std::move(x);
    return *this;
}

file& file::set_video_media_metadata(std::optional <file::video_media_metadata> x)
{
    m_video_media_metadata = std::move(x);
    return *this;
}

file& file::set_is_app_authorized(std::optional<bool> x)
{
    set_value<bool>(m_json, "isAppAuthorized", x);
    return *this;
}

file& file::set_export_links(std::optional <key_value_list_t> x)
{
    m_export_links = std::move(x);
    return *this;
}

// ---------------------------------------------------------------------------------------------------------------------

file_list::file_list()
    : m_json(ccd::var::map_t{})
    , m_files(std::nullopt)
{

}

file_list::file_list(ccd::var js)
    : m_json(std::move(js))
    , m_files(create_object_list<file>(m_json, "files"))
{

}

ccd::var file_list::to_json() const
{
    auto js = m_json;
    object_list_to_json(js, "files", m_files);

    return js;
}

std::optional <std::string> file_list::get_next_page_token() const
{
    return get_value<std::string>(m_json, "nextPageToken");
}

std::optional<bool> file_list::get_incomplete_search() const
{
    return get_value<bool>(m_json, "incompleteSearch");
}

std::optional <file_list_t> file_list::get_files() const
{
    return m_files;
}

file_list& file_list::set_next_page_token(std::optional <std::string> x)
{
    set_value<std::string>(m_json, "nextPageToken", x);
    return *this;
}

file_list& file_list::set_incomplete_search(std::optional<bool> x)
{
    set_value<bool>(m_json, "nextPageToken", x);
    return *this;
}

file_list& file_list::set_files(std::optional <file_list_t> x)
{
    m_files = std::move(x);
    return *this;
}

}
}
}

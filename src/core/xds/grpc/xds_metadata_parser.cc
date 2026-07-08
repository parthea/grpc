#include "src/core/xds/grpc/xds_metadata_parser.h"

namespace grpc_core {

XdsMetadataMap ParseXdsMetadataMap(
    const XdsResourceType::DecodeContext&,
    const envoy_config_core_v3_Metadata*,
    ValidationErrors*) {
  return XdsMetadataMap();
}

} // namespace grpc_core

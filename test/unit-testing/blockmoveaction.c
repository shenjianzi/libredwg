// TODO DEBUGGING
#define DWG_TYPE DWG_TYPE_BLOCKMOVEACTION
#include "common.c"

void
api_process (dwg_object *obj)
{
  int error, isnew;
  BITCODE_BL i;
  BLOCKACTION_fields;
  BITCODE_BL info_num1;
  BITCODE_T info_text1;
  BITCODE_BL info_num2;
  BITCODE_T info_text2;
  BLOCKACTION_doubles_fields;

  Dwg_Version_Type dwg_version = obj->parent->header.version;
#ifdef DEBUG_CLASSES
  dwg_obj_blockmoveaction *_obj = dwg_object_to_BLOCKMOVEACTION (obj);

  // AcDbBlockAction
  CHK_ENTITY_3RD (_obj, BLOCKMOVEACTION, ba_pt);
  CHK_ENTITY_TYPE (_obj, BLOCKMOVEACTION, num_actions, BL);
  CHK_ENTITY_VECTOR_TYPE (_obj, BLOCKMOVEACTION, actions, num_actions, BL);
  CHK_ENTITY_TYPE (_obj, BLOCKMOVEACTION, num_deps, BL);
  CHK_ENTITY_HV (_obj, BLOCKMOVEACTION, deps, num_deps);
  // AcDbBlockMoveAction
  CHK_ENTITY_TYPE (_obj, BLOCKMOVEACTION, info_num1, BL);
  CHK_ENTITY_UTF8TEXT (_obj, BLOCKMOVEACTION, info_text1);
  CHK_ENTITY_TYPE (_obj, BLOCKMOVEACTION, info_num2, BL);
  CHK_ENTITY_UTF8TEXT (_obj, BLOCKMOVEACTION, info_text2);
  CHK_ENTITY_TYPE (_obj, BLOCKMOVEACTION, action_offset_x, BD);
  CHK_ENTITY_TYPE (_obj, BLOCKMOVEACTION, action_offset_y, BD);
  CHK_ENTITY_TYPE (_obj, BLOCKMOVEACTION, angle_offset, BD);
#endif
}

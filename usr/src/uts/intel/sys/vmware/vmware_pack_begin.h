/*********************************************************
 * Copyright (C) 2002 VMware, Inc. All rights reserved.
 *
 * The contents of this file are subject to the terms of the Common
 * Development and Distribution License (the "License") version 1.0
 * and no later version.  You may not use this file except in
 * compliance with the License.
 *
 * You can obtain a copy of the License at
 *         http://www.opensource.org/licenses/cddl1.php
 *
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 *********************************************************/

/*
 * vmware_pack_begin.h --
 *
 *    Begin of structure packing. See vmware_pack_init.h for details.
 *
 *    Note that we do not use the following construct in this include file,
 *    because we want to emit the code every time the file is included --hpreg
 *
 *    #ifndef foo
 *    #   define foo
 *    ...
 *    #endif
 *
 */

#ifdef _MSC_VER
#   pragma pack(push, 1)
#elif __GNUC__
#else
#   pragma pack(1)
#endif

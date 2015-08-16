/*
* Boghe IMS/RCS Client - Copyright (C) 2010 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou(at)doubango.org>
*	
* This file is part of Boghe Project (http://code.google.com/p/boghe)
*
* Boghe is free software: you can redistribute it and/or modify it under the terms of 
* the GNU General Public License as published by the Free Software Foundation, either version 3 
* of the License, or (at your option) any later version.
*	
* Boghe is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
* See the GNU General Public License for more details.
*	
* You should have received a copy of the GNU General Public License along 
* with this program; if not, write to the Free Software Foundation, Inc., 
* 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BogheXdm
{
    /// <summary>
    /// OMA and RCS special names
    /// </summary>
    public static class SpecialNames
    {
        static readonly List<String> values;

        static SpecialNames()
        {
            SpecialNames.values = new List<string>();
            values.AddRange(new String[] 
            { 
                // Shared lists (Enhanced Address Book)
                SpecialNames.SHARED_RCS,
                SpecialNames.SHARED_OMA_BUDDYLIST,
                SpecialNames.SHARED_OMA_GRANTEDCONTACTS,
                SpecialNames.SHARED_OMA_BLOCKEDCONTACTS,
                SpecialNames.SHARED_RCS_BLOCKEDCONTACTS,
                SpecialNames.SHARED_RCS_REVOKEDCONTACTS,
                SpecialNames.SHARED_OMA_POCBUDDYLIST,
                SpecialNames.SHARED_OMA_ALLCONTACTS,
            }
            );
        }

        public static bool IsSpecial(String name)
        {
            if (!String.IsNullOrEmpty(name))
            {
                return SpecialNames.values.Contains(name);
            }
            return false;
        }

        public static Authorization GetAutorization(String name)
        {
            if (String.IsNullOrEmpty(name))
            {
                return Authorization.UnKnown;
            }

            switch (name)
            {
                case SpecialNames.SHARED_RCS:
                case SpecialNames.SHARED_OMA_BUDDYLIST:
                case SpecialNames.SHARED_OMA_GRANTEDCONTACTS:
                case SpecialNames.SHARED_OMA_POCBUDDYLIST:
                    return Authorization.Allowed;

                case SpecialNames.SHARED_RCS_BLOCKEDCONTACTS:
                case SpecialNames.SHARED_OMA_BLOCKEDCONTACTS:
                    return Authorization.Blocked;

                case SpecialNames.SHARED_RCS_REVOKEDCONTACTS:
                    return Authorization.Revoked;

                default:
                    return Authorization.UnKnown;
            }
        }

        /// <summary>
        /// Doubango default list
        /// </summary>
        public const String SHARED_DOUBANGO = "doubango";

        /// <summary>
        /// Defined in: GSMA RCS phase 1 - Technical Realisation section 4.2.2.
        /// This list includes all contacts you have a (symmetric) presence relation with. 
        /// Commonly referred in RCS from both the “buddylist” and “granted contacts” lists as all your buddies shall be allowed to see your presence (symmetric).
        /// </summary>
        public const String SHARED_RCS = "rcs";

        /// <summary>
        /// Defined in: GSMA RCS phase 1 - Technical Realisation section 4.2.2.
        /// Also defined in: OMA-WP-XDM_1_1_Implementation_Guidelines-20081209-A section 5.1.1.1
        /// Contains a reference to the “rcs” list where the actual buddies are stored. 
        /// The “oma_buddylist” is not explicitly used and exists for compliance to [PRESENCEIG] and future extensibility.
        /// Note: "oma_grantedcontacts" list and "oma_buddylist" list have the same content. That is why it is possible to point to the same "rcs" list.
        /// </summary>
        public const String SHARED_OMA_BUDDYLIST = "oma_buddylist";

        /// <summary>
        /// Defined in: GSMA RCS phase 1 - Technical Realisation section 4.2.2.
        /// Also defined in: OMA-WP-XDM_1_1_Implementation_Guidelines-20081209-A section 5.1.1.1
        /// This list includes all contacts you have authorized to see your presence information. Contains a reference to “rcs” list
        /// Note: "oma_grantedcontacts" list and "oma_buddylist" list have the same content. That is why it is possible to point to the same "rcs" list.
        /// </summary>
        public const String SHARED_OMA_GRANTEDCONTACTS = "oma_grantedcontacts";

        /// <summary>
        /// Defined in: GSMA RCS phase 1 - Technical Realisation section 4.2.2.
        /// Also defined in: OMA-WP-XDM_1_1_Implementation_Guidelines-20081209-A section 5.1.1.1
        /// Contains a reference to the “rcs_blockedcontacts” list where the actual permanently blocked contacts are stored and to the “rcs_revokedcontacts” list with 
        /// the revoked users that are temporarily being blocked.
        /// </summary>
        public const String SHARED_OMA_BLOCKEDCONTACTS = "oma_blockedcontacts";

        /// <summary>
        /// Defined in: GSMA RCS phase 1 - Technical Realisation section 4.2.2.
        /// Contains all permanently blocked contacts
        /// </summary>
        public const String SHARED_RCS_BLOCKEDCONTACTS = "rcs_blockedcontacts";

        /// <summary>
        /// Defined in: GSMA RCS phase 1 - Technical Realisation section 4.2.2.
        /// Contains all revoked contacts that are currently being blocked.
        /// Note: The “rcs_revokedcontacts” list is not intended to be shown to the end user. It is managed automatically.
        /// </summary>
        public const String SHARED_RCS_REVOKEDCONTACTS = "rcs_revokedcontacts";

        /// <summary>
        /// Defined in: OMA-WP-XDM_1_1_Implementation_Guidelines-20081209-A section 5.1.1.1
        /// The “oma_pocbuddylist” URI List is used by an XDMC/user to store the lists of all those users with whom the XDMC/user wants to use PoC as communication means. 
        /// This is a default URI List for the XDMC/user’s default 
        /// PoC communication, i.e., the default URI List to be referenced by a default PoC Group. 
        /// An XDMC/user is free to use other URI Lists for other kinds of PoC communications, i.e., 
        /// XDMC/user can have multiple PoC Groups each of which contain the references to different URI Lists than the “oma_pocbuddylist”. 
        /// For the “oma_pocbuddylist” URI List, no additional recommendation is provided than those for OMA-reserved URI Lists.
        /// </summary>
        public const String SHARED_OMA_POCBUDDYLIST = "oma_pocbuddylist";

        /// <summary>
        /// Defined in: OMA-WP-XDM_1_1_Implementation_Guidelines-20081209-A section 5.1.1.1
        /// The “oma_allcontacts” URI List is used by an XDMC/user to store the complete lists of all users whom the XDMC/user knows about. 
        /// In addition to the recommendations for OMA-reserved URI Lists, it is RECOMMENDED that the XDMC:
        /// •	include in the “oma_allcontacts” URI List references to all other URI Lists in the “resource-lists” document, if appropriate; and
        /// •	not include references to the “oma_allcontacts” URI List in any other application services (AUIDs) or URI List.
        /// </summary>
        public const String SHARED_OMA_ALLCONTACTS = "oma_allcontacts";


        
        public const String PRESRULES_OMA_ALLOW_OWN = "wp_prs_allow_own";
        public const String PRESRULES_RCS_ALLOW_SERVICE_ANONYMOUS = "rcs_allow_services_anonymous";
        public const String PRESRULES_OMA_UNLISTED = "wp_prs_unlisted";
        public const String PRESRULES_OMA_GRANTED_CONTACTS = "wp_prs_grantedcontacts";
        public const String PRESRULES_OMA_BLOCKED_CONTACTS = "wp_prs_blockedcontacts";
    }
}

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
using System.Xml.Serialization;

namespace BogheXdm.Generated.xcap_error
{
    partial class xcaperror
    {
        static Dictionary<Type, xcaperrorItemType> errorTypes = null;
        static void BuildErrors()
        {
            if (xcaperror.errorTypes == null)
                {
                    xcaperror.errorTypes = new Dictionary<Type, xcaperrorItemType>();
                    
                    xcaperror.errorTypes[typeof(xcaperrorErrorelementCannotdelete)] = xcaperrorItemType.ErrorElementCannotdelete;
                    xcaperror.errorTypes[typeof(xcaperrorErrorelementCannotinsert)] = xcaperrorItemType.ErrorElementCannotinsert;
                    xcaperror.errorTypes[typeof(xcaperrorErrorelementConstraintfailure)] = xcaperrorItemType.ErrorElementConstraintfailure;
                    xcaperror.errorTypes[typeof(xcaperrorErrorelementNoparent)] = xcaperrorItemType.ErrorElementNoparent;
                    xcaperror.errorTypes[typeof(xcaperrorErrorelementNotutf8)] = xcaperrorItemType.ErrorElementNotutf8;
                    xcaperror.errorTypes[typeof(xcaperrorErrorelementNotwellformed)] = xcaperrorItemType.ErrorElementNotwellformed;
                    xcaperror.errorTypes[typeof(xcaperrorErrorelementNotxmlattvalue)] = xcaperrorItemType.ErrorElementNotxmlattvalue;
                    xcaperror.errorTypes[typeof(xcaperrorErrorelementNotxmlfrag)] = xcaperrorItemType.ErrorElementNotxmlfrag;
                    xcaperror.errorTypes[typeof(xcaperrorErrorelementSchemavalidationerror)] = xcaperrorItemType.ErrorElementSchemavalidationerror;
                    xcaperror.errorTypes[typeof(xcaperrorErrorelementUniquenessfailure)] = xcaperrorItemType.ErrorElementUniquenessfailure;
                }
        }

        public enum xcaperrorItemType
        {
            ErrorElementCannotdelete,
            ErrorElementCannotinsert,
            ErrorElementConstraintfailure,
            ErrorElementNoparent,
            ErrorElementNotutf8,
            ErrorElementNotwellformed,
            ErrorElementNotxmlattvalue,
            ErrorElementNotxmlfrag,
            ErrorElementSchemavalidationerror,
            ErrorElementUniquenessfailure,
            ErrorElementUnknown,
        }

        [XmlIgnore]
        public xcaperrorItemType ErrorType
        {
            get
            {
                if (xcaperror.errorTypes == null)
                {
                    xcaperror.BuildErrors();
                }

                if (this.Item != null && xcaperror.errorTypes.ContainsKey(this.Item.GetType()))
                {
                    return xcaperror.errorTypes[this.Item.GetType()];
                }
                return xcaperrorItemType.ErrorElementUnknown;
            }
        }

        [XmlIgnore]
        public String ErrorPhrase
        {
            get
            {
                if (xcaperror.errorTypes == null)
                {
                    xcaperror.BuildErrors();
                }


                switch (this.ErrorType)
                {
                    case xcaperrorItemType.ErrorElementCannotdelete:
                        {
                            xcaperrorErrorelementCannotdelete error;
                            if ((error = this.Item as xcaperrorErrorelementCannotdelete) != null)
                            {
                                return error.phrase;
                            }
                            break;
                        }
                    case xcaperrorItemType.ErrorElementCannotinsert:
                        {
                            xcaperrorErrorelementCannotinsert error;
                            if ((error = this.Item as xcaperrorErrorelementCannotinsert) != null)
                            {
                                return error.phrase;
                            }
                            break;
                        }
                    case xcaperrorItemType.ErrorElementConstraintfailure:
                        {
                            xcaperrorErrorelementConstraintfailure error;
                            if ((error = this.Item as xcaperrorErrorelementConstraintfailure) != null)
                            {
                                return error.phrase;
                            }
                            break;
                        }
                    case xcaperrorItemType.ErrorElementNoparent:
                        {
                            xcaperrorErrorelementNoparent error;
                            if ((error = this.Item as xcaperrorErrorelementNoparent) != null)
                            {
                                return error.phrase;
                            }
                            break;
                        }
                    case xcaperrorItemType.ErrorElementNotutf8:
                        {
                            xcaperrorErrorelementNotutf8 error;
                            if ((error = this.Item as xcaperrorErrorelementNotutf8) != null)
                            {
                                return error.phrase;
                            }
                            break;
                        }
                    case xcaperrorItemType.ErrorElementNotwellformed:
                        {
                            xcaperrorErrorelementNotwellformed error;
                            if ((error = this.Item as xcaperrorErrorelementNotwellformed) != null)
                            {
                                return error.phrase;
                            }
                            break;
                        }
                    case xcaperrorItemType.ErrorElementNotxmlattvalue:
                        {
                            xcaperrorErrorelementNotxmlattvalue error;
                            if ((error = this.Item as xcaperrorErrorelementNotxmlattvalue) != null)
                            {
                                return error.phrase;
                            }
                            break;
                        }
                    case xcaperrorItemType.ErrorElementNotxmlfrag:
                        {
                            xcaperrorErrorelementNotxmlfrag error;
                            if ((error = this.Item as xcaperrorErrorelementNotxmlfrag) != null)
                            {
                                return error.phrase;
                            }
                            break;
                        }
                    case xcaperrorItemType.ErrorElementSchemavalidationerror:
                        {
                            xcaperrorErrorelementSchemavalidationerror error;
                            if ((error = this.Item as xcaperrorErrorelementSchemavalidationerror) != null)
                            {
                                return error.phrase;
                            }
                            break;
                        }
                    case xcaperrorItemType.ErrorElementUniquenessfailure:
                        {
                            xcaperrorErrorelementUniquenessfailure error;
                            if ((error = this.Item as xcaperrorErrorelementUniquenessfailure) != null)
                            {
                                return error.phrase;
                            }
                            break;
                        }
                    default:
                    case xcaperrorItemType.ErrorElementUnknown:
                        {
                            break;
                        }
                }

                return "Unknown error";
            }
        } 
    }
}

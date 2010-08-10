/* 
 *  Copyright (c) 2010,
 *  Gavriloaie Eugen-Andrei (shiretu@gmail.com)
 *
 *  This file is part of crtmpserver.
 *  crtmpserver is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  crtmpserver is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with crtmpserver.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef _BASEAPPPROTOCOLHANDLER_H
#define	_BASEAPPPROTOCOLHANDLER_H

#include "new/common.h"

class BaseClientApplication;
class BaseProtocol;

class DLLEXP BaseAppProtocolHandler {
private:
	BaseClientApplication *_pApplication;
protected:
	Variant _configuration;
public:
	BaseAppProtocolHandler(Variant &configuration);
	virtual ~BaseAppProtocolHandler();

	void SetApplication(BaseClientApplication *pApplication);
	BaseClientApplication *GetApplication();

	BaseAppProtocolHandler * GetProtocolHandler(uint64_t protocolType);

	virtual void RegisterProtocol(BaseProtocol *pProtocol) = 0;
	virtual void UnRegisterProtocol(BaseProtocol *pProtocol) = 0;
};

#endif	/* _BASEAPPPROTOCOLHANDLER_H */



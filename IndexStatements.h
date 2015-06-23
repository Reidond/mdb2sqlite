#ifndef __INCLUDED_INDEXSTATEMENTS_H__
#define __INCLUDED_INDEXSTATEMENTS_H__
#pragma once

#include "stdafx.h"
#include <afxdao.h>
#include <afxdb.h>
#include <vector>

#pragma warning(disable : 4995)

class CIndexStatements
{
public: 
	void Indexes(CDaoTableDef &TableDef, std::vector <CString> &IndexStatements, const CDaoTableDefInfo &tabledefinfo, CString *&sTableNames, const short &nTableCount, std::vector <CString> &UniqueFields, std::vector <CString> &CollateIndexFields);
	bool IndexFilter(const CDaoTableDefInfo &tabledefinfo, const CDaoIndexInfo &indexinfo, CString *&sTableNames, const short &nTableCount);
private:
	bool IsIndexFieldText(CString sParrent , std::vector <CString> &CollateIndexFields);
};

#endif
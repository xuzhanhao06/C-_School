// SeqList.h: interface for the SeqList class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SEQLIST_H__3B378664_5BDC_42B3_BF53_03E79306D9DA__INCLUDED_)
#define AFX_SEQLIST_H__3B378664_5BDC_42B3_BF53_03E79306D9DA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class SeqList
{
	int data[100], n;
public:
	void Output();
	void Append(int x);
	SeqList();
	virtual ~SeqList();
};

#endif // !defined(AFX_SEQLIST_H__3B378664_5BDC_42B3_BF53_03E79306D9DA__INCLUDED_)

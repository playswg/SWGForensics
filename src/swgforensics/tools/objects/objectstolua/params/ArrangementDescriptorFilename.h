/*
 * ArrangementDescriptorFilename.h
 *
 *  Created on: 11/07/2009
 *      Author: TheAnswer
 */

#ifndef ARRANGEMENTDESCRIPTORFILENAME_H_
#define ARRANGEMENTDESCRIPTORFILENAME_H_

#include "primitives/StringParam.h"

#include "../slot/SlotArrangement.h"
#include "../objectstolua.h"

class ArrangementDescriptorFilename : public StringParam {

public:
	/*QString toString() {
		QVector<QString> arrangements;

		QString file = get();

		if (file != "") {
			QString trePath = SWGTRESDIRECTORY;

			QString fullPath = trePath + file;

			SlotArrangement parser(fullPath);

			arrangements = parser.getArrangements();
		}

		QString var;
		QTextStream stream(&var);

		stream << "{";

		for (int i = 0; i < arrangements.size(); ++i) {
			StringParam param(arrangements[i]);
			stream << param.toString();

			if (i + 1 < arrangements.size())
				stream << ", ";
		}

		stream << "}";

		return var;
	}*/

};


#endif /* ARRANGEMENTDESCRIPTORFILENAME_H_ */

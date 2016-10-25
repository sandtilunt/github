/*
	This file is part of cpp-ethereum.

	cpp-ethereum is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	cpp-ethereum is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with cpp-ethereum.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @file Mutation.cpp
 * @author Danil Nemirovsky <danil.nemirovsky@gmail.com>
 * @date 2016
 */

#include <libsolidity/interface/Mutation.h>

using namespace std;
using namespace dev;
using namespace dev::solidity;

bytes Mutation::bytecodeOrdinary() const
{
	return m_ordinary.bytecode;
}

string Mutation::hexOrdinary() const
{
    return m_ordinary.toHex();
} 

void Mutation::link(map<string, h160> const& _libraryAddresses)
{
    m_ordinary.link(_libraryAddresses);
}

map<size_t, string> Mutation::linkReferencesOrdinary() const
{
    return m_ordinary.linkReferences;
}

void Mutation::setOrdinary(eth::LinkerObject _object)
{
    m_ordinary = _object;
}

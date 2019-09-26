/*
 *  This file is part of the DAC distribution (https://github.com/xainag/frost)
 *  Copyright (c) 2019 XAIN AG.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 3.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

package com.de.xain.emdac.delegation;

import androidx.annotation.Nullable;

import com.google.gson.annotations.SerializedName;

import java.io.Serializable;

public class UserPublic implements Serializable {

    @SerializedName("username")
    private String username;
    @SerializedName("publicId")
    private String publicId;

    public UserPublic(String username, String publicId) {
        this.username = username;
        this.publicId = publicId;
    }

    public UserPublic() {
    }

    public String getUsername() {
        return username;
    }

    public String getPublicId() {
        return publicId;
    }

    public String getPublicIdHex() {
        if (publicId == null) return null;
        return "0x" + publicId;
    }

    @Override
    public boolean equals(@Nullable Object obj) {
        if (obj instanceof UserPublic) {
            String username = ((UserPublic) obj).username;
            if (username == null) return false;
            return username.equals(this.username);
        } else {
            return false;
        }
    }
}
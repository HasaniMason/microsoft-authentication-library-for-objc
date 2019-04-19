//------------------------------------------------------------------------------
//
// Copyright (c) Microsoft Corporation.
// All rights reserved.
//
// This code is licensed under the MIT License.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//------------------------------------------------------------------------------

@class MSALAuthority;

NS_ASSUME_NONNULL_BEGIN

@interface MSALTenantProfile ()

@property (readwrite, nullable) NSString *userObjectId;
@property (readwrite, nullable) NSString *tenantId;
@property (readwrite) BOOL isHomeTenant;
@property (readwrite, nullable) NSDictionary<NSString *, NSString *> *claims;

- (id)initWithUserObjectId:(NSString *)userObjectId
                  tenantId:(NSString *)tenantId
                 authority:(MSALAuthority *)authority
              isHomeTenant:(BOOL)isHomeTenant
                    claims:(NSDictionary* _Nullable)claims;

@end

NS_ASSUME_NONNULL_END
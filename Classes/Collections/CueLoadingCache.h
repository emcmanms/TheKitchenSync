/*
 * Copyright 2013 TheKitchenSync Authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

typedef id (^CueLoadingBlock)(id key);

/**
* NSDictionary abstraction that integrates thread-safety and supports a fetcher block
*/
@interface CueLoadingCache : NSObject

- (id)initWithLoader:(CueLoadingBlock)block isMemorySensitive:(BOOL)memorySensitive;

- (id)checkObjectForKey:(id)key; // Returns nil if not found.

- (id)objectForKey:(id)key;

- (id)objectForKeyedSubscript:(id)key;

- (void)removeObjectForKey:(id)key;

- (void)removeAllObjects;

- (void)setObject:(id)value forKey:(id)key;

- (NSArray *)allKeys;

- (NSArray *)allValues;

@end

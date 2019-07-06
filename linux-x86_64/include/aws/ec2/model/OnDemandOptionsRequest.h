﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/FleetOnDemandAllocationStrategy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The allocation strategy of On-Demand Instances in an EC2 Fleet.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/OnDemandOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API OnDemandOptionsRequest
  {
  public:
    OnDemandOptionsRequest();
    OnDemandOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    OnDemandOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. If you specify <code>lowest-price</code>, EC2 Fleet uses price to
     * determine the order, launching the lowest price first. If you specify
     * <code>prioritized</code>, EC2 Fleet uses the priority that you assigned to each
     * launch template override, launching the highest priority first. If you do not
     * specify a value, EC2 Fleet defaults to <code>lowest-price</code>.</p>
     */
    inline const FleetOnDemandAllocationStrategy& GetAllocationStrategy() const{ return m_allocationStrategy; }

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. If you specify <code>lowest-price</code>, EC2 Fleet uses price to
     * determine the order, launching the lowest price first. If you specify
     * <code>prioritized</code>, EC2 Fleet uses the priority that you assigned to each
     * launch template override, launching the highest priority first. If you do not
     * specify a value, EC2 Fleet defaults to <code>lowest-price</code>.</p>
     */
    inline void SetAllocationStrategy(const FleetOnDemandAllocationStrategy& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. If you specify <code>lowest-price</code>, EC2 Fleet uses price to
     * determine the order, launching the lowest price first. If you specify
     * <code>prioritized</code>, EC2 Fleet uses the priority that you assigned to each
     * launch template override, launching the highest priority first. If you do not
     * specify a value, EC2 Fleet defaults to <code>lowest-price</code>.</p>
     */
    inline void SetAllocationStrategy(FleetOnDemandAllocationStrategy&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::move(value); }

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. If you specify <code>lowest-price</code>, EC2 Fleet uses price to
     * determine the order, launching the lowest price first. If you specify
     * <code>prioritized</code>, EC2 Fleet uses the priority that you assigned to each
     * launch template override, launching the highest priority first. If you do not
     * specify a value, EC2 Fleet defaults to <code>lowest-price</code>.</p>
     */
    inline OnDemandOptionsRequest& WithAllocationStrategy(const FleetOnDemandAllocationStrategy& value) { SetAllocationStrategy(value); return *this;}

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. If you specify <code>lowest-price</code>, EC2 Fleet uses price to
     * determine the order, launching the lowest price first. If you specify
     * <code>prioritized</code>, EC2 Fleet uses the priority that you assigned to each
     * launch template override, launching the highest priority first. If you do not
     * specify a value, EC2 Fleet defaults to <code>lowest-price</code>.</p>
     */
    inline OnDemandOptionsRequest& WithAllocationStrategy(FleetOnDemandAllocationStrategy&& value) { SetAllocationStrategy(std::move(value)); return *this;}


    /**
     * <p>Indicates that the fleet uses a single instance type to launch all On-Demand
     * Instances in the fleet.</p>
     */
    inline bool GetSingleInstanceType() const{ return m_singleInstanceType; }

    /**
     * <p>Indicates that the fleet uses a single instance type to launch all On-Demand
     * Instances in the fleet.</p>
     */
    inline void SetSingleInstanceType(bool value) { m_singleInstanceTypeHasBeenSet = true; m_singleInstanceType = value; }

    /**
     * <p>Indicates that the fleet uses a single instance type to launch all On-Demand
     * Instances in the fleet.</p>
     */
    inline OnDemandOptionsRequest& WithSingleInstanceType(bool value) { SetSingleInstanceType(value); return *this;}


    /**
     * <p>The minimum target capacity for On-Demand Instances in the fleet. If the
     * minimum target capacity is not reached, the fleet launches no instances.</p>
     */
    inline int GetMinTargetCapacity() const{ return m_minTargetCapacity; }

    /**
     * <p>The minimum target capacity for On-Demand Instances in the fleet. If the
     * minimum target capacity is not reached, the fleet launches no instances.</p>
     */
    inline void SetMinTargetCapacity(int value) { m_minTargetCapacityHasBeenSet = true; m_minTargetCapacity = value; }

    /**
     * <p>The minimum target capacity for On-Demand Instances in the fleet. If the
     * minimum target capacity is not reached, the fleet launches no instances.</p>
     */
    inline OnDemandOptionsRequest& WithMinTargetCapacity(int value) { SetMinTargetCapacity(value); return *this;}

  private:

    FleetOnDemandAllocationStrategy m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet;

    bool m_singleInstanceType;
    bool m_singleInstanceTypeHasBeenSet;

    int m_minTargetCapacity;
    bool m_minTargetCapacityHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

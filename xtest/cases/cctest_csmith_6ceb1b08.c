// SPDX-License-Identifier: MIT
// cctest_csmith_6ceb1b08.c --- cctest case csmith_6ceb1b08 (csmith seed 1827347208)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9bf62a35 */
/* @exp_ticks 0x3484 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 1827347208 -o /tmp/csmith_gen_67w6t4u8/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   struct S0  f1;
   uint32_t  f2;
};

union U3 {
   uint8_t  f0;
   const uint8_t  f1;
   struct S0  f2;
   const struct S0  f3;
};

union U4 {
   int16_t  f0;
   uint32_t  f1;
};

union U5 {
   const int32_t  f0;
   int32_t  f1;
   uint16_t  f2;
};

union U7 {
   const struct S0  f0;
   int64_t  f1;
};

union U8 {
   uint64_t  f0;
   int64_t  f1;
   uint32_t  f2;
};


static const union U1 g_6 = {0xE56890C5L};
static int32_t g_7[1][2][2] = {{{2L,2L},{2L,2L}}};
static int32_t g_10 = 0xB5411457L;
static uint32_t g_13 = 4294967295UL;
static struct S0 g_18 = {0xF5L};
static union U4 g_25 = {0xC033L};
static uint32_t g_78 = 18446744073709551606UL;
static int16_t g_97 = 0x6C92L;
static uint32_t g_103 = 0xDFBAD294L;
static int64_t g_115 = 0x0CBF8205C77F51BCLL;
static union U8 g_134 = {0x544929873052D3D2LL};
static uint16_t g_177[5] = {0x553BL,0x553BL,0x553BL,0x553BL,0x553BL};



static int32_t  func_1(void);
static const int8_t  func_4(const union U1  p_5);
static uint8_t  func_22(union U4  p_23, uint32_t  p_24);
static union U3  func_35(int8_t  p_36);




static int32_t  func_1(void)
{ 
    uint32_t l_189 = 0x0500D59FL;
    g_7[0][0][1] = (safe_mul_func_int8_t_s_s(func_4(g_6), (safe_lshift_func_int16_t_s_s(l_189, 1))));
    return g_134.f1;
}



static const int8_t  func_4(const union U1  p_5)
{ 
    uint8_t l_39 = 0x39L;
    int16_t l_46 = 0x64E4L;
    union U7 l_185 = {{1UL}};
    union U8 l_186 = {0UL};
    for (g_7[0][0][1] = 0; (g_7[0][0][1] >= (-19)); g_7[0][0][1] = safe_sub_func_uint32_t_u_u(g_7[0][0][1], 2))
    { 
        uint64_t l_16 = 18446744073709551615UL;
        struct S0 l_17[3] = {{0UL},{0UL},{0UL}};
        int32_t l_29[5] = {0xB38E5161L,0xB38E5161L,0xB38E5161L,0xB38E5161L,0xB38E5161L};
        union U3 l_37 = {252UL};
        int i;
        for (g_10 = 0; (g_10 >= (-22)); g_10 = safe_sub_func_int32_t_s_s(g_10, 7))
        { 
            if (p_5.f1.f0)
                break;
            --g_13;
        }
        if (l_16)
        { 
            if (g_6.f0)
                break;
        }
        else
        { 
            g_18 = l_17[2];
            return g_6.f1.f0;
        }
        if ((0x809B4AF7BDD48407LL != (safe_div_func_int32_t_s_s(((l_29[2] = (safe_unary_minus_func_uint8_t_u(func_22(g_25, p_5.f0)))) && g_7[0][0][1]), l_16))))
        { 
            for (g_10 = 0; (g_10 >= 24); g_10++)
            { 
                uint8_t l_32 = 0x77L;
                if (l_32)
                    break;
            }
        }
        else
        { 
            int64_t l_38 = 0L;
            union U4 l_114 = {-7L};
            int16_t l_128 = 0xAE27L;
            int32_t l_129 = 0x780F4AA1L;
            if (((g_115 = (safe_rshift_func_uint8_t_u_u((func_22((func_35((((((p_5 , l_37) , (l_39++)) && ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(5L, 9)), l_46)) ^ l_39)) , 1UL) > g_25.f0)) , l_114), g_7[0][0][0]) && p_5.f1.f0), 7))) | p_5.f2))
            { 
                l_129 = (safe_div_func_uint8_t_u_u(249UL, (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((!g_6.f1.f0), 4)), ((0x3666L ^ (safe_rshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((((!l_128) ^ p_5.f1.f0) != p_5.f0), g_25.f1)), 3))) == l_128)))));
                if (g_115)
                    continue;
            }
            else
            { 
                int32_t l_149 = 0x2B09B685L;
                int32_t l_150 = 4L;
                g_10 = (safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((g_134 , (g_78 >= (((g_78 >= (l_129 ^= ((safe_div_func_int64_t_s_s(0x8F1AF8A64327D2F1LL, 0x87E53E2A5121EC5DLL)) == p_5.f1.f0))) <= 1L) , l_17[2].f0))), g_134.f2)) && 0x581468E88EED364FLL), 12));
                g_10 ^= (l_150 = ((safe_add_func_int64_t_s_s((-1L), (safe_add_func_uint64_t_u_u(((safe_add_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((-1L), 1UL)) > (l_129 = ((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((g_134.f0 |= l_149), 0xDC10E4350B5FE46ELL)) , l_37.f1), (-9L))) <= 0xA42FL))), p_5.f2)) | 0xA9A9L), g_25.f0)))) == l_38));
                if (p_5.f1.f0)
                    continue;
            }
        }
    }
    for (g_13 = 0; (g_13 <= 0); g_13 += 1)
    { 
        int32_t l_175 = 0L;
        int32_t l_176 = 0xC23FB85DL;
        int32_t l_178[4];
        int i;
        for (i = 0; i < 4; i++)
            l_178[i] = 2L;
        l_178[0] = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u((((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int64_t_s((4294967291UL || ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_6.f1.f0, (+(safe_add_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((((l_176 = (((p_5.f0 != (g_115 ^ l_175)) < g_134.f0) <= l_46)) >= 0x9999L) < 0x80D186C8CC70086FLL), p_5.f1.f0)) < g_177[1]), l_46))))), 0xB5L)) == g_6.f1.f0)))), 4)) ^ 7UL) ^ 0L), l_39)) < p_5.f0) | 5L), 14)), 2)), g_6.f1.f0)), p_5.f0)) >= p_5.f2);
        for (l_46 = 0; (l_46 >= 0); l_46 -= 1)
        { 
            uint64_t l_184 = 1UL;
            l_176 = (safe_div_func_int16_t_s_s((~(safe_mul_func_uint16_t_u_u(l_184, (l_185 , ((g_7[0][0][0] = ((((0x3C0CBE00L & (((g_97 ^= (l_186 , g_177[1])) & g_25.f0) && p_5.f2)) || 0xC90AL) < 0xA6L) || l_175)) , p_5.f1.f0))))), p_5.f0));
            for (l_176 = 0; (l_176 <= 0); l_176 += 1)
            { 
                g_18 = l_185.f0;
            }
        }
    }
    return p_5.f2;
}



static uint8_t  func_22(union U4  p_23, uint32_t  p_24)
{ 
    uint32_t l_28 = 0xF29C214FL;
    for (g_25.f1 = (-16); (g_25.f1 > 49); g_25.f1 = safe_add_func_int32_t_s_s(g_25.f1, 5))
    { 
        return p_24;
    }
    l_28 &= g_25.f0;
    return g_6.f0;
}



static union U3  func_35(int8_t  p_36)
{ 
    struct S0 l_48 = {0xD0L};
    int32_t l_68 = 0xE981C310L;
    uint32_t l_79 = 0x8E9526DEL;
    uint8_t l_95[1];
    uint8_t l_100 = 6UL;
    union U5 l_111 = {0x5D499989L};
    uint8_t l_112 = 253UL;
    union U3 l_113 = {0x8AL};
    int i;
    for (i = 0; i < 1; i++)
        l_95[i] = 0x61L;
    if (g_6.f2)
    { 
        struct S0 l_47 = {255UL};
        uint32_t l_59 = 0xC2923F8CL;
        int32_t l_65 = 1L;
        l_48 = l_47;
        if ((safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s(((((((0xABL <= ((safe_lshift_func_uint16_t_u_s(p_36, l_48.f0)) < p_36)) == p_36) ^ g_7[0][1][0]) == l_47.f0) || 0x2AL) || l_48.f0), g_18.f0)), g_6.f0)), g_6.f2)), l_59)))
        { 
            g_10 = 0L;
        }
        else
        { 
            int32_t l_67 = 0x8C3FCEEEL;
            for (g_25.f0 = 0; (g_25.f0 >= 26); ++g_25.f0)
            { 
                const uint32_t l_66 = 5UL;
                l_68 = ((((((l_65 = ((((((g_25 , ((g_6.f0 && l_47.f0) | (safe_unary_minus_func_uint8_t_u((g_18.f0 = (safe_lshift_func_int16_t_s_u(0x4791L, 1))))))) , 1L) > 9UL) == (-6L)) || p_36) & p_36)) < l_66) != l_67) | l_48.f0) && l_48.f0) || l_67);
                l_65 ^= 0x2C352423L;
            }
        }
    }
    else
    { 
        int8_t l_69 = 0xE7L;
        struct S0 l_80 = {0x66L};
        union U4 l_84[2] = {{1L},{1L}};
        int32_t l_94[4][3] = {{0x90BB50B9L,0x90BB50B9L,0xD02F95C7L},{(-1L),0xD02F95C7L,0xD02F95C7L},{0xD02F95C7L,(-6L),0x63BBBF13L},{(-1L),(-6L),(-1L)}};
        int i, j;
        l_79 |= ((((l_69 || (safe_add_func_int64_t_s_s(g_6.f0, (safe_sub_func_uint32_t_u_u(((((!g_10) != (g_78 = (safe_add_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u(p_36)), 0x6B66L)))) >= p_36) <= 2L), 9L))))) ^ l_68) > l_69) & 0L);
        if (g_25.f0)
            goto lbl_81;
lbl_81:
        l_80 = (l_48 = (p_36 , l_48));
        for (g_25.f0 = 0; (g_25.f0 > 26); ++g_25.f0)
        { 
            for (g_18.f0 = 0; (g_18.f0 <= 1); g_18.f0 += 1)
            { 
                int64_t l_93 = 0xA24168CBA4741226LL;
                l_94[2][0] |= (safe_add_func_uint16_t_u_u((+((p_36 ^ (~g_25.f0)) <= (safe_add_func_uint64_t_u_u((0UL <= (248UL < l_93)), 8L)))), 1UL));
            }
        }
    }
    for (l_48.f0 = 0; (l_48.f0 <= 0); l_48.f0 += 1)
    { 
        int16_t l_96 = 0x6699L;
        int32_t l_98 = (-1L);
        int32_t l_99 = 0x3AA3A0A7L;
        int i;
        l_100++;
        ++g_103;
        l_112 |= (l_99 = (!(safe_sub_func_uint64_t_u_u((0xDFEA0260AD585B88LL ^ ((0x7432CFE0L ^ (g_10 |= (l_95[l_48.f0] & (safe_sub_func_int32_t_s_s(((l_111 , l_95[l_48.f0]) , 0x3F460CB5L), l_95[l_48.f0]))))) != g_103)), g_6.f2))));
    }
    return l_113;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    transparent_crc(g_6.f1.f0, "g_6.f1.f0", print_hash_value);
    transparent_crc(g_6.f2, "g_6.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_134.f0, "g_134.f0", print_hash_value);
    transparent_crc(g_134.f1, "g_134.f1", print_hash_value);
    transparent_crc(g_134.f2, "g_134.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_177[i], "g_177[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}

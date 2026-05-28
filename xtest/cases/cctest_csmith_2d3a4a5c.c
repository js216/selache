// SPDX-License-Identifier: MIT
// cctest_csmith_2d3a4a5c.c --- cctest case csmith_2d3a4a5c (csmith seed 758794844)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfbc4af34 */
/* @exp_ticks 0x35a2 */

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

// Options:   -s 758794844 -o /tmp/csmith_gen_vuryyc5g/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint8_t  f0;
};
#pragma pack(pop)

union U1 {
   uint64_t  f0;
};


static uint32_t g_4 = 0UL;
static uint8_t g_23 = 4UL;
static uint32_t g_38 = 0x857617C0L;
static uint16_t g_55 = 1UL;
static uint8_t g_57 = 0x09L;
static uint32_t g_83 = 0UL;
static uint32_t g_109 = 0x86934388L;
static uint16_t g_129 = 0xEEAFL;
static int16_t g_130 = (-6L);
static int16_t g_132 = 0x38EFL;
static uint64_t g_148 = 18446744073709551609UL;
static uint8_t g_159 = 0x0DL;
static int32_t g_160 = 0x88E09954L;
static uint64_t g_162 = 0xE53F41FD33E800ADLL;
static union U1 g_174 = {0xB73CF63262D627FBLL};
static int32_t g_210 = 1L;
static uint16_t g_230 = 0x26C0L;
static struct S0 g_247 = {255UL};
static uint32_t g_248 = 4294967295UL;
static const uint16_t g_261 = 0xA67EL;
static int16_t g_265 = 7L;
static uint64_t g_288 = 0xDD0333103EE402FCLL;
static int64_t g_291 = 0x14D3C65306BD755ELL;
static int8_t g_302 = 0x45L;
static int64_t g_304 = 1L;



static int32_t  func_1(void);
static uint8_t  func_9(int16_t  p_10, uint16_t  p_11);
static int32_t  func_26(int32_t  p_27, uint16_t  p_28);
static int64_t  func_33(int16_t  p_34, int8_t  p_35, uint32_t  p_36, const struct S0  p_37);




static int32_t  func_1(void)
{ 
    uint8_t l_2[1][4] = {{0x22L,0x22L,0x22L,0x22L}};
    int32_t l_3 = 1L;
    int32_t l_24 = 6L;
    int i, j;
    l_3 = (l_2[0][1] < l_2[0][0]);
    g_4++;
    g_304 = (((safe_lshift_func_uint8_t_u_s(func_9((0x038591B6L | (safe_add_func_uint64_t_u_u((((+(safe_sub_func_uint32_t_u_u(g_4, (safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((+0xDCL))), (l_24 = (g_23 = g_4)))), g_4))))) , 0L) & l_3), l_2[0][1]))), l_2[0][1]), l_2[0][2])) | 18446744073709551615UL) , g_302);
    return g_23;
}



static uint8_t  func_9(int16_t  p_10, uint16_t  p_11)
{ 
    uint64_t l_25 = 0UL;
    const struct S0 l_39 = {255UL};
    int32_t l_303[3];
    int i;
    for (i = 0; i < 3; i++)
        l_303[i] = 0xAAB0778BL;
    l_25 = g_23;
    l_303[2] = func_26(((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_4, (p_10 && (func_33(((g_38 = g_4) | (l_25 && l_25)), l_25, g_23, l_39) && g_230)))), g_261)) , g_55), l_39.f0);
    return p_11;
}



static int32_t  func_26(int32_t  p_27, uint16_t  p_28)
{ 
    int8_t l_293 = 0L;
    int32_t l_294 = (-3L);
    const struct S0 l_300 = {0xAEL};
    int32_t l_301 = 0x520F9016L;
    l_294 = l_293;
    g_160 = ((g_302 = (+(safe_add_func_uint32_t_u_u((l_301 = (safe_sub_func_int8_t_s_s(((l_300 , g_159) <= (l_294 , (l_294 = ((-1L) < 4L)))), p_27))), 0xE3CEDB52L)))) && g_159);
    return p_27;
}



static int64_t  func_33(int16_t  p_34, int8_t  p_35, uint32_t  p_36, const struct S0  p_37)
{ 
    const int64_t l_42 = 0x95674643A64E785CLL;
    int32_t l_43 = 0x7D594484L;
    uint16_t l_56 = 1UL;
    uint16_t l_59 = 65535UL;
    int16_t l_78 = 0xBBCBL;
    int32_t l_95 = 2L;
    uint64_t l_108[1];
    int64_t l_131[1];
    uint16_t l_292 = 0x8C0FL;
    int i;
    for (i = 0; i < 1; i++)
        l_108[i] = 0xCA3003AF45EF5D7ALL;
    for (i = 0; i < 1; i++)
        l_131[i] = 0xB06C311281BCF51ALL;
lbl_88:
    l_43 = (((safe_add_func_int64_t_s_s(g_23, 0UL)) != g_23) | (l_42 < l_42));
    if ((safe_lshift_func_int8_t_s_s((p_35 = (g_57 &= (safe_rshift_func_uint16_t_u_u((~(safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(p_34, ((((((l_43 = (safe_mul_func_int8_t_s_s((l_42 == (g_55 = 0L)), (0x9A81FFDE63B6910CLL == l_56)))) != p_36) ^ g_23) < 0UL) != l_56) | p_34))), p_36))), l_42)))), 2)))
    { 
        int64_t l_60 = 0x668CDE333B8FBA32LL;
        l_60 = (+l_59);
        for (p_35 = 0; (p_35 > (-5)); p_35 = safe_sub_func_uint32_t_u_u(p_35, 1))
        { 
            int32_t l_73[2];
            int i;
            for (i = 0; i < 2; i++)
                l_73[i] = 0L;
            if ((((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s(((p_34 &= (safe_div_func_uint16_t_u_u((g_57 , l_73[0]), (safe_rshift_func_uint16_t_u_u((g_55 = ((safe_rshift_func_int16_t_s_u(l_59, (g_55 | g_23))) != 65528UL)), g_4))))) < 0x4B93L), g_38)) & 3L), l_78)), p_37.f0)), 0L)) == g_38) , p_35))
            { 
                return g_23;
            }
            else
            { 
                uint8_t l_79 = 1UL;
                int32_t l_82 = 0x8932A224L;
                --l_79;
                if (g_4)
                    continue;
                l_82 = p_36;
            }
            g_83 = l_60;
        }
        for (p_36 = (-1); (p_36 == 22); p_36 = safe_add_func_int64_t_s_s(p_36, 7))
        { 
            for (g_57 = 29; (g_57 > 23); --g_57)
            { 
                if (l_42)
                    break;
                if (g_23)
                    break;
            }
            if (l_78)
                goto lbl_88;
        }
    }
    else
    { 
        int16_t l_96[4][2][4] = {{{3L,0x4DD4L,3L,0x870FL},{5L,(-9L),0x49BDL,1L}},{{0x75D1L,0L,(-9L),(-9L)},{0x2131L,0x2131L,(-9L),3L}},{{0x75D1L,0x7E31L,0x49BDL,0L},{5L,0x49BDL,3L,0x49BDL}},{{3L,0x49BDL,5L,0L},{0x49BDL,0x7E31L,0x75D1L,3L}}};
        int i, j, k;
        for (g_55 = 7; (g_55 <= 5); g_55 = safe_sub_func_int8_t_s_s(g_55, 2))
        { 
            uint64_t l_91[1][5] = {{0x7A7919EE48480AD7LL,0x7A7919EE48480AD7LL,0x7A7919EE48480AD7LL,0x7A7919EE48480AD7LL,0x7A7919EE48480AD7LL}};
            int32_t l_92 = 0L;
            int i, j;
            l_92 = l_91[0][1];
            l_43 = p_35;
            l_96[2][0][3] |= (0x5A418E4AL | (((safe_rshift_func_int8_t_s_s((g_4 == ((p_34 < (0x81B22E0064457BBFLL || g_23)) & g_23)), 0)) ^ l_95) && l_95));
        }
        for (l_95 = 0; (l_95 > 10); l_95 = safe_add_func_uint64_t_u_u(l_95, 8))
        { 
            int16_t l_107 = (-2L);
            for (g_57 = 7; (g_57 >= 31); g_57 = safe_add_func_uint8_t_u_u(g_57, 2))
            { 
                uint64_t l_110 = 0x8D32190EF9F67763LL;
                g_109 = ((safe_mul_func_uint16_t_u_u(g_4, (((safe_add_func_uint64_t_u_u((((((p_34 , 0xC81C9D71L) < (((safe_div_func_uint16_t_u_u(((g_23 ^ l_107) , p_34), l_56)) > l_107) || p_37.f0)) | p_35) ^ l_108[0]) ^ p_35), g_83)) , g_4) < 0x77275A216BAB3D6DLL))) | p_36);
                if (l_110)
                    break;
            }
            g_132 = (!(!((p_35 = ((safe_rshift_func_int8_t_s_s(g_23, ((((safe_div_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_s(((0x6D72D1AE7A549A7ELL >= ((safe_mod_func_uint16_t_u_u((((~(g_130 = (!(0x808B432A052AF0D9LL && ((safe_mod_func_uint32_t_u_u((g_129 = (safe_rshift_func_int8_t_s_u(l_96[2][0][3], 0))), 0x9CAC1228L)) == 0xC05F70B01AA1EC43LL))))) ^ 0xD611L) >= (-1L)), 0x0D1FL)) || 255UL)) ^ g_83), 3)) , l_96[2][0][3]) < 0x516BL) && l_131[0]), 0x59F1L)) >= p_34) ^ g_83) , g_109))) && 4UL)) || g_23)));
        }
        l_95 |= ((l_96[0][0][3] > l_96[3][0][0]) != (0xE19E2ED91146291CLL <= (safe_lshift_func_uint16_t_u_s(0xE517L, 0))));
    }
    for (g_132 = 0; (g_132 <= (-25)); g_132 = safe_sub_func_int64_t_s_s(g_132, 3))
    { 
        int64_t l_147 = 0xB3BFF73A4BFF4CCELL;
        union U1 l_173[4] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
        int32_t l_228[4] = {(-2L),(-2L),(-2L),(-2L)};
        int32_t l_229 = 0x1D3D7B66L;
        uint32_t l_266 = 0x55638069L;
        uint64_t l_287 = 0xD8ECEE319E1ED03BLL;
        int i;
        if ((safe_unary_minus_func_uint32_t_u((g_148 = ((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(1L, (g_55 = (safe_unary_minus_func_uint8_t_u(g_55))))), ((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((g_129 = g_109), l_147)), p_36)) || l_56))) || 18446744073709551607UL)))))
        { 
            int64_t l_161[3][2] = {{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)}};
            int32_t l_180 = 0x6F33E7B1L;
            int32_t l_185 = (-4L);
            const int64_t l_226 = 0L;
            int i, j;
            if (p_34)
            { 
                int8_t l_149 = 0xB8L;
                int32_t l_158 = 0L;
                l_43 = (l_149 | (-9L));
                l_95 = ((g_160 = (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((g_159 = ((safe_rshift_func_uint8_t_u_s(p_36, (((g_23 != ((l_158 = ((safe_rshift_func_uint8_t_u_s((p_34 >= g_23), g_55)) , l_147)) , l_149)) > p_35) != (-1L)))) | p_36)) , 0L), 12)), l_149))) > g_83);
            }
            else
            { 
                const int8_t l_179 = 0x8DL;
                g_162++;
                g_160 &= 0xD15AFFB5L;
                l_180 = (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((--g_129) || (((g_174 = l_173[0]) , 18446744073709551608UL) , ((((g_4 ^ (safe_div_func_int64_t_s_s((((safe_mod_func_uint64_t_u_u(((g_130 = (-5L)) >= l_179), p_37.f0)) > g_162) , p_35), p_37.f0))) , 0xF6L) >= p_37.f0) == l_42))), l_131[0])), 0xC5626D82L)), l_179));
            }
            if ((g_162 && g_57))
            { 
                int32_t l_190 = 0xAFFB97BFL;
                int32_t l_209 = (-7L);
                l_185 = (safe_mul_func_uint16_t_u_u(0UL, (l_180 = (safe_lshift_func_int8_t_s_s(p_35, 0)))));
                g_210 = ((safe_div_func_uint16_t_u_u((((safe_div_func_int16_t_s_s((-1L), ((l_190 = 0xFAL) | (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((((g_160 &= (g_55 && (safe_div_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((p_36 , p_35), g_23)), 251UL)) == p_34), 0xA068DC4A0E6F0F13LL)), 0L)), p_34)), g_174.f0)) != l_209), g_132)))) == p_35) <= l_131[0]) ^ l_161[2][1]) , l_95), 4)), 5))))) != g_130) , p_36), g_174.f0)) & p_37.f0);
            }
            else
            { 
                int8_t l_213 = 0xFFL;
                g_160 = (safe_lshift_func_uint8_t_u_u(0x78L, l_161[2][1]));
                l_95 = l_213;
            }
            for (g_162 = 0; (g_162 <= 0); g_162 += 1)
            { 
                int32_t l_227[4] = {0x8C5B517AL,0x8C5B517AL,0x8C5B517AL,0x8C5B517AL};
                int i;
                l_229 = ((g_130 &= (safe_rshift_func_uint8_t_u_u((((p_34 >= ((l_228[1] = (safe_mul_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(p_37.f0)), (safe_div_func_uint16_t_u_u((~l_147), (g_4 && l_59))))), g_4)) <= l_226) || l_227[1]) == g_210), g_174.f0))) ^ 0UL)) | l_226) <= p_35), p_36))) == p_36);
                g_230--;
                l_43 = (safe_mul_func_int16_t_s_s(0L, (((safe_lshift_func_int8_t_s_s(((g_248 = (l_228[2] = (safe_sub_func_int8_t_s_s(g_160, ((((safe_lshift_func_int8_t_s_s(l_227[2], (safe_mod_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((--l_108[g_162]), ((g_247 , p_37.f0) & 18446744073709551612UL))) , l_185), g_130)))) , 1UL) , 0xAAL) , 8UL))))) == g_230), 3)) != g_109) | l_227[1])));
            }
        }
        else
        { 
            for (g_174.f0 = (-24); (g_174.f0 > 56); g_174.f0++)
            { 
                return g_159;
            }
        }
        if (g_55)
        { 
            if (g_132)
                break;
        }
        else
        { 
            l_228[3] = l_173[0].f0;
        }
        if ((((((safe_sub_func_uint16_t_u_u((((((((safe_mod_func_uint32_t_u_u((((safe_sub_func_int64_t_s_s(g_162, ((safe_add_func_uint16_t_u_u(l_43, p_36)) < (safe_div_func_int64_t_s_s(l_228[1], p_35))))) , 0x23FAAA28L) , 0x7F3B7B1DL), 0xB38FC1FCL)) != 0xE93BA542B8B1C4E8LL) >= g_160) < 0x46L) && g_148) == g_261) & p_34), p_37.f0)) | g_4) > g_162) | 0x5AF4611EL) == g_130))
        { 
            uint32_t l_262 = 4294967289UL;
            g_160 = g_4;
            l_262 ^= l_228[0];
            for (g_129 = 0; (g_129 < 44); g_129 = safe_add_func_uint8_t_u_u(g_129, 9))
            { 
                ++l_266;
                if (p_37.f0)
                    break;
            }
        }
        else
        { 
            uint32_t l_279 = 18446744073709551609UL;
            int32_t l_282 = (-3L);
            l_282 ^= ((((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((((l_42 && (l_43 &= ((safe_sub_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u((l_279 <= (safe_div_func_int64_t_s_s(((l_56 != (p_34 != p_35)) , l_279), l_228[3]))), 2)) , (-1L)) && p_36), 0xF7B5L)) & p_37.f0))) || g_160) != l_147), g_4)), l_279)), g_23)) < g_265) | g_55) , p_35);
            if ((safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s(l_287, (l_43 = p_37.f0))), (g_288 = (1UL ^ g_55)))))
            { 
                g_160 |= (l_173[0] , (g_210 | (((safe_rshift_func_int8_t_s_s((l_228[1] , (g_291 &= ((p_34 != 0xF914532080C0C3E4LL) || 0x6FA9791142BF4A9CLL))), 3)) , l_279) , g_4)));
            }
            else
            { 
                l_95 = l_292;
                l_228[1] = p_36;
            }
            if (l_292)
                continue;
        }
    }
    return l_292;
}





int test_main(void)
{
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_174.f0, "g_174.f0", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_247.f0, "g_247.f0", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}

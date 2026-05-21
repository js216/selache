// SPDX-License-Identifier: MIT
// cctest_csmith_5c97e3d9.c --- cctest case csmith_5c97e3d9 (csmith seed 1553458137)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfaeb49b1 */

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

// Options:   -s 1553458137 -o /tmp/csmith_gen_z29i1d3n/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint16_t  f1;
   int32_t  f2;
   int64_t  f3;
};
#pragma pack(pop)

union U2 {
   struct S0  f0;
};


static uint16_t g_16 = 65535UL;
static int64_t g_17 = 0x8664A11600D5493ELL;
static int32_t g_21[2][5] = {{1L,1L,1L,1L,1L},{0x1AA12AFDL,1L,0x1AA12AFDL,1L,0x1AA12AFDL}};
static uint16_t g_22[5] = {6UL,6UL,6UL,6UL,6UL};
static int8_t g_66 = 0xD5L;
static union U2 g_110 = {{0xE93D3DD4L,1UL,4L,0xA6EED5AC3C997210LL}};
static uint32_t g_144[2] = {0x55CDA577L,0x55CDA577L};
static int32_t g_194 = 0xD17BF98EL;
static uint32_t g_226 = 0x0F3676A4L;
static uint8_t g_246 = 7UL;
static struct S0 g_284[3][5] = {{{-1L,0x826EL,0xED4DD8C4L,0L},{-1L,0x826EL,0xED4DD8C4L,0L},{-1L,0x826EL,0xED4DD8C4L,0L},{-1L,0x826EL,0xED4DD8C4L,0L},{-1L,0x826EL,0xED4DD8C4L,0L}},{{-1L,0x826EL,0xED4DD8C4L,0L},{-1L,0x826EL,0xED4DD8C4L,0L},{-1L,0x826EL,0xED4DD8C4L,0L},{-1L,0x826EL,0xED4DD8C4L,0L},{-1L,0x826EL,0xED4DD8C4L,0L}},{{-1L,0x826EL,0xED4DD8C4L,0L},{-1L,0x826EL,0xED4DD8C4L,0L},{-1L,0x826EL,0xED4DD8C4L,0L},{-1L,0x826EL,0xED4DD8C4L,0L},{-1L,0x826EL,0xED4DD8C4L,0L}}};
static uint64_t g_341 = 0xC3B53181D68D8517LL;



static int32_t  func_1(void);
static uint8_t  func_4(struct S0  p_5, union U2  p_6, int32_t  p_7);
static struct S0  func_8(int8_t  p_9);
static uint64_t  func_10(uint64_t  p_11, uint16_t  p_12, int32_t  p_13, uint8_t  p_14, int32_t  p_15);




static int32_t  func_1(void)
{ 
    int16_t l_18 = 1L;
    int32_t l_19[2];
    int32_t l_20 = 0xF4EA14C5L;
    uint32_t l_31 = 4294967288UL;
    const uint32_t l_32[1][3][3] = {{{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0UL,0x631AF665L,0UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}}};
    union U2 l_193 = {{0xE3F86CA3L,0x944FL,1L,5L}};
    int32_t l_245[2];
    uint32_t l_251 = 18446744073709551614UL;
    uint16_t l_381 = 7UL;
    uint8_t l_388[2];
    int16_t l_394 = 0L;
    int16_t l_396 = 9L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_19[i] = 0L;
    for (i = 0; i < 2; i++)
        l_245[i] = 8L;
    for (i = 0; i < 2; i++)
        l_388[i] = 255UL;
    l_20 = (safe_mul_func_uint8_t_u_u(func_4(func_8((func_10(((g_16 ^ (g_16 | (++g_22[2]))) == 18446744073709551612UL), ((((((safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u((l_19[0] = l_19[0]), 0x4E2095E04A276AC1LL)) && g_21[0][0]), 0)) && l_31) != l_32[0][1][2]), (-1L))) || g_21[1][0]) != l_18) || 0x8307B364L) & 0x5379A1D1L) , l_32[0][1][1]), g_21[1][4], l_31, l_18) <= (-5L))), l_193, g_194), g_194));
    if ((safe_rshift_func_uint16_t_u_s((0x89L && l_193.f0.f2), (safe_mul_func_uint8_t_u_u(((g_246 ^= ((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((g_22[2] || l_193.f0.f2), g_110.f0.f3)), l_245[0])), g_21[0][4])), g_144[0])) == g_22[0]), l_245[0])) | l_245[0]), g_17)) <= l_31)) , 0x53L), 5UL)))))
    { 
        uint16_t l_258 = 7UL;
        int32_t l_279 = 0xCB152677L;
        struct S0 l_329 = {0x85CD8894L,65533UL,0L,0x2902C647D5991393LL};
        struct S0 l_330[2] = {{1L,0x64BCL,1L,0L},{1L,0x64BCL,1L,0L}};
        int64_t l_340[2][5] = {{0xAB50B28D6676D7E8LL,(-4L),0xAB50B28D6676D7E8LL,0xAB50B28D6676D7E8LL,0xAB50B28D6676D7E8LL},{0x8E8E41D38EBB08DDLL,0L,0x8E8E41D38EBB08DDLL,0xAB50B28D6676D7E8LL,0xAB50B28D6676D7E8LL}};
        uint8_t l_342 = 251UL;
        uint64_t l_353 = 0xD74BA816AAFB0FECLL;
        int i, j;
        if ((g_17 < (((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((l_31 < l_251) | (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((((safe_mod_func_int32_t_s_s(g_22[3], g_66)) , 0xB735E30AAAE0B6ECLL) , l_20) , g_21[0][1]), g_110.f0.f3)), 1L))), l_258)), g_226)) == 0xF9L) , l_19[1])))
        { 
            int64_t l_265[4];
            int32_t l_266 = 0x2420772CL;
            int32_t l_324 = 3L;
            int i;
            for (i = 0; i < 4; i++)
                l_265[i] = 0x751E06E49FE0A111LL;
            if (((g_21[1][4] || g_226) < (safe_div_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s((((l_266 ^= (l_265[1] ^= ((0xC06754C7A393618BLL != (safe_rshift_func_uint16_t_u_u(g_246, l_32[0][1][2]))) <= g_66))) , g_22[4]) ^ 0x9EL), l_258)) , 0UL), l_19[1]))))
            { 
                int16_t l_278 = 0x4758L;
                int32_t l_300 = 1L;
                l_19[1] |= (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((g_226 = (g_194 & ((!(l_278 < (g_144[1] = ((0x16BB9490L == ((g_22[2]--) != ((safe_mul_func_int8_t_s_s((g_110.f0.f0 && (-1L)), g_66)) <= 0UL))) > 6L)))) , l_258))) , l_265[1]), 0x5FC2021FL)), (-5L))), 65527UL)), g_16)) && 0x84L), g_16));
                g_284[2][2] = g_110.f0;
                g_110.f0 = func_8(((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((g_22[2] |= ((safe_sub_func_int8_t_s_s((~((0x1B0AL | ((l_300 = (safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(((g_110.f0.f0 = (l_19[1] && (safe_rshift_func_int8_t_s_s(l_265[1], 1)))) & l_32[0][1][1]), 4)), l_266)), 0xEA549995AE5765BELL))) > 0x09L)) == g_284[2][2].f2)), l_278)) & l_279)), l_31)), g_66)) == 0x35C62C87L));
                if (g_110.f0.f2)
                    goto lbl_328;
            }
            else
            { 
                uint32_t l_312 = 0UL;
                int32_t l_313 = 0xA3DE78CEL;
                g_194 ^= (safe_lshift_func_int8_t_s_s(((+((g_22[4] = (safe_add_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_s(l_258, 7)) || (safe_div_func_uint8_t_u_u((65528UL && (0x3EEB7EE9CA378054LL && (safe_add_func_int32_t_s_s(l_18, g_284[2][2].f2)))), 9L))) ^ l_279) , g_284[2][2].f1), g_21[0][3]))) | l_312)) ^ l_258), l_193.f0.f3));
                l_313 |= (1L && l_266);
            }
            for (l_193.f0.f0 = 3; (l_193.f0.f0 >= 0); l_193.f0.f0 -= 1)
            { 
                uint8_t l_314 = 1UL;
                int32_t l_323 = 0L;
                int i;
                l_314--;
                l_279 = ((safe_div_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u((l_265[l_193.f0.f0] , (g_226 & l_19[1])), 4)) , (((g_110.f0.f0 = (g_21[1][3] &= (safe_mul_func_int8_t_s_s((l_323 = (l_314 | g_17)), 1L)))) && g_110.f0.f0) & l_265[l_193.f0.f0])) || 0x0DD8L), l_324)) | g_22[2]);
            }
        }
        else
        { 
lbl_328:
            for (l_20 = 0; (l_20 < 18); l_20 = safe_add_func_int8_t_s_s(l_20, 6))
            { 
                uint32_t l_327 = 0x736B5C2FL;
                g_21[1][4] |= l_327;
                g_110.f0.f0 = 0x34E0CEF9L;
            }
            l_330[1] = l_329;
            for (l_258 = 0; (l_258 > 17); ++l_258)
            { 
                int32_t l_333 = 0x59F852C0L;
                g_21[1][4] |= (l_330[1].f1 == ((g_341 = ((0x32L != l_333) != ((safe_rshift_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(0xFAB1L, l_32[0][1][2])) == l_340[0][4]) <= 5L), 1)) || l_32[0][1][0]) != l_330[1].f2) || 65535UL), 2)) ^ 2L))) <= l_342));
            }
        }
        g_284[1][4] = l_329;
        g_110.f0.f0 &= ((safe_mod_func_uint64_t_u_u((l_18 == (safe_rshift_func_uint16_t_u_s(((g_16 < (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((l_353 = (safe_sub_func_uint64_t_u_u((l_20 = (g_226 > l_193.f0.f2)), 0x94A9F235C2DBD2CDLL))) , 0xA5L), l_279)), 0xFA13L))) || 0x96BEL), l_193.f0.f3))), 1L)) < 18446744073709551607UL);
    }
    else
    { 
        int32_t l_359 = 0x1A4CF780L;
        int32_t l_369 = 7L;
        int32_t l_390[4][2] = {{0x5B8496F0L,0x5AFA37F3L},{0x5B8496F0L,0x5AFA37F3L},{0x5B8496F0L,0x5AFA37F3L},{0x5B8496F0L,0x5AFA37F3L}};
        int32_t l_391[3];
        uint32_t l_397[3];
        uint64_t l_402 = 0x2CDF6BD077340E4FLL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_391[i] = 0x8CB365A6L;
        for (i = 0; i < 3; i++)
            l_397[i] = 4294967295UL;
        l_20 = 0x2949D921L;
        if ((safe_lshift_func_uint8_t_u_s((((safe_add_func_uint16_t_u_u(((+(l_359 |= l_20)) != g_110.f0.f2), ((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(0x686EL, 3)), ((safe_unary_minus_func_int8_t_s((((((safe_mul_func_int8_t_s_s(l_32[0][2][0], l_245[0])) ^ 0UL) && l_369) <= g_110.f0.f0) <= g_22[2]))) && g_246))), 3)) || 0x3C7C355B61EB1585LL))) & g_144[1]) , 5UL), 1)))
        { 
            uint32_t l_387[5] = {0x86769AABL,0x86769AABL,0x86769AABL,0x86769AABL,0x86769AABL};
            int i;
            g_21[0][3] = (safe_mod_func_int16_t_s_s(0xA024L, 65528UL));
            l_20 = (safe_unary_minus_func_int8_t_s((((-5L) > (l_369 ^= (safe_sub_func_uint8_t_u_u((func_8((g_21[1][4] < l_193.f0.f2)) , g_22[2]), g_341)))) || g_21[0][2])));
            l_388[1] = (l_19[0] |= (0x2388B40468612AF7LL | (safe_div_func_uint16_t_u_u((g_110.f0.f3 > (safe_mul_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(l_381, (l_387[3] = (~(safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(g_110.f0.f3, l_32[0][1][2])), l_359)))))) > 0x178A9D31L), g_144[1]))), g_284[2][2].f3))));
        }
        else
        { 
            int16_t l_389[5][3][2] = {{{0xFBBCL,(-1L)},{0L,0xF1F6L},{0L,(-1L)}},{{0xFBBCL,0xFBBCL},{(-1L),0L},{0xF1F6L,0L}},{{(-1L),0xFBBCL},{0xFBBCL,(-1L)},{0L,0xF1F6L}},{{0L,(-1L)},{0xFBBCL,0xFBBCL},{(-1L),0L}},{{0xF1F6L,0L},{(-1L),0xFBBCL},{0xFBBCL,(-1L)}}};
            int32_t l_392 = 0xE907A0B9L;
            int32_t l_393 = 0x3623433EL;
            int32_t l_395[5];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_395[i] = (-1L);
            l_397[0]--;
            for (g_66 = (-21); (g_66 >= 22); g_66++)
            { 
                return l_395[1];
            }
            l_402--;
        }
        g_110.f0.f0 = l_19[1];
    }
    return l_396;
}



static uint8_t  func_4(struct S0  p_5, union U2  p_6, int32_t  p_7)
{ 
    struct S0 l_195[5] = {{0L,65535UL,-1L,0xFCEAC483EC63F9E7LL},{0L,65535UL,-1L,0xFCEAC483EC63F9E7LL},{0L,65535UL,-1L,0xFCEAC483EC63F9E7LL},{0L,65535UL,-1L,0xFCEAC483EC63F9E7LL},{0L,65535UL,-1L,0xFCEAC483EC63F9E7LL}};
    struct S0 l_196[3] = {{0x4962E967L,0x358CL,0xB8BCE69DL,-3L},{0x4962E967L,0x358CL,0xB8BCE69DL,-3L},{0x4962E967L,0x358CL,0xB8BCE69DL,-3L}};
    int i;
    l_196[2] = (l_195[3] = g_110.f0);
    for (g_66 = 0; (g_66 <= 1); g_66 += 1)
    { 
        int32_t l_201 = (-1L);
        int32_t l_202 = 0L;
        uint16_t l_209[1];
        int i;
        for (i = 0; i < 1; i++)
            l_209[i] = 0xFC74L;
        l_202 = (p_6.f0.f0 = (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((((((0x638302B22ED0F463LL <= 0x1C853B706FF82CCDLL) & l_201) != l_196[2].f3) <= p_6.f0.f0) , l_196[2].f3), g_66)), l_196[2].f1)));
        for (p_5.f2 = 3; (p_5.f2 >= 0); p_5.f2 -= 1)
        { 
            int i, j;
            l_196[g_66] = l_195[(g_66 + 1)];
            if ((safe_mul_func_int16_t_s_s(g_21[g_66][(g_66 + 2)], ((safe_sub_func_int8_t_s_s((((p_7 != 0xD2L) , (safe_div_func_int32_t_s_s(l_196[g_66].f0, g_110.f0.f1))) && (-4L)), 6L)) > g_21[g_66][(g_66 + 2)]))))
            { 
                l_209[0]++;
            }
            else
            { 
                uint16_t l_212 = 1UL;
                ++l_212;
                return g_21[g_66][(g_66 + 2)];
            }
            if (((l_195[(g_66 + 1)].f0 = l_195[3].f2) ^ ((+((safe_mul_func_int16_t_s_s(l_195[3].f1, p_6.f0.f2)) , g_21[1][4])) && l_196[g_66].f1)))
            { 
                l_196[g_66].f0 = 0x20D68F9EL;
            }
            else
            { 
                g_21[1][4] = g_194;
                g_21[1][1] ^= (safe_sub_func_uint16_t_u_u(((((p_6.f0.f2 <= (safe_add_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s(g_17, 6)) && (--g_226)), p_5.f1)), g_22[3]))) || p_6.f0.f0) ^ p_5.f3) <= g_110.f0.f1), g_17));
            }
        }
    }
    return p_5.f1;
}



static struct S0  func_8(int8_t  p_9)
{ 
    uint16_t l_54[3][1];
    int32_t l_67 = 0L;
    int32_t l_73 = (-10L);
    uint32_t l_81 = 1UL;
    int32_t l_84[3];
    struct S0 l_96[3][4] = {{{0xB95FE78FL,1UL,5L,0xC63812DD28D514EFLL},{2L,0xC200L,0L,-10L},{2L,0xC200L,0L,-10L},{0xB95FE78FL,1UL,5L,0xC63812DD28D514EFLL}},{{2L,0xC200L,0L,-10L},{0xB95FE78FL,1UL,5L,0xC63812DD28D514EFLL},{2L,0xC200L,0L,-10L},{2L,0xC200L,0L,-10L}},{{0xB95FE78FL,1UL,5L,0xC63812DD28D514EFLL},{0xB95FE78FL,1UL,5L,0xC63812DD28D514EFLL},{1L,1UL,1L,0L},{0xB95FE78FL,1UL,5L,0xC63812DD28D514EFLL}}};
    int32_t l_143 = 0L;
    uint8_t l_147 = 248UL;
    int8_t l_168[3][4][4] = {{{0x29L,(-3L),(-3L),0x29L},{0L,(-3L),1L,0x29L},{0x29L,(-3L),(-3L),0x29L},{0L,(-3L),1L,0x29L}},{{0x29L,(-3L),(-3L),0x29L},{0L,(-3L),1L,0x29L},{0x29L,(-3L),(-3L),0x29L},{0L,(-3L),1L,0x29L}},{{0x29L,(-3L),(-3L),0x29L},{0L,(-3L),1L,0x29L},{0x29L,(-3L),(-3L),0x29L},{0L,(-3L),1L,0x29L}}};
    int64_t l_171 = (-10L);
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_54[i][j] = 1UL;
    }
    for (i = 0; i < 3; i++)
        l_84[i] = 0x10857B26L;
    l_67 = (safe_add_func_uint64_t_u_u(l_54[1][0], (safe_div_func_int8_t_s_s((((l_54[1][0] >= (safe_unary_minus_func_uint16_t_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((g_66 = ((g_21[1][3] , (safe_mod_func_uint16_t_u_u(((0UL && l_54[0][0]) == p_9), 0xEA8FL))) < p_9)), p_9)) > l_54[1][0]), l_54[0][0])), l_54[1][0]))))) || g_22[2]) || p_9), (-1L)))));
    if (p_9)
    { 
        uint8_t l_83 = 252UL;
        l_73 = (safe_lshift_func_int16_t_s_s((g_21[1][4] < p_9), ((l_67 &= (((p_9 < (+((safe_mul_func_uint16_t_u_u(g_21[1][4], 0xFB6FL)) == g_16))) >= p_9) == 1UL)) || p_9)));
        if (g_16)
            goto lbl_82;
lbl_82:
        l_73 |= (((g_21[1][4] , (safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_81, 4UL)), g_17))))) & 0L) < g_17);
        l_84[2] = l_83;
    }
    else
    { 
        struct S0 l_89 = {-3L,65535UL,0x18CD0E53L,-6L};
        int32_t l_111 = (-1L);
        int32_t l_114 = 8L;
        int32_t l_116 = 1L;
        int32_t l_117 = 0x22502BEAL;
        int32_t l_120 = (-5L);
        int32_t l_122[2][5][5] = {{{1L,2L,0x6DFD39EDL,0xE0FD4834L,0xE0FD4834L},{2L,1L,2L,0x6DFD39EDL,0xE0FD4834L},{1L,0L,0xE0FD4834L,0L,1L},{2L,0L,1L,1L,1L},{1L,1L,0xE0FD4834L,1L,0xBB384EBAL}},{{0L,2L,2L,0L,1L},{0L,1L,0x6DFD39EDL,0x6DFD39EDL,1L},{1L,2L,0x6DFD39EDL,0xE0FD4834L,0xE0FD4834L},{2L,1L,2L,0x6DFD39EDL,0xE0FD4834L},{1L,0L,0xE0FD4834L,0L,1L}}};
        uint64_t l_164[1][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_164[i][j] = 0xB926A7F400C7566DLL;
        }
        if ((l_89.f0 = ((((safe_div_func_int8_t_s_s(g_21[0][1], ((safe_rshift_func_int8_t_s_s((l_89 , (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((g_22[2] & p_9) == 4UL), l_81)), l_84[1])), 5))), g_21[0][0])) | g_22[2]))) != 5UL) != l_89.f3) != 0x9849AA35L)))
        { 
            uint64_t l_109 = 0UL;
            int32_t l_112 = 0xADC8FC35L;
            int32_t l_118 = (-10L);
            int32_t l_121 = (-1L);
            if ((l_96[1][3] , (((safe_mod_func_int64_t_s_s((l_111 &= (safe_rshift_func_int16_t_s_u((((l_89 , (((safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u(p_9, (((((safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((l_109 |= ((g_22[2] && l_84[2]) <= 0x150EB8E47B4319BFLL)), l_89.f1)), 0x146A40847A0C8E20LL)) , 0xFDL) < g_21[1][4]) , g_110) , l_109))), p_9)) , p_9) | 0L)) | l_73) >= g_22[3]), p_9))), l_112)) > 1L) ^ 0x5E6FF6BBL)))
            { 
                int32_t l_113 = (-2L);
                int32_t l_115[5];
                int32_t l_119 = 0x9CB80B1AL;
                uint16_t l_123[3];
                int i;
                for (i = 0; i < 5; i++)
                    l_115[i] = 8L;
                for (i = 0; i < 3; i++)
                    l_123[i] = 2UL;
                ++l_123[1];
                return g_110.f0;
            }
            else
            { 
                l_89.f0 = l_118;
            }
            if ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(((safe_add_func_int8_t_s_s((l_118 = (l_118 , ((p_9 , (g_144[0] = (safe_mod_func_uint32_t_u_u((0UL >= (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((g_110.f0.f1 = (safe_add_func_int64_t_s_s(((safe_mod_func_int16_t_s_s((+p_9), 0x9B1DL)) != 2UL), g_17))) != 0x929AL) | l_143), 1)), 254UL))), l_96[1][3].f3)))) >= p_9))), l_54[0][0])) , 0xF98911890E32AAFALL), l_122[0][2][1])) < 0x19E490029EFAAE2ELL), 1UL)))
            { 
                int32_t l_145 = 0x6EB19FD9L;
                int32_t l_146[5][5][1];
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_146[i][j][k] = 0x3E45B0D9L;
                    }
                }
lbl_165:
                --l_147;
                g_21[1][4] = (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(((((l_145 = (-1L)) != (safe_div_func_uint16_t_u_u(0xA0FDL, p_9))) || (safe_div_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s(g_110.f0.f0, p_9)), 0xFDFCL)) , l_73) > 0x6935L), g_22[2]))) != 0UL), p_9)) , p_9) <= g_22[2]), l_164[0][0])), p_9));
                if (g_110.f0.f1)
                    goto lbl_165;
            }
            else
            { 
                struct S0 l_166[1] = {{0x9BEEC060L,0UL,0x1CEBDA19L,0L}};
                int i;
                return l_166[0];
            }
        }
        else
        { 
            struct S0 l_167 = {0xD6E2808CL,0xBF85L,-1L,-10L};
            int32_t l_169 = 0L;
            int32_t l_170 = 0x8EA3A565L;
            uint16_t l_172 = 0xE6B9L;
            for (l_147 = 0; (l_147 <= 0); l_147 += 1)
            { 
                return l_167;
            }
            ++l_172;
            for (l_167.f3 = 23; (l_167.f3 != (-22)); l_167.f3 = safe_sub_func_int16_t_s_s(l_167.f3, 5))
            { 
                uint32_t l_179 = 4294967295UL;
                struct S0 l_192[5][1] = {{{-1L,0x3B49L,0x03B356D7L,-6L}},{{-1L,0x3B49L,0x03B356D7L,-6L}},{{-1L,0x3B49L,0x03B356D7L,-6L}},{{-1L,0x3B49L,0x03B356D7L,-6L}},{{-1L,0x3B49L,0x03B356D7L,-6L}}};
                int i, j;
                l_167.f0 = (safe_lshift_func_uint16_t_u_u((l_81 != g_66), 13));
                --l_179;
                l_116 = (safe_mul_func_uint16_t_u_u(p_9, ((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((g_110.f0.f3 <= (0UL ^ ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((0x583D22D4L != p_9), p_9)), g_22[3])) , 0xFDL))) , l_192[1][0]) , l_192[1][0].f2), (-1L))), p_9)) || l_170)));
            }
        }
    }
    return l_96[1][3];
}



static uint64_t  func_10(uint64_t  p_11, uint16_t  p_12, int32_t  p_13, uint8_t  p_14, int32_t  p_15)
{ 
    uint32_t l_42 = 0x742CC323L;
    int16_t l_51 = (-1L);
    for (g_17 = (-2); (g_17 != 24); g_17++)
    { 
        int16_t l_38 = 4L;
        int32_t l_39 = 0x826FFEA1L;
        for (g_16 = 20; (g_16 > 24); g_16++)
        { 
            int32_t l_37 = 0x927DB404L;
            if (l_37)
            { 
                l_39 = (l_38 = 0xC160EC25L);
            }
            else
            { 
                l_42 |= (safe_rshift_func_int8_t_s_u(0x89L, 1));
            }
        }
    }
    l_51 = (g_21[1][4] = (safe_mul_func_uint16_t_u_u(g_17, (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((((0xF1E73E4F9F010208LL && ((safe_div_func_int8_t_s_s(((g_22[2] || ((0x8FL | p_12) < g_22[2])) ^ g_22[3]), 0xBCL)) && l_42)) | l_42) , 0L), g_22[2])) && g_21[1][4]), 0x7DL)))));
    return g_21[1][4];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_21[i][j], "g_21[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_22[i], "g_22[i]", print_hash_value);

    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_110.f0.f0, "g_110.f0.f0", print_hash_value);
    transparent_crc(g_110.f0.f1, "g_110.f0.f1", print_hash_value);
    transparent_crc(g_110.f0.f2, "g_110.f0.f2", print_hash_value);
    transparent_crc(g_110.f0.f3, "g_110.f0.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_144[i], "g_144[i]", print_hash_value);

    }
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_284[i][j].f0, "g_284[i][j].f0", print_hash_value);
            transparent_crc(g_284[i][j].f1, "g_284[i][j].f1", print_hash_value);
            transparent_crc(g_284[i][j].f2, "g_284[i][j].f2", print_hash_value);
            transparent_crc(g_284[i][j].f3, "g_284[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_341, "g_341", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}

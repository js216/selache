// SPDX-License-Identifier: MIT
// cctest_csmith_f421857d.c --- cctest case csmith_f421857d (csmith seed 4095837565)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x64656061 */

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

// Options:   -s 4095837565 -o /tmp/csmith_gen_j3rvfveq/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const signed f0 : 29;
   unsigned : 0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint64_t  f0;
};
#pragma pack(pop)

struct S3 {
   uint8_t  f0;
   int8_t  f1;
   unsigned f2 : 10;
   uint16_t  f3;
   unsigned : 0;
   struct S2  f4;
};

union U5 {
   uint16_t  f0;
   int64_t  f1;
   int32_t  f2;
   int32_t  f3;
};

union U6 {
   int8_t  f0;
   int8_t  f1;
   uint32_t  f2;
};


static int32_t g_2 = (-1L);
static struct S0 g_24 = {659};
static struct S3 g_25 = {0xB7L,0x26L,18,4UL,{0xD8D34108FA7AD11ELL}};
static int8_t g_52 = 1L;
static uint16_t g_68 = 65533UL;
static uint16_t g_103 = 65528UL;
static union U5 g_105 = {0x44AAL};
static uint32_t g_121 = 18446744073709551615UL;
static struct S2 g_145[4] = {{0xA7480A48E4E02624LL},{0xA7480A48E4E02624LL},{0xA7480A48E4E02624LL},{0xA7480A48E4E02624LL}};
static int32_t g_148[3] = {(-1L),(-1L),(-1L)};
static uint32_t g_180 = 0x62ACF96EL;
static int64_t g_223 = 0x23AC2EB08BFD2D81LL;
static uint32_t g_230 = 4UL;
static int64_t g_233 = 0xA58F45283C700573LL;
static uint16_t g_243[1][1] = {{3UL}};



static int16_t  func_1(void);
static int32_t  func_6(union U6  p_7, uint16_t  p_8, uint32_t  p_9, union U5  p_10);
static struct S3  func_13(int8_t  p_14, struct S2  p_15, int32_t  p_16, uint8_t  p_17);
static struct S2  func_18(struct S0  p_19, struct S3  p_20);




static int16_t  func_1(void)
{ 
    uint32_t l_12 = 1UL;
    uint8_t l_23 = 255UL;
    for (g_2 = 13; (g_2 != (-20)); g_2--)
    { 
        uint32_t l_5 = 0UL;
        union U6 l_11 = {4L};
        int32_t l_229[2][2] = {{0x276FF538L,0x276FF538L},{0x276FF538L,0x276FF538L}};
        int64_t l_242 = 0xD3F1B2D74E970706LL;
        int i, j;
        l_5 = g_2;
        if ((l_229[0][1] = func_6(l_11, l_12, ((((func_13(g_2, func_18((((safe_mod_func_int16_t_s_s(l_12, l_23)) <= l_12) , g_24), g_25), l_23, g_25.f1) , g_2) >= 1L) < 1L) || g_2), g_105)))
        { 
            g_230--;
        }
        else
        { 
            struct S3 l_238[2][5] = {{{254UL,-5L,9,1UL,{0x5E00178F1F42B0BFLL}},{254UL,-5L,9,1UL,{0x5E00178F1F42B0BFLL}},{254UL,-5L,9,1UL,{0x5E00178F1F42B0BFLL}},{254UL,-5L,9,1UL,{0x5E00178F1F42B0BFLL}},{254UL,-5L,9,1UL,{0x5E00178F1F42B0BFLL}}},{{254UL,-5L,9,1UL,{0x5E00178F1F42B0BFLL}},{254UL,-5L,9,1UL,{0x5E00178F1F42B0BFLL}},{254UL,-5L,9,1UL,{0x5E00178F1F42B0BFLL}},{254UL,-5L,9,1UL,{0x5E00178F1F42B0BFLL}},{254UL,-5L,9,1UL,{0x5E00178F1F42B0BFLL}}}};
            uint32_t l_239 = 0UL;
            int i, j;
            g_243[0][0] = ((g_233 = 4L) || (safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((l_238[1][4] , l_239) , (safe_div_func_uint16_t_u_u(65532UL, g_25.f1))), 0xD65F59F4L)) , l_12), l_242)));
        }
    }
    return g_24.f0;
}



static int32_t  func_6(union U6  p_7, uint16_t  p_8, uint32_t  p_9, union U5  p_10)
{ 
    uint32_t l_110 = 1UL;
    int32_t l_115 = 0x54BB3B6DL;
    const int64_t l_116 = (-7L);
    int32_t l_142 = 1L;
    int32_t l_144 = (-9L);
    if ((((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(0x1D06L, l_110)) >= ((l_115 = (safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u((0xA5A11BA0C28541D7LL >= (0UL < g_105.f0)), g_105.f0)), g_105.f0))) > l_116)), 6)) >= p_7.f0) | 0L))
    { 
        int8_t l_129 = 0xC2L;
        int32_t l_141 = 0xBD10C218L;
        uint32_t l_143 = 1UL;
        for (p_7.f0 = 21; (p_7.f0 > 11); p_7.f0 = safe_sub_func_uint64_t_u_u(p_7.f0, 7))
        { 
            for (l_110 = (-15); (l_110 > 12); l_110 = safe_add_func_uint64_t_u_u(l_110, 4))
            { 
                g_121 = g_25.f0;
            }
            if (((safe_lshift_func_uint16_t_u_u(0xE9C8L, 9)) == (g_25.f0--)))
            { 
                return l_110;
            }
            else
            { 
                uint64_t l_128 = 0x3178D71A0F86E789LL;
                l_129 = (safe_add_func_int32_t_s_s(l_115, (((p_7.f1 == 1UL) >= ((l_128 ^= (5L < p_7.f1)) == 0xDCL)) ^ g_121)));
            }
        }
        l_144 ^= (l_143 = (((p_7.f0 & l_115) < ((safe_sub_func_int64_t_s_s(p_7.f0, (((l_142 = (safe_rshift_func_int16_t_s_u((((((safe_add_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint8_t_u_s((l_141 = (((0x2AL <= p_7.f1) , 0x40C0AAE426BEBBADLL) == 0L)), g_25.f4.f0)))), g_25.f1)) | 1UL) & l_116) < l_129) | g_25.f0), 1))) <= (-5L)) <= 7L))) & 6UL)) && p_10.f0));
    }
    else
    { 
        uint64_t l_149 = 0x1AB325749A0BCAFDLL;
        int32_t l_156 = 0xA0356080L;
        int32_t l_174 = 0x6225F419L;
        int32_t l_175[4] = {0xA730D9EEL,0xA730D9EEL,0xA730D9EEL,0xA730D9EEL};
        struct S3 l_196 = {249UL,0x60L,22,65530UL,{1UL}};
        int i;
        for (g_105.f0 = 0; (g_105.f0 <= 3); g_105.f0 += 1)
        { 
            struct S3 l_146 = {1UL,0x9EL,30,0xC36FL,{0xD392A8A950BD7AEALL}};
            struct S3 l_147 = {0xFBL,-1L,0,0x4FE3L,{1UL}};
            l_147 = (l_146 = l_146);
            l_149--;
            for (l_149 = 0; (l_149 <= 3); l_149 += 1)
            { 
                return p_10.f0;
            }
        }
        l_156 = ((((l_149 != p_9) <= (((safe_div_func_int64_t_s_s((l_115 , (l_116 ^ 0UL)), l_149)) , 0xD0226C0DD84272FDLL) <= p_8)) ^ g_121) <= l_149);
        if ((safe_sub_func_int8_t_s_s((-9L), ((l_156 |= g_148[1]) == (safe_mod_func_int8_t_s_s((l_175[1] = (safe_mod_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u(((l_174 = (!(safe_mul_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((l_144 = (safe_rshift_func_uint16_t_u_s(0x1045L, (((safe_sub_func_uint64_t_u_u(g_25.f2, l_144)) ^ (-4L)) | l_149)))), g_25.f3)) & g_24.f0), g_52)))) || 1UL), 0xD4E5047FADFC4768LL)) && l_116), (-1L)))), g_148[0]))))))
        { 
            for (p_10.f2 = 0; (p_10.f2 == (-23)); p_10.f2 = safe_sub_func_int32_t_s_s(p_10.f2, 5))
            { 
                l_156 ^= l_144;
            }
            for (g_105.f3 = 0; (g_105.f3 < 6); g_105.f3 = safe_add_func_int8_t_s_s(g_105.f3, 1))
            { 
                g_180--;
                return l_144;
            }
        }
        else
        { 
            uint8_t l_188[4] = {0xB7L,0xB7L,0xB7L,0xB7L};
            int32_t l_191 = (-1L);
            int32_t l_194 = 1L;
            struct S3 l_195[1] = {{0xA1L,0xB0L,5,4UL,{0x54C0729605C3BE27LL}}};
            struct S0 l_205[3][4][3] = {{{{17681},{8697},{-17681}},{{-11339},{-8918},{-17433}},{{17681},{17681},{-17433}},{{-8918},{-11339},{-17681}}},{{{8697},{17681},{8697}},{{-11339},{8697},{9920}},{{8697},{-11339},{-11339}},{{9920},{-11339},{-17433}}},{{{-17681},{8697},{17681}},{{9920},{9920},{17681}},{{8697},{-17681},{-17433}},{{-11339},{9920},{-11339}}}};
            int32_t l_224 = (-1L);
            int16_t l_225 = 5L;
            int i, j, k;
            for (p_10.f1 = 0; (p_10.f1 <= 3); p_10.f1 += 1)
            { 
                uint32_t l_183 = 0x3A8B7B41L;
                l_183--;
            }
            l_196 = (l_195[0] = func_13(l_115, g_145[0], ((l_194 = (safe_sub_func_uint8_t_u_u((((((l_191 ^= (l_188[1]++)) != (safe_add_func_uint8_t_u_u((g_25.f0 = p_10.f0), (l_194 >= 0L)))) < g_68) || l_116) != p_9), p_10.f0))) , 9L), g_2));
            if ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((l_205[2][0][1] , (g_25.f4.f0 <= ((safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s(g_180, ((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((((safe_sub_func_int8_t_s_s(((~(safe_sub_func_int8_t_s_s(((l_191 = (safe_div_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((((l_224 ^= ((g_223 = (((l_195[0].f4 , 3UL) & p_10.f2) >= g_25.f4.f0)) && 0x1A9E1033DE3EAF4DLL)) != 0xE833L) && 18446744073709551615UL) > p_10.f2), 1UL)) || p_9), p_10.f3))) & g_25.f3), l_142))) , 1L), 0x36L)) && l_195[0].f0) & 3UL) >= l_196.f0), l_116)), l_175[1])) == p_10.f2))), 18446744073709551610UL)) <= p_10.f1))) ^ (-1L)), l_194)), 3)), l_225)), l_115)))
            { 
                uint8_t l_226 = 246UL;
                l_226--;
            }
            else
            { 
                return l_115;
            }
        }
    }
    return l_144;
}



static struct S3  func_13(int8_t  p_14, struct S2  p_15, int32_t  p_16, uint8_t  p_17)
{ 
    struct S2 l_29 = {0x628AEA381E168459LL};
    struct S0 l_38 = {-10569};
    int32_t l_39 = 0xB2EF5EADL;
    union U5 l_57 = {0UL};
    uint64_t l_81 = 1UL;
    l_29 = l_29;
    if ((safe_lshift_func_uint16_t_u_s((l_39 = (safe_div_func_uint8_t_u_u(p_15.f0, (p_14 = (safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((l_38 , p_17), l_38.f0)) & (-7L)), p_16)))))), l_29.f0)))
    { 
        uint16_t l_46 = 0x11ABL;
        int32_t l_48 = 1L;
        for (p_16 = 0; (p_16 >= 11); p_16 = safe_add_func_int64_t_s_s(p_16, 9))
        { 
            l_48 &= ((0x2B2CL == (safe_rshift_func_uint16_t_u_u(l_46, 8))) == ((!g_25.f2) == 5L));
        }
    }
    else
    { 
        int64_t l_51[2];
        union U5 l_58 = {65535UL};
        int8_t l_63 = 9L;
        struct S3 l_71[2][5] = {{{0UL,0x70L,26,0x1AACL,{18446744073709551612UL}},{0x2FL,-1L,0,0xC68BL,{0UL}},{0x2FL,-1L,0,0xC68BL,{0UL}},{0UL,0x70L,26,0x1AACL,{18446744073709551612UL}},{0UL,-1L,0,0x515EL,{0xAD316F54511143DCLL}}},{{0UL,0x70L,26,0x1AACL,{18446744073709551612UL}},{0x2FL,-1L,0,0xC68BL,{0UL}},{0x2FL,-1L,0,0xC68BL,{0UL}},{0UL,0x70L,26,0x1AACL,{18446744073709551612UL}},{0UL,-1L,0,0x515EL,{0xAD316F54511143DCLL}}}};
        int32_t l_80 = 0xB12C1214L;
        int32_t l_84 = 2L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_51[i] = 0x9D06D0C81CF0CDBBLL;
        l_39 = ((g_25.f2 , p_14) && 0x7725EFF8L);
lbl_104:
        l_39 = (safe_rshift_func_int16_t_s_s(0x7E5EL, 5));
        if ((g_52 = l_51[1]))
        { 
            struct S0 l_55[2] = {{-4798},{-4798}};
            int16_t l_82 = 0x64A1L;
            int i;
            for (l_29.f0 = 0; (l_29.f0 < 18); l_29.f0 = safe_add_func_uint64_t_u_u(l_29.f0, 8))
            { 
                struct S3 l_56 = {0x89L,-1L,7,0x439DL,{0xF4693715CD22FFD3LL}};
                p_15 = func_18(l_55[0], l_56);
            }
            if ((((l_58 = l_57) , l_55[0].f0) > ((g_2 <= (safe_mul_func_int8_t_s_s((((((safe_add_func_uint16_t_u_u((((g_25.f3 <= g_25.f0) , l_55[0].f0) | p_17), l_55[0].f0)) <= g_24.f0) || p_15.f0) ^ 0x11CD9E91L) == p_16), 0xC2L))) | 0x8CD4L)))
            { 
                uint8_t l_83 = 255UL;
                l_63 = 0xDE25D9D0L;
                l_84 = (safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s((g_68 = l_55[0].f0), (safe_rshift_func_uint8_t_u_s((l_71[0][4] , ((safe_mod_func_uint16_t_u_u((l_83 &= ((safe_lshift_func_uint8_t_u_u(((g_25.f4.f0 > ((((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((((l_80 &= ((l_29.f0 == g_25.f0) != p_17)) & g_52) | l_81), g_52)), p_17)) >= l_55[0].f0) > g_25.f3) ^ 6UL)) ^ 0L), l_82)) > p_16)), l_71[0][4].f2)) == g_25.f0)), p_17)))), p_17));
                l_39 |= (((+l_83) != (((+p_16) , (safe_mod_func_uint32_t_u_u(((((safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(65534UL, (((safe_add_func_uint8_t_u_u(l_71[0][4].f2, l_81)) <= l_81) & l_55[0].f0))), (-3L))) & 0xCBL) < l_83) , p_16), 0x57241B9AL))) | 0x525E98B5L)) == (-1L));
            }
            else
            { 
                uint8_t l_102[3][3] = {{0x80L,0x80L,0x80L},{255UL,255UL,255UL},{0x80L,0x80L,0x80L}};
                int i, j;
                g_103 &= (safe_div_func_int32_t_s_s((+(0L != ((safe_sub_func_int8_t_s_s((~((((~g_25.f0) > 0L) == 0x61CAL) != p_14)), l_102[1][2])) <= l_55[0].f0))), l_39));
            }
        }
        else
        { 
            if (p_15.f0)
                goto lbl_104;
        }
    }
    return g_25;
}



static struct S2  func_18(struct S0  p_19, struct S3  p_20)
{ 
    struct S2 l_28 = {0x094BF7D69FDB81FDLL};
    for (g_25.f3 = 0; (g_25.f3 <= 26); g_25.f3 = safe_add_func_int64_t_s_s(g_25.f3, 2))
    { 
        return g_25.f4;
    }
    return l_28;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_25.f1, "g_25.f1", print_hash_value);
    transparent_crc(g_25.f2, "g_25.f2", print_hash_value);
    transparent_crc(g_25.f3, "g_25.f3", print_hash_value);
    transparent_crc(g_25.f4.f0, "g_25.f4.f0", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_145[i].f0, "g_145[i].f0", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_148[i], "g_148[i]", print_hash_value);

    }
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_243[i][j], "g_243[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}

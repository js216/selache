// SPDX-License-Identifier: MIT
// cctest_csmith_58ee3133.c --- cctest case csmith_58ee3133 (csmith seed 1492005171)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2dd3e2c8 */

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

// Options:   -s 1492005171 -o /tmp/csmith_gen_3ims0d02/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
};
#pragma pack(pop)

union U1 {
   int8_t  f0;
   struct S0  f1;
   int64_t  f2;
};


static int32_t g_2 = (-1L);
static int64_t g_6[2] = {1L,1L};
static int32_t g_8[5][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
static int32_t g_12 = 0xFB3A4DF6L;
static int16_t g_15[3] = {2L,2L,2L};
static int32_t g_16[3][1] = {{0x78F1E0C8L},{0x78F1E0C8L},{0x78F1E0C8L}};
static int8_t g_94 = 0x84L;
static uint16_t g_141[4][5] = {{0xCF00L,0xCF00L,0UL,0UL,0xCF00L},{65533UL,1UL,65533UL,1UL,65533UL},{0xCF00L,0UL,0UL,0xCF00L,0xCF00L},{0xD771L,1UL,0xD771L,1UL,0xD771L}};
static uint64_t g_175 = 1UL;
static struct S0 g_177 = {3UL};
static int16_t g_219[4][5] = {{4L,0x754FL,4L,8L,8L},{4L,0x754FL,4L,4L,4L},{0x9C3FL,0L,0x9C3FL,4L,4L},{0x9C3FL,0L,0x9C3FL,4L,4L}};
static union U1 g_237 = {0x40L};
static uint32_t g_245 = 0xC9C70339L;
static int32_t g_247 = 1L;



static int16_t  func_1(void);
static uint8_t  func_56(const union U1  p_57, union U1  p_58, int8_t  p_59, const int8_t  p_60);
static int32_t  func_71(int64_t  p_72, int64_t  p_73);
static uint16_t  func_80(int16_t  p_81);




static int16_t  func_1(void)
{ 
    int8_t l_5 = 0x5CL;
    int32_t l_7 = 0x9CF1813FL;
    int32_t l_10[2][3] = {{0x1E4F1F13L,0x1E4F1F13L,0x7E08A110L},{0x1E4F1F13L,0x1E4F1F13L,0x7E08A110L}};
    uint8_t l_18 = 0xF3L;
    int32_t l_30 = 0x8597A0B8L;
    int32_t l_31 = (-1L);
    int32_t l_32 = 0x0FA2E85CL;
    int32_t l_36 = 0L;
    int32_t l_37 = 0x2BAC4117L;
    int32_t l_41[5];
    union U1 l_62 = {0xF0L};
    int8_t l_246[3][3][3] = {{{5L,5L,(-6L)},{5L,5L,(-6L)},{5L,5L,(-6L)}},{{5L,5L,(-6L)},{5L,5L,(-6L)},{5L,5L,(-6L)}},{{5L,5L,(-6L)},{5L,5L,(-6L)},{5L,5L,(-6L)}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_41[i] = 0xE6A916C6L;
    for (g_2 = 0; (g_2 < (-20)); g_2--)
    { 
        int16_t l_9 = (-5L);
        int32_t l_11 = (-6L);
        int32_t l_13 = 1L;
        int32_t l_14 = 0x21E1D82CL;
        int32_t l_17[4][1][4] = {{{0x43AF7806L,(-7L),(-7L),0x43AF7806L}},{{(-7L),0x43AF7806L,8L,0xBF748DC1L}},{{(-7L),8L,(-7L),(-1L)}},{{0x43AF7806L,0xBF748DC1L,(-1L),(-1L)}}};
        int i, j, k;
        ++l_18;
        if ((l_10[0][0] >= g_12))
        { 
            int64_t l_27 = (-8L);
            const int32_t l_28 = 0x4D41BD43L;
            uint8_t l_29[3][2][2] = {{{9UL,248UL},{9UL,9UL}},{{248UL,9UL},{9UL,248UL}},{{9UL,9UL},{248UL,9UL}}};
            int32_t l_33 = 1L;
            int32_t l_34[4][4][2] = {{{(-6L),(-1L)},{(-6L),0xFCD4D338L},{0xB5DFEB07L,(-6L)},{0xFCD4D338L,(-1L)}},{{9L,9L},{0xB5DFEB07L,9L},{9L,(-1L)},{0xFCD4D338L,(-6L)}},{{0xB5DFEB07L,0xFCD4D338L},{(-6L),(-1L)},{(-6L),0xFCD4D338L},{0xB5DFEB07L,(-6L)}},{{0xFCD4D338L,(-1L)},{9L,9L},{0xB5DFEB07L,9L},{9L,(-1L)}}};
            int8_t l_40[4][2][4] = {{{(-1L),0L,(-1L),0L},{(-1L),(-1L),(-2L),0L}},{{(-2L),0L,(-2L),(-1L)},{(-1L),0L,(-1L),0L}},{{(-1L),(-1L),(-2L),0L},{(-2L),0L,(-2L),(-1L)}},{{(-1L),0L,(-1L),0L},{(-1L),(-1L),(-2L),0L}}};
            int64_t l_42[1][4][2];
            uint8_t l_43 = 0x81L;
            const union U1 l_61 = {-1L};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_42[i][j][k] = 1L;
                }
            }
            if ((safe_rshift_func_int16_t_s_s(g_15[1], (255UL != ((l_27 = ((safe_mul_func_uint16_t_u_u((g_16[1][0] == (safe_div_func_uint8_t_u_u(255UL, 5L))), g_12)) <= l_11)) ^ l_28)))))
            { 
                return l_18;
            }
            else
            { 
                int8_t l_35[3];
                int32_t l_38 = 7L;
                int32_t l_39[4];
                int i;
                for (i = 0; i < 3; i++)
                    l_35[i] = 4L;
                for (i = 0; i < 4; i++)
                    l_39[i] = 0x74E37A2EL;
                l_29[0][0][1] = l_17[3][0][3];
                l_43++;
            }
            for (l_37 = (-22); (l_37 < (-24)); l_37 = safe_sub_func_int16_t_s_s(l_37, 4))
            { 
                uint16_t l_52 = 65529UL;
                g_16[2][0] = g_8[1][0];
                g_219[2][3] ^= (safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((l_52 ^ (safe_add_func_int8_t_s_s((+func_56(l_61, l_62, g_15[0], g_8[0][1])), l_29[0][0][1]))), g_8[3][1])), g_15[2]));
                g_16[2][0] = 0xD4DB2FC5L;
            }
        }
        else
        { 
            const int32_t l_244 = 0x37CA2DBAL;
            l_32 = ((g_247 = (safe_rshift_func_uint8_t_u_s((l_246[1][0][0] = (((safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((((((safe_unary_minus_func_uint16_t_u(0UL)) , (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((g_245 = (safe_add_func_int64_t_s_s(((g_237.f0 = (g_94 ^= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((g_237 , (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((254UL ^ ((safe_rshift_func_int8_t_s_u(0xDDL, l_244)) , g_8[0][1])), g_15[1])), l_31))) & l_18), 0)), g_15[1])))) <= 0xECL), g_8[0][1]))) || 0xCCL), g_6[1])), 3))) | 0x4D30L) & l_244) != 0x6DCBL) == 7L), g_2)) < g_8[4][1]), l_32)) | 0L) & l_9)), g_219[2][2]))) , 0L);
        }
    }
    for (g_237.f1.f0 = 18; (g_237.f1.f0 <= 17); g_237.f1.f0 = safe_sub_func_uint32_t_u_u(g_237.f1.f0, 1))
    { 
        int64_t l_250 = 0x19D36E7CB702D6E2LL;
        return l_250;
    }
    return g_94;
}



static uint8_t  func_56(const union U1  p_57, union U1  p_58, int8_t  p_59, const int8_t  p_60)
{ 
    int32_t l_67 = 0xAE8BCD06L;
    int32_t l_162[2];
    int32_t l_208[1][3][3] = {{{(-1L),(-1L),(-1L)},{0xC6E3E164L,0xC6E3E164L,0xC6E3E164L},{(-1L),(-1L),(-1L)}}};
    int32_t l_209 = (-9L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_162[i] = (-1L);
lbl_218:
    for (g_12 = 0; (g_12 <= 27); g_12 = safe_add_func_uint32_t_u_u(g_12, 7))
    { 
        int64_t l_65 = 0L;
        int32_t l_66[1];
        uint32_t l_68 = 0x98086ADBL;
        int i;
        for (i = 0; i < 1; i++)
            l_66[i] = (-1L);
        --l_68;
    }
    if (func_71(p_58.f0, (safe_lshift_func_uint16_t_u_s(((((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(func_80(((safe_mul_func_int8_t_s_s(g_15[0], ((safe_unary_minus_func_uint16_t_u(((safe_lshift_func_int8_t_s_u(((safe_div_func_int32_t_s_s(g_8[0][1], (((safe_add_func_int16_t_s_s((p_60 ^ l_67), l_67)) < p_59) , l_67))) >= g_6[1]), 5)) <= p_60))) == p_59))) & l_67)), l_67)), g_94)) ^ g_8[3][0]) >= 1UL) ^ l_67), g_94))))
    { 
        int64_t l_174 = 0L;
        int32_t l_176 = 8L;
        int32_t l_187 = 6L;
        int32_t l_210 = 0L;
        int32_t l_211 = 0x7E17490EL;
        int32_t l_212 = (-10L);
        int32_t l_213[5][2][2];
        int64_t l_214 = (-1L);
        uint32_t l_215 = 0x97F2CF57L;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_213[i][j][k] = (-6L);
            }
        }
        if (((safe_rshift_func_int16_t_s_u(p_59, (l_176 |= ((l_162[0] | ((safe_rshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s((!(safe_sub_func_uint16_t_u_u(0x9D40L, (safe_sub_func_uint32_t_u_u((g_175 = (safe_mul_func_int16_t_s_s((l_174 < p_59), 0x6934L))), g_94))))), p_60)), 6)) ^ l_174)) != l_174)))) == 4L))
        { 
            uint16_t l_186 = 7UL;
            int32_t l_198 = 1L;
            if ((g_15[0] <= (2L == (-10L))))
            { 
                g_177 = g_177;
            }
            else
            { 
                uint64_t l_183 = 0x988608D2D9E6926ELL;
                uint8_t l_188 = 255UL;
                g_12 ^= (g_141[2][3] == p_60);
                l_188 |= ((g_94 |= (safe_sub_func_int32_t_s_s(0L, p_58.f0))) | (safe_sub_func_int32_t_s_s((~((((l_183 >= (g_6[1] = ((l_187 &= ((l_176 = ((safe_mod_func_uint32_t_u_u(4294967291UL, l_186)) > 8UL)) < l_162[0])) != g_8[1][0]))) < g_15[1]) || p_57.f0) && l_176)), g_16[0][0])));
                return g_12;
            }
            for (p_58.f2 = 0; (p_58.f2 > (-12)); --p_58.f2)
            { 
                return g_177.f0;
            }
            l_198 ^= ((safe_add_func_uint64_t_u_u((+g_94), (l_186 & (safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(l_174, (p_58.f1.f0 ^ g_15[1]))), 0x3B573FADL))))) > g_94);
        }
        else
        { 
            for (p_58.f0 = 0; (p_58.f0 == (-4)); p_58.f0--)
            { 
                uint16_t l_205 = 65532UL;
                g_12 = (((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((l_67 , 65535UL), g_141[0][4])), (g_8[0][1] | l_205))) | g_141[0][4]) , l_174);
                l_209 = (safe_sub_func_uint64_t_u_u((p_57.f0 && 0xBD85DC1642A7893ALL), (((g_6[1] = 0x6FD86818F9B38B2FLL) , (((((l_208[0][2][2] = g_94) || g_15[1]) & 0xF6FCF51EL) >= p_59) > 0L)) >= g_94)));
                if (g_15[2])
                    break;
            }
        }
        l_215++;
    }
    else
    { 
        if (p_58.f0)
            goto lbl_218;
    }
    return g_2;
}



static int32_t  func_71(int64_t  p_72, int64_t  p_73)
{ 
    uint32_t l_97 = 0UL;
    int32_t l_114[5][1][3];
    int32_t l_117 = 0x34830CAEL;
    uint8_t l_146 = 0x6BL;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_114[i][j][k] = 1L;
        }
    }
lbl_159:
    if (p_72)
    { 
        uint64_t l_113[5];
        struct S0 l_115 = {0x9313D93154CD5CA7LL};
        int i;
        for (i = 0; i < 5; i++)
            l_113[i] = 18446744073709551606UL;
        if ((0x97L == (g_8[0][1] | (g_6[1] &= (0L & (safe_mod_func_int32_t_s_s((p_72 , p_73), p_72)))))))
        { 
            int32_t l_104 = 0L;
            int32_t l_105 = 0L;
            for (g_12 = 0; (g_12 >= 0); g_12 -= 1)
            { 
                --l_97;
                l_105 = (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(l_104, p_73)), 0L));
                l_114[2][0][2] &= (safe_add_func_int16_t_s_s((0x59L != (g_6[1] && (safe_mul_func_uint16_t_u_u(l_104, (safe_rshift_func_uint16_t_u_s((!(p_72 = (-1L))), g_16[0][0])))))), l_113[4]));
            }
        }
        else
        { 
            struct S0 l_116 = {1UL};
            for (g_94 = 4; (g_94 >= 0); g_94 -= 1)
            { 
                int i;
                l_116 = l_115;
                if (l_113[g_94])
                    break;
            }
        }
        l_114[2][0][2] &= 0xD0445F76L;
        l_117 &= l_114[2][0][2];
    }
    else
    { 
        int64_t l_120 = (-10L);
        int32_t l_121 = 1L;
        uint8_t l_139 = 0UL;
        int32_t l_140 = 1L;
        for (p_72 = 0; (p_72 != 0); p_72 = safe_add_func_uint32_t_u_u(p_72, 9))
        { 
            uint16_t l_122 = 65535UL;
            l_122++;
        }
        l_117 |= (l_140 = (safe_lshift_func_int8_t_s_u((((safe_add_func_uint8_t_u_u((g_16[0][0] | (l_121 = l_120)), ((safe_mul_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((((((safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s(p_72, (g_2 != g_15[1]))), l_114[1][0][2])) || l_139) || 0x4BL) >= p_72) | 0L), l_120)) && g_2) , p_73), p_73)) && g_6[0]))) | p_73) < g_6[1]), 0)));
    }
    for (l_97 = 0; (l_97 <= 1); l_97 += 1)
    { 
        uint16_t l_150[4];
        int32_t l_151 = 0x0895C1B5L;
        int32_t l_152 = 0xCE4AD852L;
        int32_t l_153[4];
        uint32_t l_154 = 18446744073709551608UL;
        int i;
        for (i = 0; i < 4; i++)
            l_150[i] = 7UL;
        for (i = 0; i < 4; i++)
            l_153[i] = 0x977F7388L;
        g_12 &= (l_117 = ((g_141[0][4]++) , ((g_6[1] | (safe_rshift_func_int16_t_s_u(g_6[1], l_146))) != (safe_unary_minus_func_int16_t_s(((safe_add_func_uint8_t_u_u(0UL, g_16[0][0])) & g_2))))));
        l_150[3] = p_73;
        --l_154;
        for (l_152 = 1; (l_152 >= 0); l_152 -= 1)
        { 
            int i, j;
            g_12 = (safe_lshift_func_uint16_t_u_s((g_8[l_152][l_152] , 65531UL), 6));
            if (p_73)
                break;
            for (g_94 = 0; (g_94 <= 1); g_94 += 1)
            { 
                if (l_117)
                    goto lbl_159;
            }
        }
    }
    return p_73;
}



static uint16_t  func_80(int16_t  p_81)
{ 
    int64_t l_93 = (-1L);
    g_16[0][0] = (((safe_mul_func_uint16_t_u_u(p_81, p_81)) == (255UL == g_15[1])) & p_81);
    l_93 = ((-6L) | g_16[0][0]);
    return l_93;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_15[i], "g_15[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_16[i][j], "g_16[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_94, "g_94", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_141[i][j], "g_141[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_177.f0, "g_177.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_219[i][j], "g_219[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_237.f0, "g_237.f0", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}

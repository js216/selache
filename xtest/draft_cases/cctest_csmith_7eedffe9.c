// SPDX-License-Identifier: MIT
// cctest_csmith_7eedffe9.c --- cctest case csmith_7eedffe9 (csmith seed 2129526761)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x52173e38 */

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

// Options:   -s 2129526761 -o /tmp/csmith_gen_6s7es2do/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 19;
   unsigned f1 : 30;
};
#pragma pack(pop)

union U1 {
   const uint8_t  f0;
};

union U2 {
   const int32_t  f0;
   uint32_t  f1;
   signed f2 : 19;
   int8_t * const  f3;
   const int64_t  f4;
};


static int8_t g_11 = (-5L);
static int8_t *g_13 = (void*)0;
static union U2 g_18[4][5] = {{{0x061ECE30L},{0x061ECE30L},{0x061ECE30L},{0x061ECE30L},{0x061ECE30L}},{{0L},{0L},{0L},{0L},{0L}},{{0x061ECE30L},{0x061ECE30L},{0x061ECE30L},{0x061ECE30L},{0x061ECE30L}},{{0L},{0L},{0L},{0L},{0L}}};
static uint64_t g_35 = 4UL;
static uint64_t g_40 = 0x0887C5C6A81D68C2LL;
static int32_t g_47 = (-2L);
static uint32_t g_51[1] = {0xDA84ADE7L};
static struct S0 g_60 = {-151,4178};
static int16_t g_63 = 0L;
static int32_t g_77 = (-5L);
static int32_t g_81[5][6][5] = {{{0L,0xD9125BECL,(-6L),0L,0x5405EA32L},{1L,(-3L),0x73E763FFL,0xD0DA963FL,0x79EF6EAEL},{(-1L),0xD0DA963FL,0L,0L,0x37F729B2L},{0L,(-6L),0L,0x41928B54L,1L},{(-1L),0L,0x73E763FFL,0L,(-1L)},{(-6L),0x896B3C83L,0x05BF03BEL,0xE0633472L,0L}},{{(-6L),3L,8L,(-1L),0x0FDA63E1L},{0xD9125BECL,1L,(-1L),0x896B3C83L,0L},{1L,(-1L),0x04586DB8L,0x896B3C83L,0xD9125BECL},{0L,0x72B4D3A6L,0xD3BC7639L,(-1L),0x41928B54L},{0x41928B54L,1L,0x04586DB8L,0xE0633472L,0x34DB6457L},{0L,1L,(-1L),0x458B9948L,1L}},{{0xD0DA963FL,0x72B4D3A6L,8L,0x6CBFBCC8L,(-3L)},{0L,(-1L),0x05BF03BEL,0x7CECC562L,(-3L)},{0x41928B54L,1L,(-1L),3L,1L},{0L,3L,0L,0x7CECC562L,0x34DB6457L},{1L,0x896B3C83L,0L,0x6CBFBCC8L,0x41928B54L},{0xD9125BECL,0x458B9948L,(-1L),0x458B9948L,0xD9125BECL}},{{(-6L),0x896B3C83L,0x05BF03BEL,0xE0633472L,0L},{(-6L),3L,8L,(-1L),0x0FDA63E1L},{0xD9125BECL,1L,(-1L),0x896B3C83L,0L},{1L,(-1L),0x04586DB8L,0x896B3C83L,0xD9125BECL},{0L,0x72B4D3A6L,0xD3BC7639L,(-1L),0x41928B54L},{0x41928B54L,1L,0x04586DB8L,0xE0633472L,0x34DB6457L}},{{0L,1L,(-1L),0x458B9948L,1L},{0xD0DA963FL,0x72B4D3A6L,8L,0x6CBFBCC8L,(-3L)},{0L,(-1L),0x05BF03BEL,0x7CECC562L,(-3L)},{0x41928B54L,1L,(-1L),3L,1L},{0L,3L,0L,0x7CECC562L,0x34DB6457L},{1L,0x896B3C83L,0L,0x6CBFBCC8L,0x41928B54L}}};
static int64_t g_82[6] = {1L,1L,1L,1L,1L,1L};
static int8_t g_85 = 0xCCL;
static uint32_t g_86 = 4294967289UL;
static union U2 g_107 = {-4L};
static const union U2 *g_117[7][6] = {{(void*)0,(void*)0,(void*)0,&g_107,&g_107,&g_107},{(void*)0,(void*)0,(void*)0,&g_107,&g_107,&g_107},{(void*)0,(void*)0,(void*)0,&g_107,&g_107,&g_107},{(void*)0,(void*)0,(void*)0,&g_107,&g_107,&g_107},{(void*)0,(void*)0,(void*)0,&g_107,&g_107,&g_107},{(void*)0,(void*)0,(void*)0,&g_107,&g_107,&g_107},{(void*)0,(void*)0,(void*)0,&g_107,&g_107,&g_107}};
static const union U2 **g_116[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U1 g_131 = {251UL};
static const int16_t g_147 = 0L;
static int8_t *g_157 = &g_85;
static int8_t **g_156 = &g_157;
static int32_t *g_198 = &g_47;
static uint64_t g_212 = 0x836BC6E75ED7DA01LL;
static int16_t *g_225 = (void*)0;
static int16_t **g_224 = &g_225;
static uint32_t **g_238[3] = {(void*)0,(void*)0,(void*)0};
static uint32_t ***g_237 = &g_238[2];
static uint32_t ****g_236 = &g_237;
static uint64_t g_266 = 0x836AC659F6053C3BLL;
static int32_t g_278[4][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
static uint8_t g_289 = 0x92L;
static uint8_t g_291[5] = {253UL,253UL,253UL,253UL,253UL};
static union U1 g_317 = {0x34L};
static uint16_t g_356 = 0UL;
static uint16_t g_358 = 0xD1EFL;
static union U2 g_386 = {0x12063382L};
static const int64_t g_442 = 0x1FC6B62847544DC1LL;
static uint16_t g_452 = 0x7E63L;
static const int32_t g_465 = 9L;
static union U2 g_478 = {-1L};
static union U2 *g_477 = &g_478;
static union U1 *g_483[6][7][3] = {{{&g_131,&g_131,&g_317},{&g_317,&g_131,&g_317},{&g_131,&g_317,&g_131},{&g_131,&g_131,&g_317},{&g_317,&g_131,&g_131},{&g_131,&g_317,&g_317},{&g_317,&g_131,&g_317}},{{&g_131,&g_131,&g_131},{(void*)0,&g_317,&g_131},{&g_317,&g_131,(void*)0},{(void*)0,&g_131,&g_317},{&g_131,&g_131,&g_317},{&g_317,&g_131,&g_131},{&g_131,&g_317,&g_317}},{{&g_317,&g_131,&g_317},{&g_131,&g_131,&g_131},{&g_317,&g_317,(void*)0},{&g_131,&g_131,&g_317},{(void*)0,&g_131,&g_317},{&g_131,&g_317,&g_131},{&g_317,&g_131,&g_131}},{{&g_131,&g_131,&g_317},{&g_317,&g_317,&g_131},{&g_131,&g_131,&g_317},{&g_317,&g_131,&g_131},{&g_131,&g_317,&g_131},{(void*)0,&g_317,&g_317},{&g_317,&g_317,&g_131}},{{(void*)0,&g_317,&g_317},{&g_131,&g_131,&g_131},{&g_317,&g_131,&g_131},{&g_131,&g_131,&g_317},{&g_317,&g_317,&g_317},{&g_131,&g_131,(void*)0},{&g_131,&g_131,&g_131}},{{&g_317,&g_131,&g_317},{&g_131,&g_317,&g_317},{(void*)0,&g_317,&g_131},{&g_317,&g_317,&g_317},{&g_131,&g_317,&g_317},{&g_131,&g_131,(void*)0},{&g_317,&g_131,&g_131}}};
static union U1 **g_482 = &g_483[1][1][2];
static uint16_t g_524 = 65535UL;
static int32_t ***g_581 = (void*)0;
static int32_t *g_633 = &g_278[0][0];
static uint64_t *g_671[2][6][1] = {{{(void*)0},{&g_35},{&g_40},{&g_35},{(void*)0},{&g_212}},{{(void*)0},{&g_35},{&g_40},{&g_35},{(void*)0},{&g_212}}};
static int8_t g_707 = 0x71L;
static union U2 g_851 = {-1L};
static uint64_t g_873 = 18446744073709551607UL;
static const uint16_t g_913 = 0x0F7BL;
static const uint16_t *g_912[4][6][5] = {{{&g_913,(void*)0,&g_913,&g_913,&g_913},{(void*)0,&g_913,(void*)0,(void*)0,(void*)0},{&g_913,(void*)0,&g_913,&g_913,&g_913},{(void*)0,&g_913,(void*)0,(void*)0,(void*)0},{&g_913,(void*)0,&g_913,&g_913,&g_913},{(void*)0,&g_913,(void*)0,(void*)0,(void*)0}},{{&g_913,(void*)0,&g_913,&g_913,&g_913},{(void*)0,&g_913,(void*)0,(void*)0,(void*)0},{&g_913,&g_913,&g_913,&g_913,&g_913},{&g_913,&g_913,&g_913,(void*)0,(void*)0},{&g_913,&g_913,&g_913,&g_913,&g_913},{&g_913,&g_913,&g_913,(void*)0,(void*)0}},{{&g_913,&g_913,&g_913,&g_913,&g_913},{&g_913,&g_913,&g_913,(void*)0,(void*)0},{&g_913,&g_913,&g_913,&g_913,&g_913},{&g_913,&g_913,&g_913,(void*)0,(void*)0},{&g_913,&g_913,&g_913,&g_913,&g_913},{&g_913,&g_913,&g_913,(void*)0,(void*)0}},{{&g_913,&g_913,&g_913,&g_913,&g_913},{&g_913,&g_913,&g_913,(void*)0,(void*)0},{&g_913,&g_913,&g_913,&g_913,&g_913},{&g_913,&g_913,&g_913,(void*)0,(void*)0},{&g_913,&g_913,&g_913,&g_913,&g_913},{&g_913,&g_913,&g_913,(void*)0,(void*)0}}};
static const uint16_t **g_911[7][3][4] = {{{&g_912[0][0][0],&g_912[3][5][3],&g_912[0][0][0],&g_912[0][4][3]},{&g_912[1][3][3],&g_912[0][0][0],&g_912[3][4][0],&g_912[0][4][3]},{&g_912[3][5][2],&g_912[3][5][3],&g_912[0][0][0],&g_912[0][5][4]}},{{(void*)0,&g_912[3][0][4],&g_912[3][5][2],&g_912[0][0][0]},{(void*)0,(void*)0,&g_912[0][0][0],&g_912[0][0][0]},{&g_912[2][3][4],&g_912[3][4][0],&g_912[0][0][0],&g_912[3][4][0]}},{{&g_912[0][0][0],&g_912[0][4][3],&g_912[0][0][0],&g_912[0][0][0]},{&g_912[0][0][0],(void*)0,&g_912[0][0][0],(void*)0},{&g_912[0][0][0],&g_912[2][3][4],&g_912[0][4][3],&g_912[0][0][0]}},{{&g_912[0][0][0],&g_912[1][3][3],&g_912[0][0][0],&g_912[0][0][0]},{&g_912[0][0][0],&g_912[0][0][0],&g_912[0][0][0],(void*)0},{&g_912[0][0][0],&g_912[0][3][3],&g_912[0][0][0],&g_912[0][0][0]}},{{&g_912[2][3][4],&g_912[0][0][0],&g_912[0][0][0],&g_912[0][0][0]},{(void*)0,(void*)0,&g_912[3][5][2],(void*)0},{(void*)0,&g_912[0][0][0],&g_912[0][0][0],&g_912[3][0][4]}},{{&g_912[3][5][2],&g_912[0][0][0],&g_912[3][4][0],&g_912[0][0][0]},{&g_912[1][3][3],&g_912[0][0][0],&g_912[0][0][0],&g_912[3][0][4]},{&g_912[0][0][0],&g_912[0][0][0],&g_912[0][0][0],(void*)0}},{{(void*)0,(void*)0,(void*)0,&g_912[0][0][0]},{&g_912[0][0][0],&g_912[0][0][0],&g_912[3][5][3],&g_912[0][0][0]},{&g_912[0][0][0],&g_912[0][3][3],&g_912[0][0][0],(void*)0}}};
static const int16_t g_918 = (-1L);
static struct S0 *g_991 = &g_60;
static const struct S0 g_1021 = {155,7074};
static uint16_t *g_1054 = &g_452;
static uint16_t **g_1053[4] = {&g_1054,&g_1054,&g_1054,&g_1054};
static uint8_t **g_1074 = (void*)0;
static const int8_t *g_1078[4][1][1] = {{{&g_707}},{{&g_707}},{{&g_707}},{{&g_707}}};
static const int8_t **g_1077 = &g_1078[1][0][0];
static int32_t * const **g_1146 = (void*)0;
static union U2 *g_1226 = (void*)0;
static int64_t g_1250 = (-1L);
static union U2 g_1284 = {0xC98A449BL};
static union U1 ***g_1318[3] = {&g_482,&g_482,&g_482};
static int32_t ****g_1333 = &g_581;
static uint64_t **g_1336 = &g_671[0][0][0];
static uint64_t ***g_1335 = &g_1336;
static const uint32_t **g_1359 = (void*)0;
static const uint32_t ***g_1358 = &g_1359;
static const uint32_t ****g_1357 = &g_1358;
static const uint32_t *****g_1356 = &g_1357;
static int16_t g_1485 = (-7L);
static int64_t *g_1600[4][3][5] = {{{&g_82[4],&g_1250,&g_82[4],&g_1250,&g_82[4]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_82[4],&g_1250,&g_82[4],&g_1250,&g_82[4]}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_82[4],&g_1250,&g_82[4],&g_1250,&g_82[4]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_82[4],&g_1250,&g_82[4],&g_1250,&g_82[4]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_82[4],&g_1250,&g_82[4],&g_1250,&g_82[4]}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_82[4],&g_1250,&g_82[4],&g_1250,&g_82[4]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static int64_t **g_1599 = &g_1600[1][2][3];
static union U1 ****g_1667 = (void*)0;
static uint32_t g_1741 = 0x6B4F8F51L;
static uint64_t g_1786 = 1UL;
static const struct S0 *g_1810 = &g_60;
static union U2 g_1814 = {1L};
static uint32_t g_1924 = 0x91B1DE68L;
static uint32_t * const *g_1928 = (void*)0;
static int8_t g_1997 = 2L;
static struct S0 g_2022 = {-658,9001};
static struct S0 * const g_2021 = &g_2022;
static struct S0 * const *g_2020 = &g_2021;
static uint32_t g_2070 = 18446744073709551607UL;
static int8_t g_2077 = 0xDEL;
static union U2 ****g_2093 = (void*)0;



static int32_t  func_1(void);
static union U1  func_2(const int8_t * p_3, int8_t * p_4, uint32_t  p_5);
static const int8_t * func_6(int8_t * p_7, int32_t  p_8, union U2 * p_9);
static int32_t  func_14(union U1  p_15, const int8_t  p_16, int8_t ** p_17);
static union U1  func_19(int8_t * const  p_20);
static int8_t * func_21(union U2  p_22, uint16_t  p_23, union U2  p_24);
static union U2  func_25(const int8_t ** p_26, uint64_t  p_27);
static uint32_t  func_44(uint64_t * p_45);




static int32_t  func_1(void)
{ 
    int8_t *l_10 = &g_11;
    int8_t **l_12[2][2][3] = {{{&l_10,(void*)0,&l_10},{&l_10,(void*)0,&l_10}},{{&l_10,(void*)0,&l_10},{&l_10,(void*)0,&l_10}}};
    const int8_t *l_29 = &g_11;
    const int8_t **l_28 = &l_29;
    int32_t l_32 = 1L;
    uint16_t l_33[7] = {0x1152L,0x1152L,0x1152L,0x1152L,0x1152L,0x1152L,0x1152L};
    uint64_t *l_34 = &g_35;
    union U2 l_70 = {0x1B5B3A04L};
    union U2 *l_1813 = &g_1814;
    uint32_t l_1846 = 0UL;
    int32_t l_1847 = 0x0B24506BL;
    uint32_t *** const *l_1850 = &g_237;
    int32_t ** const ***l_1856 = (void*)0;
    const uint64_t l_1950 = 1UL;
    struct S0 l_1962[7] = {{194,23658},{194,23658},{194,23658},{194,23658},{194,23658},{194,23658},{194,23658}};
    uint16_t ***l_1992 = &g_1053[0];
    int8_t l_2039 = 0x40L;
    int32_t l_2040[3][6] = {{0x9002E126L,1L,(-10L),0x9002E126L,(-10L),1L},{0x299BE910L,1L,(-4L),0x299BE910L,(-10L),(-10L)},{1L,1L,1L,1L,(-10L),(-4L)}};
    uint16_t l_2044[6][3] = {{65533UL,65532UL,65532UL},{0xE3E3L,65532UL,0x81E4L},{0xE2FCL,65533UL,65530UL},{0xE3E3L,0xE3E3L,65530UL},{65533UL,0xE2FCL,0x81E4L},{65532UL,0xE3E3L,65532UL}};
    uint8_t l_2058 = 0xD8L;
    int32_t l_2069 = 0x43FA2E3CL;
    int32_t l_2104 = 1L;
    int i, j, k;
    return l_33[3];
}



static union U1  func_2(const int8_t * p_3, int8_t * p_4, uint32_t  p_5)
{ 
    const union U2 ****l_1805 = (void*)0;
    const union U2 ***l_1806 = (void*)0;
    int32_t *l_1807 = &g_77;
    const struct S0 *l_1808[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
    const struct S0 **l_1809[4];
    int32_t **l_1811 = &g_633;
    union U1 l_1812 = {0x63L};
    int i, j;
    for (i = 0; i < 4; i++)
        l_1809[i] = (void*)0;
    l_1806 = &g_116[3];
    l_1807 = l_1807;
    g_1810 = l_1808[0][1];
    (*l_1811) = l_1807;
    return l_1812;
}



static const int8_t * func_6(int8_t * p_7, int32_t  p_8, union U2 * p_9)
{ 
    int32_t **l_1145 = &g_198;
    int32_t ***l_1144 = &l_1145;
    int32_t * const ***l_1147 = &g_1146;
    uint16_t ***l_1150 = &g_1053[0];
    int8_t l_1151 = 0xB9L;
    uint32_t l_1152 = 0x8F9A09E9L;
    int32_t l_1157 = 0xF25B552BL;
    int32_t l_1158 = 0L;
    int32_t l_1160 = 1L;
    int64_t *l_1212 = (void*)0;
    union U1 **l_1216 = &g_483[1][1][2];
    union U2 *l_1227 = (void*)0;
    uint16_t l_1288[1];
    uint32_t ****l_1293 = (void*)0;
    int32_t l_1306 = 0xA97E2959L;
    int8_t l_1313 = 0xB4L;
    uint64_t ***l_1337 = (void*)0;
    const int8_t **l_1353 = &g_1078[1][0][0];
    int32_t l_1463 = 0x419914C3L;
    int32_t l_1464 = (-1L);
    int32_t l_1468 = 0L;
    int32_t l_1469 = 0xFA414B60L;
    uint32_t *l_1519 = &g_86;
    int64_t l_1558 = 0x1B14945B9DC2DDCDLL;
    int64_t l_1560[5][4] = {{1L,2L,1L,0xB5AE729CB706BCBCLL},{8L,2L,6L,1L},{2L,0xDDEFF7D1BE6E2F13LL,0xDDEFF7D1BE6E2F13LL,2L},{1L,1L,0xDDEFF7D1BE6E2F13LL,0xB5AE729CB706BCBCLL},{2L,8L,6L,8L}};
    int64_t l_1561 = 0xAB267EE0F5069915LL;
    uint32_t l_1605 = 0UL;
    struct S0 l_1635[5][7][2] = {{{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}}},{{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}}},{{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}}},{{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}}},{{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}},{{-152,3497},{-152,3497}}}};
    const uint8_t *l_1654 = &g_291[3];
    const uint8_t **l_1653 = &l_1654;
    const uint8_t ***l_1652 = &l_1653;
    const uint64_t * const l_1735 = &g_40;
    const uint64_t * const *l_1734 = &l_1735;
    const uint64_t * const **l_1733[4] = {&l_1734,&l_1734,&l_1734,&l_1734};
    union U1 l_1738 = {0x86L};
    uint64_t l_1781 = 0x9AA2DE9D614521E8LL;
    int32_t l_1798 = 0L;
    uint8_t l_1800 = 0x17L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1288[i] = 65535UL;
    if ((safe_div_func_uint64_t_u_u((p_8 <= ((safe_mod_func_int32_t_s_s((l_1144 == ((*l_1147) = g_1146)), p_8)) || ((safe_sub_func_uint32_t_u_u((l_1152 = (((*g_1054) = (&g_911[5][0][0] != l_1150)) <= (1UL < l_1151))), 5L)) & 18446744073709551610UL))), 0x9FE9C88CB4DD0891LL)))
    { 
        int32_t l_1155 = 0x6C73A231L;
        int32_t l_1159[1];
        int32_t ***l_1164 = &l_1145;
        uint16_t *l_1176 = &g_356;
        struct S0 l_1178 = {-331,8848};
        const int64_t *l_1207 = &g_82[4];
        int64_t **l_1213 = &l_1212;
        union U1 ***l_1217 = &l_1216;
        uint8_t *l_1232 = &g_291[3];
        uint8_t **l_1231 = &l_1232;
        uint32_t l_1279 = 7UL;
        int32_t l_1344 = (-10L);
        uint32_t l_1388 = 1UL;
        uint8_t l_1398 = 0UL;
        uint32_t ****l_1577 = &g_237;
        const union U1 l_1578 = {8UL};
        uint64_t l_1659[1][4] = {{0x9E7B6DB1B9091F5BLL,0x9E7B6DB1B9091F5BLL,0x9E7B6DB1B9091F5BLL,0x9E7B6DB1B9091F5BLL}};
        uint64_t **l_1661 = &g_671[1][0][0];
        union U2 *l_1688 = &g_18[1][1];
        int64_t ***l_1690 = &l_1213;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1159[i] = 0x0C112FFDL;
        if ((safe_lshift_func_uint16_t_u_u(3UL, 12)))
        { 
            int32_t *l_1156[7];
            uint64_t l_1161 = 0x8611B793DDF4B593LL;
            int i;
            for (i = 0; i < 7; i++)
                l_1156[i] = &g_278[0][0];
            for (g_452 = 0; (g_452 <= 2); g_452 += 1)
            { 
                return (*g_156);
            }
            l_1161--;
        }
        else
        { 
            int32_t ****l_1165 = &l_1164;
            int16_t *l_1166 = &g_63;
            const int8_t *l_1177 = &g_11;
            int32_t l_1183 = 0x2E674078L;
            int32_t l_1184 = 0x1B891888L;
            uint64_t l_1185 = 0xB787BBF1F8CD4817LL;
            (*g_633) |= (((*l_1166) = (l_1159[0] >= (((*l_1165) = (g_581 = l_1164)) == (void*)0))) <= (((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((safe_unary_minus_func_int16_t_s(p_8)) && (g_913 , ((safe_mod_func_int8_t_s_s(((0xF288L | p_8) <= 0UL), (-1L))) && l_1159[0]))) | 18446744073709551615UL), 0x07L)), 0x31L)) , l_1176) != (**l_1150)));
            for (l_1158 = 0; (l_1158 <= 3); l_1158 += 1)
            { 
                int64_t l_1181 = 0x1C479BB1F59C0461LL;
                int32_t l_1182[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1182[i] = 0L;
                for (g_40 = 0; (g_40 <= 2); g_40 += 1)
                { 
                    (**l_1164) = (void*)0;
                    (***l_1165) = (**g_581);
                    return l_1177;
                }
                for (g_63 = 0; (g_63 <= 3); g_63 += 1)
                { 
                    return p_7;
                }
                for (g_63 = 5; (g_63 >= 0); g_63 -= 1)
                { 
                    struct S0 l_1179[3] = {{-110,27536},{-110,27536},{-110,27536}};
                    int32_t *l_1180[7][4][2] = {{{&l_1160,&l_1160},{&l_1158,&l_1160},{&l_1158,&l_1158},{&l_1158,&l_1160}},{{&l_1158,&l_1160},{&l_1160,&l_1160},{&l_1158,&l_1160},{&l_1158,&l_1158}},{{&l_1158,&l_1160},{&l_1158,&l_1160},{&l_1160,&l_1160},{&l_1158,&l_1160}},{{&l_1158,&l_1158},{&l_1158,&l_1160},{&l_1158,&l_1160},{&l_1160,&l_1160}},{{&l_1158,&l_1160},{&l_1158,&l_1158},{&l_1158,&l_1160},{&l_1158,&l_1160}},{{&l_1160,&l_1160},{&l_1158,&l_1160},{&l_1158,&l_1158},{&l_1158,&l_1160}},{{&l_1158,&l_1160},{&l_1160,&l_1160},{&l_1158,&l_1160},{&l_1158,&l_1158}}};
                    int i, j, k;
                    l_1179[2] = l_1178;
                    l_1185--;
                }
                for (g_212 = 0; (g_212 <= 3); g_212 += 1)
                { 
                    uint32_t *l_1199 = &g_86;
                    const int32_t l_1202 = (-1L);
                    const int32_t *l_1204 = &l_1182[0];
                    const int32_t **l_1203 = &l_1204;
                    (*g_633) = (safe_mul_func_uint16_t_u_u(p_8, ((~(g_386.f0 , (safe_sub_func_int64_t_s_s((-7L), (safe_sub_func_int8_t_s_s((*p_7), (safe_lshift_func_int16_t_s_u((((((*l_1199)++) & l_1182[1]) != ((-1L) > l_1182[1])) > 0UL), l_1181)))))))) || l_1202)));
                    (*l_1203) = &g_465;
                    return p_7;
                }
            }
        }
    }
    else
    { 
        int64_t l_1692[4];
        union U1 l_1699[7] = {{7UL},{7UL},{7UL},{7UL},{7UL},{7UL},{7UL}};
        int16_t *l_1704 = &g_1485;
        int32_t **l_1705 = &g_633;
        uint32_t *l_1709 = (void*)0;
        uint32_t **l_1708 = &l_1709;
        uint32_t *l_1711 = &g_386.f1;
        uint32_t **l_1710[5] = {&l_1711,&l_1711,&l_1711,&l_1711,&l_1711};
        uint32_t *l_1712 = &g_51[0];
        union U1 ** const **l_1717 = (void*)0;
        uint8_t *l_1718 = (void*)0;
        uint32_t l_1719 = 0xBAFDC2E4L;
        int32_t *l_1720 = (void*)0;
        int32_t *l_1721 = &g_278[0][0];
        const int64_t ***l_1746 = (void*)0;
        struct S0 l_1784[7][2] = {{{-388,26789},{-388,26789}},{{-262,30169},{-147,30791}},{{310,28527},{-147,30791}},{{-262,30169},{-388,26789}},{{-388,26789},{-262,30169}},{{-147,30791},{310,28527}},{{-147,30791},{-262,30169}}};
        int32_t *l_1799[2];
        int i, j;
        for (i = 0; i < 4; i++)
            l_1692[i] = 0xE6686A2F90ABD206LL;
        for (i = 0; i < 2; i++)
            l_1799[i] = (void*)0;
        (*l_1705) = ((**l_1144) = (((~l_1692[2]) < ((((p_8 < p_8) != (safe_lshift_func_uint16_t_u_u(p_8, 10))) && (((safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((p_8 == (l_1699[5] , (((*l_1704) = (safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((l_1699[5].f0 && p_8), l_1699[5].f0)), (-1L)))) & l_1699[5].f0))), 6L)), l_1692[3])) <= p_8) , p_8)) || 1UL)) , (void*)0));
lbl_1797:
        (*l_1721) ^= (p_8 != ((safe_mod_func_uint64_t_u_u((((*p_7) & ((l_1712 = ((*l_1708) = &g_51[0])) == l_1519)) <= ((safe_mod_func_int8_t_s_s((((g_291[3] = (safe_mod_func_uint8_t_u_u(((void*)0 != l_1717), (g_289 = (((void*)0 != &l_1147) & (*p_7)))))) | l_1692[2]) ^ (-8L)), 0x94L)) != p_8)), p_8)) && l_1719));
        for (l_1160 = 0; (l_1160 > (-24)); l_1160 = safe_sub_func_uint8_t_u_u(l_1160, 1))
        { 
            struct S0 l_1724 = {159,13511};
            const uint16_t **l_1725 = &g_912[3][1][1];
            int32_t *l_1770 = &g_47;
            if (((p_8 & ((l_1724 , (-1L)) | ((func_25(&g_1078[1][0][0], p_8) , ((*l_1150) = (void*)0)) != l_1725))) , l_1724.f0))
            { 
                int8_t l_1728[4][4][4] = {{{0xB2L,0x23L,1L,0x48L},{1L,0L,(-1L),0x5DL},{0x6FL,0x8EL,0xBEL,0x5DL},{0x3BL,0L,0x29L,0x48L}},{{0xB5L,0x23L,1L,0x7CL},{0x84L,0xA7L,0x48L,0xB5L},{0x3BL,0x7CL,0x3BL,0x29L},{0L,(-3L),(-1L),0x84L}},{{(-3L),0xA7L,0x8EL,(-3L)},{0xB2L,0xB5L,0x8EL,0x48L},{(-3L),0x5DL,(-1L),0L},{0L,0x8EL,0x3BL,0x6FL}},{{0x3BL,0x6FL,0x48L,0x48L},{0x84L,0x84L,1L,1L},{0xB5L,0xA7L,0x29L,0x23L},{0x3BL,1L,0xBEL,0x29L}}};
                union U1 l_1731 = {0xBCL};
                const uint64_t ***l_1732[4];
                int32_t * const l_1739[2][6][3] = {{{&g_77,&g_77,(void*)0},{&l_1160,(void*)0,&g_77},{&g_77,&g_77,(void*)0},{&l_1160,(void*)0,&g_77},{&g_77,&g_77,(void*)0},{&l_1160,(void*)0,&g_77}},{{&g_77,&g_77,(void*)0},{&l_1160,(void*)0,&g_77},{&l_1157,&l_1157,&g_77},{&l_1469,(void*)0,&l_1160},{&l_1157,&l_1157,&g_77},{&l_1469,(void*)0,&l_1160}}};
                int32_t **l_1740 = &g_633;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1732[i] = (void*)0;
                (*l_1721) = (p_8 <= (safe_mod_func_uint64_t_u_u(((l_1728[2][0][0] && (safe_sub_func_int32_t_s_s((l_1731 , ((l_1732[3] == l_1733[1]) , (((safe_sub_func_int16_t_s_s(((l_1724.f1 && (l_1738 , 4UL)) , p_8), p_8)) , (*g_991)) , 0xB1400F02L))), p_8))) , l_1728[0][3][1]), 0xFCB3F83DA317A7FELL)));
                (*l_1740) = l_1739[0][1][1];
                if (g_1741)
                    continue;
            }
            else
            { 
                union U1 * const *l_1762 = &g_483[1][3][1];
                int32_t l_1764 = 0xEC0585EFL;
                for (l_1152 = 0; (l_1152 <= 0); l_1152 += 1)
                { 
                    uint8_t *l_1749 = (void*)0;
                    uint8_t *l_1750 = &g_291[4];
                    int32_t l_1763 = 1L;
                    int32_t l_1765 = 0x4BB41DEFL;
                    int8_t l_1766 = 0x71L;
                    p_8 = (safe_rshift_func_uint8_t_u_s(((&g_1335 != (void*)0) && (((((&g_1599 != l_1746) <= (safe_rshift_func_uint8_t_u_u(((*l_1750) = 0x3BL), ((((safe_mul_func_int16_t_s_s(0x6DFAL, ((safe_add_func_int8_t_s_s(((safe_div_func_int32_t_s_s((!(((safe_sub_func_uint32_t_u_u((l_1763 = ((((safe_div_func_int64_t_s_s((((void*)0 == l_1762) ^ 7L), p_8)) >= 255UL) , (void*)0) != (void*)0)), l_1764)) >= p_8) != l_1765)), l_1766)) && l_1764), p_8)) > p_8))) < p_8) == p_8) ^ (*p_7))))) != p_8) | 0UL) , l_1765)), (**g_1077)));
                }
                (*l_1721) = l_1764;
                for (p_8 = 0; (p_8 >= (-25)); p_8 = safe_sub_func_int32_t_s_s(p_8, 5))
                { 
                    int32_t *l_1769 = &g_47;
                    (*l_1705) = l_1769;
                    (**l_1144) = (l_1770 = &p_8);
                    if (p_8)
                        break;
                }
            }
            if ((safe_div_func_uint32_t_u_u((0x8149A0132E798030LL || ((((*l_1519) &= (safe_lshift_func_int16_t_s_s((p_8 ^ (safe_mul_func_int16_t_s_s(g_63, ((*l_1704) &= g_63)))), (((safe_mod_func_uint32_t_u_u((*l_1770), 0xC7D32E72L)) ^ (((safe_mod_func_int8_t_s_s(((*l_1770) , 0xB5L), (*p_7))) || (-1L)) | (-1L))) == l_1781)))) < 1L) != p_8)), p_8)))
            { 
                (*l_1721) &= 0x6296CD1AL;
            }
            else
            { 
                const uint32_t *****l_1795 = &g_1357;
                for (p_8 = 1; (p_8 <= (-12)); p_8 = safe_sub_func_uint8_t_u_u(p_8, 1))
                { 
                    int32_t *l_1785[7] = {&l_1468,&l_1468,&l_1468,&l_1468,&l_1468,&l_1468,&l_1468};
                    int i;
                    (*g_991) = l_1784[0][0];
                    (*l_1705) = l_1785[5];
                    g_1786 |= g_358;
                }
                (*l_1721) &= p_8;
                for (l_1561 = 2; (l_1561 <= (-22)); --l_1561)
                { 
                    uint8_t ***l_1790 = (void*)0;
                    uint8_t ****l_1789 = &l_1790;
                    (*l_1721) |= p_8;
                    (*l_1789) = &g_1074;
                    return (*g_1077);
                }
                for (g_1485 = 1; (g_1485 > 18); ++g_1485)
                { 
                    return p_7;
                }
                for (l_1469 = 0; (l_1469 <= 2); l_1469++)
                { 
                    int64_t l_1796 = 0xA12507571D54642DLL;
                    l_1795 = &g_1357;
                    if (l_1796)
                        break;
                    if (g_707)
                        goto lbl_1797;
                }
            }
        }
        l_1800++;
        return p_7;
    }
    for (l_1605 = (-27); (l_1605 < 56); l_1605++)
    { 
        if ((*g_633))
            break;
        (*l_1145) = &p_8;
        if (p_8)
            break;
    }
    return (*l_1353);
}



static int32_t  func_14(union U1  p_15, const int8_t  p_16, int8_t ** p_17)
{ 
    uint64_t *l_493 = (void*)0;
    uint64_t *l_494[1];
    uint8_t * const l_500 = (void*)0;
    union U2 **l_503 = (void*)0;
    union U2 **l_504 = &g_477;
    union U2 *l_505 = (void*)0;
    int32_t l_506 = 0x1775C69EL;
    int8_t l_516[6] = {0xBAL,0xA4L,0xA4L,0xBAL,0xA4L,0xA4L};
    int32_t l_517 = 0x8AB59363L;
    int32_t l_518 = 9L;
    int32_t l_519 = (-1L);
    int32_t l_520 = 0x742C8A95L;
    int32_t l_521 = 0x34CB3948L;
    int32_t l_522[7] = {0x228902F3L,0x228902F3L,0x228902F3L,0x228902F3L,0x228902F3L,0x228902F3L,0x228902F3L};
    int8_t l_523 = 0xC7L;
    int32_t **l_583 = &g_198;
    int32_t ***l_582 = &l_583;
    uint32_t l_588[7];
    int32_t *l_632 = (void*)0;
    int32_t l_642 = 0x969561BAL;
    int32_t l_643[7][1] = {{1L},{0x08C4700DL},{0x08C4700DL},{1L},{0x08C4700DL},{0x08C4700DL},{1L}};
    struct S0 *l_658[3][2] = {{&g_60,&g_60},{&g_60,&g_60},{&g_60,&g_60}};
    uint16_t *l_715 = (void*)0;
    int16_t l_825[2];
    uint32_t l_884 = 0UL;
    union U2 l_890 = {1L};
    int8_t l_934[2];
    uint32_t l_936 = 0UL;
    int8_t l_943[7] = {0xE2L,0xE2L,4L,0xE2L,0xE2L,4L,0xE2L};
    uint8_t l_1010[4][4] = {{255UL,0x59L,0x59L,255UL},{0x59L,255UL,0x59L,0x59L},{255UL,255UL,0x1AL,255UL},{255UL,0x59L,0x59L,255UL}};
    uint16_t l_1037 = 0xA5A8L;
    uint16_t l_1046[7][7] = {{8UL,0xA0A5L,0xA0A5L,8UL,65527UL,65535UL,65535UL},{65528UL,8UL,0x4D17L,8UL,65528UL,8UL,0x4D17L},{65527UL,8UL,0xA0A5L,0xA0A5L,8UL,65527UL,65535UL},{0x47C2L,6UL,0x47C2L,8UL,0x47C2L,6UL,0x47C2L},{65527UL,0xA0A5L,65535UL,8UL,8UL,65535UL,0xA0A5L},{65528UL,6UL,0x4D17L,6UL,65528UL,6UL,0x4D17L},{8UL,8UL,65535UL,0xA0A5L,65527UL,65527UL,0xA0A5L}};
    int8_t **l_1047 = &g_157;
    uint32_t l_1087 = 0x4550B917L;
    union U1 *l_1123 = &g_131;
    int32_t *l_1124 = &g_278[0][0];
    int32_t *l_1125 = &l_522[2];
    int32_t *l_1126 = &g_47;
    int32_t *l_1127 = &l_506;
    int32_t *l_1128 = &l_506;
    int32_t *l_1129 = &l_520;
    int32_t *l_1130 = &l_518;
    int32_t *l_1131[7] = {&l_517,&l_517,&g_278[0][0],&l_517,&l_517,&g_278[0][0],&l_517};
    uint16_t l_1132 = 1UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_494[i] = &g_40;
    for (i = 0; i < 7; i++)
        l_588[i] = 0x196DC1F8L;
    for (i = 0; i < 2; i++)
        l_825[i] = 1L;
    for (i = 0; i < 2; i++)
        l_934[i] = 0xE3L;
    if (((((++g_40) , (!(l_506 = (safe_mul_func_uint8_t_u_u(((l_500 == (void*)0) | (safe_rshift_func_uint8_t_u_u((((*l_504) = &g_18[1][1]) != (p_15.f0 , l_505)), l_506))), (1L & (**g_156))))))) >= 0xF1L) || (-9L)))
    { 
        int32_t *l_507 = &g_278[0][0];
        int32_t *l_508 = (void*)0;
        int32_t *l_509 = (void*)0;
        int32_t *l_510 = &l_506;
        int32_t *l_511 = &g_278[2][0];
        int32_t *l_512 = (void*)0;
        int32_t *l_513 = &g_278[0][0];
        int32_t l_514[1];
        int32_t *l_515[4] = {&l_506,&l_506,&l_506,&l_506};
        int i;
        for (i = 0; i < 1; i++)
            l_514[i] = 0xE16AD974L;
        g_524--;
        for (g_77 = 1; (g_77 <= 5); g_77 += 1)
        { 
            uint8_t l_527[7][5] = {{0xB3L,253UL,253UL,0xB3L,0xB3L},{0x5CL,3UL,0x5CL,3UL,0x5CL},{0xB3L,0xB3L,253UL,253UL,0xB3L},{255UL,3UL,255UL,3UL,255UL},{0xB3L,253UL,253UL,0xB3L,0xB3L},{0x5CL,3UL,0x5CL,3UL,0x5CL},{0xB3L,0xB3L,253UL,253UL,0xB3L}};
            int i, j;
            l_527[0][4]++;
        }
    }
    else
    { 
        uint16_t l_547[2];
        int32_t l_555[4][6] = {{2L,(-8L),0x3C285B16L,2L,2L,2L},{(-1L),(-8L),(-8L),(-1L),2L,0x3C285B16L},{0x08ABF4DCL,(-8L),2L,0x08ABF4DCL,2L,(-8L)},{2L,(-8L),0x3C285B16L,2L,2L,2L}};
        uint64_t l_570[5][3] = {{18446744073709551614UL,0x94D13933338D3437LL,18446744073709551614UL},{0x8203AE8E8D3D7B8DLL,0x8203AE8E8D3D7B8DLL,0x8203AE8E8D3D7B8DLL},{18446744073709551614UL,0x94D13933338D3437LL,18446744073709551614UL},{0x8203AE8E8D3D7B8DLL,0x8203AE8E8D3D7B8DLL,0x8203AE8E8D3D7B8DLL},{18446744073709551614UL,0x94D13933338D3437LL,18446744073709551614UL}};
        uint8_t *l_591 = &g_289;
        uint32_t ****l_592 = (void*)0;
        int i, j;
        for (i = 0; i < 2; i++)
            l_547[i] = 65528UL;
        for (l_506 = 0; (l_506 < 22); l_506++)
        { 
            union U1 *l_543[5] = {&g_317,&g_317,&g_317,&g_317,&g_317};
            int32_t l_544 = 6L;
            int32_t l_545 = (-5L);
            int32_t l_556 = 0xA7AC7138L;
            int32_t l_561 = 8L;
            int32_t l_562 = 0L;
            int32_t l_563 = 0x982230E7L;
            int32_t l_566 = (-1L);
            int32_t l_568 = 0xD8835874L;
            int32_t l_569 = (-5L);
            uint16_t l_576[1][1];
            int32_t *l_584 = &l_566;
            int32_t *l_585 = &l_520;
            int32_t *l_586 = &l_522[5];
            int32_t *l_587[3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_576[i][j] = 0x7A60L;
            }
            for (i = 0; i < 3; i++)
                l_587[i] = &l_568;
            for (g_452 = 0; (g_452 <= 6); g_452 += 1)
            { 
                uint8_t *l_536 = (void*)0;
                int8_t *l_546 = &l_523;
                int32_t l_557 = 0x54D6EA84L;
                int32_t l_558 = 6L;
                int32_t l_559 = 0x6F28E588L;
                int32_t l_560 = 0xC098572FL;
                int32_t l_564 = 7L;
                int32_t l_565 = 0x6399E83FL;
                int32_t l_567[7] = {0x8184A59FL,0x8184A59FL,(-9L),0x8184A59FL,0x8184A59FL,(-9L),0x8184A59FL};
                int i;
                l_522[g_452] &= (*g_198);
                l_522[g_452] = 0xD0AD2903L;
                (*g_198) = ((((safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((((g_291[2]--) < ((*l_546) = (p_16 && (safe_rshift_func_int8_t_s_s(((**p_17) = (p_15.f0 <= (safe_add_func_int8_t_s_s(((l_545 = (l_544 = (l_543[1] == (*g_482)))) >= g_51[0]), ((((g_107.f2 || p_15.f0) || (-10L)) , p_16) , (**p_17)))))), l_518))))) || p_16), l_522[g_452])) , l_522[g_452]), 0x14C9L)) >= 0x145E632919FF312ELL) != l_547[1]) , p_15.f0);
                if ((p_15.f0 >= (l_521 != 0xF403AE9BL)))
                { 
                    int32_t l_550 = 0x2BC23DBDL;
                    int32_t *l_551 = &l_521;
                    int32_t *l_552 = (void*)0;
                    int32_t *l_553 = &l_522[6];
                    int32_t *l_554[7];
                    uint32_t *l_575 = &g_86;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_554[i] = &l_518;
                    l_570[1][0]++;
                    (*g_198) ^= ((*l_553) = (safe_mod_func_int64_t_s_s(((-1L) || l_516[0]), ((((*l_575) = (l_519 = (0L || 0x647DEB1E9862A53ALL))) || (-4L)) ^ l_576[0][0]))));
                }
                else
                { 
                    int32_t *l_580[3][3][2] = {{{&l_520,&l_520},{&l_520,&l_520},{&l_520,&l_520}},{{&l_520,&l_520},{&l_520,&l_520},{&l_520,&l_520}},{{&l_520,&l_520},{&l_520,&l_520},{&l_520,&l_520}}};
                    int i, j, k;
                    l_563 = (((safe_lshift_func_int16_t_s_s(l_547[1], (l_555[3][5] >= (((((((safe_unary_minus_func_uint8_t_u((l_521 != (((p_15.f0 == 65535UL) || (g_107.f2 ^= (*g_198))) , ((g_581 != l_582) > p_15.f0))))) <= g_147) , l_563) , 18446744073709551615UL) > p_15.f0) == (**p_17)) & p_15.f0)))) , (void*)0) != &l_580[1][1][0]);
                }
                if (p_16)
                    break;
            }
            l_588[0]--;
        }
        if (((l_591 == l_591) , ((g_60 , &g_237) == l_592)))
        { 
            uint64_t l_595[6];
            uint64_t *l_605 = &g_266;
            int32_t l_606 = 1L;
            int i;
            for (i = 0; i < 6; i++)
                l_595[i] = 0x7EE56372BD41F7F0LL;
            for (l_518 = (-18); (l_518 > (-27)); l_518--)
            { 
                if (l_595[1])
                    break;
            }
            if (((safe_rshift_func_uint16_t_u_s(((safe_div_func_uint8_t_u_u((!(p_15 , (safe_div_func_int32_t_s_s(0L, 0x80C4C9A8L)))), ((safe_add_func_int8_t_s_s(((l_605 = &g_40) != &l_570[3][1]), ((**g_156) = l_595[1]))) , (g_291[3] &= ((*l_591) = (((l_606 = (**p_17)) != (-10L)) != 5L)))))) == l_595[3]), l_547[0])) & 2L))
            { 
                (**l_582) = &l_555[0][1];
                (*g_198) = (-1L);
            }
            else
            { 
                int32_t *l_617 = &l_522[4];
                (***l_582) = (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((safe_mul_func_int8_t_s_s(0xBAL, g_278[0][0])))), (0xC7L <= (safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint64_t_u(((((safe_lshift_func_int8_t_s_s(((**g_156) = (&l_555[2][5] != l_617)), 3)) , (void*)0) == (void*)0) | 2L))) , 1UL), 0x0535L)))));
                for (g_11 = 0; (g_11 < (-28)); --g_11)
                { 
                    (**l_582) = &l_606;
                    if ((*g_198))
                        continue;
                }
                return p_16;
            }
        }
        else
        { 
            (*g_482) = &p_15;
        }
    }
    for (l_521 = 0; (l_521 > (-17)); l_521 = safe_sub_func_int64_t_s_s(l_521, 8))
    { 
        int32_t *l_624 = &l_522[5];
        int32_t **l_625 = &g_198;
        int32_t **l_626 = &g_198;
        int32_t **l_627 = (void*)0;
        int32_t **l_628 = &g_198;
        int32_t **l_629 = &g_198;
        int32_t **l_630 = &g_198;
        int32_t **l_631[1][1][4];
        int64_t *l_644 = &g_82[4];
        uint64_t **l_645 = &l_493;
        struct S0 l_647[4] = {{351,27123},{351,27123},{351,27123},{351,27123}};
        int16_t *l_653[1][3];
        uint64_t *l_670 = &g_266;
        uint64_t l_694 = 18446744073709551606UL;
        const int8_t *l_724[1];
        const int8_t **l_723 = &l_724[0];
        uint32_t l_733 = 0x7FA98D74L;
        int8_t l_739 = 3L;
        uint8_t l_770 = 0xEDL;
        struct S0 *l_799 = &l_647[2];
        union U2 *l_850 = &g_851;
        uint8_t l_876[5] = {7UL,7UL,7UL,7UL,7UL};
        uint8_t l_899 = 0UL;
        const uint16_t *l_910[7] = {&g_356,(void*)0,(void*)0,&g_356,(void*)0,(void*)0,&g_356};
        const uint16_t **l_909[6][1] = {{&l_910[0]},{&l_910[0]},{&l_910[0]},{&l_910[0]},{&l_910[0]},{&l_910[0]}};
        int64_t l_982 = 0x78151C17E2420084LL;
        uint32_t l_1006[6][6] = {{18446744073709551615UL,0xECBFD3F2L,0x8359E841L,0x863FBFC1L,1UL,18446744073709551615UL},{0x8359E841L,1UL,0x863FBFC1L,0x863FBFC1L,1UL,0x8359E841L},{18446744073709551615UL,1UL,0x863FBFC1L,0x8359E841L,0xECBFD3F2L,18446744073709551615UL},{0xEB7A9652L,1UL,0x8359E841L,0xEB7A9652L,1UL,0xEB7A9652L},{0xEB7A9652L,1UL,0xEB7A9652L,0x8359E841L,1UL,0xEB7A9652L},{18446744073709551615UL,0xECBFD3F2L,0x8359E841L,0x863FBFC1L,1UL,18446744073709551615UL}};
        uint64_t l_1120 = 0xB61C92D051F5B3F1LL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_631[i][j][k] = &g_198;
            }
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_653[i][j] = (void*)0;
        }
        for (i = 0; i < 1; i++)
            l_724[i] = (void*)0;
    }
    l_1132++;
    for (l_521 = 0; (l_521 < (-2)); l_521--)
    { 
        uint32_t l_1137 = 18446744073709551609UL;
        l_1137++;
    }
    return p_15.f0;
}



static union U1  func_19(int8_t * const  p_20)
{ 
    union U1 l_492 = {0x98L};
    return l_492;
}



static int8_t * func_21(union U2  p_22, uint16_t  p_23, union U2  p_24)
{ 
    int32_t l_83[7];
    int32_t l_84 = 0xC366FF5FL;
    int32_t *l_126[2];
    int32_t **l_125 = &l_126[1];
    const union U2 *l_132 = &g_18[1][0];
    union U1 l_154 = {0UL};
    uint8_t l_307 = 0x36L;
    uint64_t l_310 = 18446744073709551615UL;
    union U1 *l_316 = &g_317;
    int16_t *l_364 = &g_63;
    int i;
    for (i = 0; i < 7; i++)
        l_83[i] = 0L;
    for (i = 0; i < 2; i++)
        l_126[i] = (void*)0;
    for (g_40 = 0; (g_40 < 15); g_40 = safe_add_func_uint32_t_u_u(g_40, 2))
    { 
        int32_t l_73 = (-1L);
        int32_t l_76 = 0xA040D4F6L;
        int32_t l_89[6][6][4] = {{{0x8347E9BEL,1L,(-4L),6L},{(-1L),0xCA69BD5AL,0x5C24141EL,1L},{0x5A479C51L,0x2669E62AL,0x66B32335L,0x887C424AL},{0x66B32335L,0x887C424AL,(-3L),0x086CD17EL},{0x7C661B5BL,6L,0x704B5258L,0x3DFB5382L},{6L,0x2669E62AL,6L,8L}},{{0x9137EFE7L,(-1L),0x8347E9BEL,6L},{0x5A479C51L,(-2L),0x49B9DBF7L,6L},{0x06C82205L,(-1L),(-1L),0x06C82205L},{0x9137EFE7L,6L,(-4L),(-3L)},{0x3DFB5382L,(-9L),0x704B5258L,1L},{0xCA69BD5AL,0x2ABCF54FL,0x8347E9BEL,1L}},{{0x66B32335L,(-9L),0x086CD17EL,(-3L)},{0x6A4CB4ABL,6L,0x5C24141EL,0x06C82205L},{0x7C661B5BL,(-1L),6L,6L},{0x8347E9BEL,(-2L),0xDE86D361L,6L},{0xCA69BD5AL,(-1L),0x5C24141EL,8L},{0x06C82205L,0x2669E62AL,0x2E665D24L,0x3DFB5382L}},{{0x66B32335L,6L,(-1L),0x086CD17EL},{(-1L),0x887C424AL,0x704B5258L,0x887C424AL},{0x887C424AL,0x2669E62AL,0xDE86D361L,1L},{0x9137EFE7L,0xCA69BD5AL,(-3L),6L},{0x6A4CB4ABL,1L,0x49B9DBF7L,0x2E665D24L},{0xDE86D361L,0x49B9DBF7L,0xEA9C7313L,0xDE86D361L}},{{0x9A11D30DL,0x2E665D24L,0x6306CF3CL,0xEA9C7313L},{0x086CD17EL,0x2ABCF54FL,1L,(-9L)},{(-1L),0x5C24141EL,0x49B9DBF7L,0x2669E62AL},{(-1L),0x9137EFE7L,0x704B5258L,0xEA9C7313L},{(-4L),0x086CD17EL,0x6A4CB4ABL,6L},{(-3L),0x49B9DBF7L,0x6306CF3CL,0x086CD17EL}},{{0x86803F40L,0xAA3D5FEEL,0x9F59CAFAL,0x9F59CAFAL},{0x8347E9BEL,0x8347E9BEL,0x6A4CB4ABL,0x2669E62AL},{0xDE86D361L,1L,0xF0203124L,0x66B32335L},{(-1L),0x2E665D24L,0x86803F40L,0xF0203124L},{(-3L),0x2E665D24L,1L,0x66B32335L},{0x2E665D24L,1L,1L,0x2669E62AL}}};
        int64_t l_148 = 0xF38324C050763847LL;
        int8_t **l_158 = &g_157;
        uint32_t *l_160[6] = {&g_86,&g_86,&g_86,&g_86,&g_86,&g_86};
        uint32_t * const *l_159 = &l_160[0];
        uint64_t *l_235[7][6][6] = {{{&g_212,&g_40,&g_40,&g_212,&g_35,&g_35},{&g_35,&g_35,&g_35,&g_35,(void*)0,&g_212},{&g_35,&g_35,&g_40,&g_40,&g_35,&g_40},{&g_40,&g_212,&g_212,&g_40,&g_35,&g_40},{&g_212,&g_35,&g_212,&g_40,(void*)0,&g_212},{&g_212,&g_35,(void*)0,&g_40,&g_35,(void*)0}},{{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_212,&g_212,&g_35,&g_40,(void*)0,&g_212},{&g_212,&g_35,&g_212,&g_40,&g_35,&g_35},{&g_40,&g_212,&g_212,&g_40,&g_212,&g_212},{&g_35,&g_40,&g_35,&g_35,(void*)0,&g_40},{&g_35,(void*)0,&g_40,&g_212,&g_212,(void*)0}},{{&g_212,(void*)0,(void*)0,(void*)0,(void*)0,&g_212},{(void*)0,&g_40,&g_212,&g_35,&g_212,&g_40},{(void*)0,&g_212,&g_212,&g_40,&g_35,&g_40},{(void*)0,&g_35,&g_40,&g_35,(void*)0,&g_212},{(void*)0,&g_212,&g_35,(void*)0,&g_40,&g_35},{&g_212,&g_40,&g_40,&g_212,&g_35,&g_35}},{{&g_35,&g_35,&g_35,&g_35,(void*)0,&g_212},{&g_35,&g_35,&g_40,&g_40,&g_35,&g_40},{&g_40,&g_212,&g_212,&g_40,&g_35,&g_40},{&g_212,&g_35,&g_212,&g_40,(void*)0,&g_212},{&g_40,&g_212,&g_212,(void*)0,&g_40,&g_35},{&g_35,&g_212,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_40,&g_40,&g_40,(void*)0,&g_212,(void*)0},{(void*)0,&g_212,&g_40,&g_212,&g_212,&g_40},{&g_40,(void*)0,&g_40,&g_35,&g_40,(void*)0},{&g_40,&g_35,&g_40,&g_35,&g_35,(void*)0},{&g_35,&g_35,(void*)0,&g_40,&g_40,&g_35},{&g_35,&g_35,&g_212,&g_212,&g_35,&g_35}},{{&g_35,&g_35,(void*)0,&g_212,&g_40,&g_212},{&g_212,(void*)0,&g_40,&g_40,&g_212,(void*)0},{&g_212,&g_212,&g_40,&g_212,&g_212,&g_40},{&g_35,&g_40,&g_212,&g_212,(void*)0,&g_40},{&g_35,&g_212,(void*)0,&g_40,&g_40,&g_40},{&g_35,&g_212,&g_212,&g_35,&g_35,&g_40}},{{&g_40,&g_40,&g_40,&g_35,&g_212,(void*)0},{&g_40,&g_35,&g_40,&g_212,&g_212,&g_212},{(void*)0,&g_40,(void*)0,(void*)0,&g_35,&g_35},{&g_40,&g_212,&g_212,(void*)0,&g_40,&g_35},{&g_35,&g_212,(void*)0,(void*)0,(void*)0,(void*)0},{&g_40,&g_40,&g_40,(void*)0,&g_212,(void*)0}}};
        struct S0 *l_247 = &g_60;
        union U1 *l_249[2];
        uint32_t l_252 = 0x925C7451L;
        int32_t *l_261[7][5][7] = {{{(void*)0,&g_77,(void*)0,&g_77,&l_84,&l_76,(void*)0},{&l_89[2][5][1],&g_77,(void*)0,&l_89[2][1][0],(void*)0,&l_76,&l_89[3][3][2]},{&l_89[3][2][1],&l_76,&g_77,(void*)0,&g_47,&l_89[3][3][2],&l_89[3][4][0]},{(void*)0,(void*)0,&l_89[4][0][2],&g_47,(void*)0,&g_77,&g_47},{&l_84,&l_76,&g_47,&l_84,&l_76,&g_77,(void*)0}},{{(void*)0,&l_89[3][3][2],&l_89[0][4][0],&l_76,(void*)0,&g_77,&g_47},{(void*)0,&l_89[1][0][3],&g_77,&l_89[3][3][2],&g_77,&g_77,&l_89[3][3][2]},{&l_89[4][5][0],&l_89[3][4][0],&l_89[4][5][0],&l_89[2][3][3],&g_77,(void*)0,&l_84},{&g_47,&l_89[2][3][3],(void*)0,(void*)0,&l_76,&l_76,&l_89[3][5][3]},{(void*)0,&l_84,&l_76,(void*)0,&l_89[4][0][2],(void*)0,&g_77}},{{&l_84,(void*)0,(void*)0,(void*)0,&l_76,&l_84,&g_47},{(void*)0,&l_84,(void*)0,&l_76,&l_76,(void*)0,&g_77},{(void*)0,&g_47,(void*)0,&l_76,(void*)0,&g_77,&g_47},{&l_76,&l_89[3][2][1],&g_77,&l_76,(void*)0,&l_89[2][5][1],&l_89[3][3][2]},{(void*)0,&l_76,&l_89[3][3][2],&l_89[2][1][0],&l_84,&l_84,&l_84}},{{&g_47,&l_89[3][3][2],(void*)0,&g_77,&l_84,&g_47,&g_47},{&l_89[3][3][2],(void*)0,&l_76,&l_89[4][5][0],(void*)0,&l_89[3][3][2],&g_47},{&l_89[2][1][0],(void*)0,&l_76,&l_76,&g_47,&g_47,&l_89[0][4][0]},{&l_76,(void*)0,(void*)0,&l_89[3][5][3],&g_77,&l_89[2][3][3],(void*)0},{&l_89[3][3][2],&l_76,&l_89[3][3][2],&l_76,&l_76,(void*)0,&l_84}},{{&g_47,&g_47,&g_77,(void*)0,&l_76,(void*)0,&l_76},{&g_77,&l_76,(void*)0,&g_47,&l_89[3][5][3],&l_76,&g_47},{&l_76,&l_89[3][3][2],(void*)0,&l_76,(void*)0,&l_89[3][1][1],(void*)0},{&l_76,(void*)0,(void*)0,&l_76,(void*)0,&l_76,&l_76},{&l_76,&l_84,&l_89[3][5][3],&l_89[3][2][1],(void*)0,(void*)0,&l_89[3][3][2]}},{{(void*)0,&l_84,&l_89[2][3][3],&g_47,(void*)0,&g_77,&l_76},{(void*)0,&l_76,(void*)0,(void*)0,(void*)0,&g_47,(void*)0},{(void*)0,&g_77,&l_89[2][5][1],&g_77,&g_77,&l_89[2][2][0],&g_47},{&g_47,&g_47,&l_76,&l_89[3][3][2],&l_89[4][0][0],&g_77,&l_76},{&l_84,&g_77,&g_77,&l_76,&l_76,(void*)0,&l_84}},{{&l_89[2][3][3],(void*)0,&l_76,(void*)0,(void*)0,&g_77,(void*)0},{&g_47,&l_76,&l_89[4][0][2],(void*)0,&l_89[3][4][0],&l_76,&l_89[0][4][0]},{(void*)0,&g_77,&l_76,&l_89[2][3][3],(void*)0,&l_89[3][3][2],&g_47},{&g_47,&g_77,&l_89[1][0][3],&l_89[2][3][3],&l_84,(void*)0,&g_47},{&l_76,(void*)0,&g_47,(void*)0,&l_89[2][1][0],&l_84,&l_84}}};
        int64_t l_277[4] = {(-3L),(-3L),(-3L),(-3L)};
        const int8_t l_313[4][1] = {{1L},{1L},{1L},{1L}};
        const struct S0 l_329 = {370,15385};
        union U2 l_333 = {0xECD84E8CL};
        int16_t *l_352[2][6][1] = {{{(void*)0},{&g_63},{(void*)0},{(void*)0},{&g_63},{(void*)0}},{{&g_63},{(void*)0},{&g_63},{(void*)0},{(void*)0},{(void*)0}}};
        uint16_t *l_355 = &g_356;
        uint16_t *l_357 = &g_358;
        const uint8_t l_403[4][2][2] = {{{249UL,253UL},{250UL,253UL}},{{249UL,253UL},{250UL,253UL}},{{249UL,253UL},{250UL,253UL}},{{249UL,253UL},{250UL,253UL}}};
        const uint8_t l_426 = 253UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_249[i] = &l_154;
        if (l_73)
            break;
    }
    return (*g_156);
}



static union U2  func_25(const int8_t ** p_26, uint64_t  p_27)
{ 
    int16_t l_38 = (-8L);
    uint64_t *l_39 = &g_40;
    int8_t *l_43 = &g_11;
    uint32_t l_67[6] = {0xB336FDE0L,18446744073709551612UL,18446744073709551612UL,0xB336FDE0L,18446744073709551612UL,18446744073709551612UL};
    int32_t *l_68[6] = {&g_47,&g_47,&g_47,&g_47,&g_47,&g_47};
    union U2 l_69 = {-1L};
    int i;
    g_60.f0 = (g_18[1][1].f2 = (g_35 | (safe_mod_func_uint64_t_u_u(18446744073709551615UL, (((((*l_39) |= l_38) == (safe_mul_func_uint8_t_u_u((l_43 != (func_44(l_39) , (void*)0)), l_67[4]))) && g_60.f1) , 0x4BB1B2B1506F5737LL)))));
    return l_69;
}



static uint32_t  func_44(uint64_t * p_45)
{ 
    int32_t *l_46 = &g_47;
    int32_t *l_48 = &g_47;
    int32_t *l_49 = &g_47;
    int32_t *l_50[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    --g_51[0];
    for (g_11 = 0; (g_11 < (-2)); g_11--)
    { 
        int16_t *l_61 = (void*)0;
        int16_t *l_62 = &g_63;
        int32_t l_66 = 0x6A74B4FBL;
        for (g_47 = 0; (g_47 < 27); g_47++)
        { 
            g_18[1][1].f2 ^= (*l_48);
        }
        l_66 = (safe_add_func_uint32_t_u_u((((*l_49) <= ((g_60 , 6L) >= (((*l_62) ^= 1L) | (-1L)))) >= ((*l_46) || (((safe_div_func_int8_t_s_s(4L, g_47)) == g_60.f0) > l_66))), l_66));
        for (g_47 = 0; g_47 < 1; g_47 += 1)
        {
            g_51[g_47] = 0UL;
        }
    }
    return g_35;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_18[i][j].f0, "g_18[i][j].f0", print_hash_value);
            transparent_crc(g_18[i][j].f1, "g_18[i][j].f1", print_hash_value);
            transparent_crc(g_18[i][j].f2, "g_18[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_51[i], "g_51[i]", print_hash_value);

    }
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_60.f1, "g_60.f1", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_81[i][j][k], "g_81[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_82[i], "g_82[i]", print_hash_value);

    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_107.f1, "g_107.f1", print_hash_value);
    transparent_crc(g_107.f2, "g_107.f2", print_hash_value);
    transparent_crc(g_131.f0, "g_131.f0", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_278[i][j], "g_278[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_289, "g_289", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_291[i], "g_291[i]", print_hash_value);

    }
    transparent_crc(g_317.f0, "g_317.f0", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_386.f0, "g_386.f0", print_hash_value);
    transparent_crc(g_386.f1, "g_386.f1", print_hash_value);
    transparent_crc(g_386.f2, "g_386.f2", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_478.f0, "g_478.f0", print_hash_value);
    transparent_crc(g_478.f1, "g_478.f1", print_hash_value);
    transparent_crc(g_478.f2, "g_478.f2", print_hash_value);
    transparent_crc(g_524, "g_524", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_851.f0, "g_851.f0", print_hash_value);
    transparent_crc(g_851.f1, "g_851.f1", print_hash_value);
    transparent_crc(g_851.f2, "g_851.f2", print_hash_value);
    transparent_crc(g_873, "g_873", print_hash_value);
    transparent_crc(g_913, "g_913", print_hash_value);
    transparent_crc(g_918, "g_918", print_hash_value);
    transparent_crc(g_1021.f0, "g_1021.f0", print_hash_value);
    transparent_crc(g_1021.f1, "g_1021.f1", print_hash_value);
    transparent_crc(g_1250, "g_1250", print_hash_value);
    transparent_crc(g_1284.f0, "g_1284.f0", print_hash_value);
    transparent_crc(g_1284.f1, "g_1284.f1", print_hash_value);
    transparent_crc(g_1284.f2, "g_1284.f2", print_hash_value);
    transparent_crc(g_1485, "g_1485", print_hash_value);
    transparent_crc(g_1741, "g_1741", print_hash_value);
    transparent_crc(g_1786, "g_1786", print_hash_value);
    transparent_crc(g_1814.f0, "g_1814.f0", print_hash_value);
    transparent_crc(g_1814.f1, "g_1814.f1", print_hash_value);
    transparent_crc(g_1814.f2, "g_1814.f2", print_hash_value);
    transparent_crc(g_1924, "g_1924", print_hash_value);
    transparent_crc(g_1997, "g_1997", print_hash_value);
    transparent_crc(g_2022.f0, "g_2022.f0", print_hash_value);
    transparent_crc(g_2022.f1, "g_2022.f1", print_hash_value);
    transparent_crc(g_2070, "g_2070", print_hash_value);
    transparent_crc(g_2077, "g_2077", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}

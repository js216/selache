// SPDX-License-Identifier: MIT
// cctest_csmith_38eb2e89.c --- cctest case csmith_38eb2e89 (csmith seed 954936969)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x63ee74b2 */

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

// Options:   -s 954936969 -o /tmp/csmith_gen_f5ee1nk8/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   int32_t  f1;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   int8_t * f1;
   const int32_t  f2;
   const int8_t * f3;
};

union U2 {
   int8_t * f0;
   int8_t  f1;
   const uint32_t  f2;
   int8_t * const  f3;
   uint16_t  f4;
};

union U3 {
   int16_t  f0;
   uint32_t  f1;
   uint8_t  f2;
};

union U4 {
   int64_t  f0;
   struct S0  f1;
};


static int32_t g_2 = 0xFC9A57B5L;
static union U1 g_21 = {4UL};
static int64_t g_26[7] = {0xB7D6B59229A275FFLL,0L,0xB7D6B59229A275FFLL,0xB7D6B59229A275FFLL,0L,0xB7D6B59229A275FFLL,0xB7D6B59229A275FFLL};
static uint8_t g_71 = 0xF2L;
static uint16_t g_75 = 65535UL;
static uint8_t g_76 = 0xDDL;
static uint32_t g_94 = 0x7F559297L;
static union U4 g_101 = {-5L};
static union U4 **g_114[3] = {(void*)0,(void*)0,(void*)0};
static int8_t g_128 = (-7L);
static const uint64_t g_129[2] = {0x928B54DF11966D8DLL,0x928B54DF11966D8DLL};
static int64_t *g_139 = (void*)0;
static int64_t g_151 = 0xE6A4CB4AB4704B52LL;
static union U3 g_155 = {0xE59DL};
static union U3 *g_154[2][2] = {{&g_155,&g_155},{&g_155,&g_155}};
static int32_t g_185[7][6] = {{0xADCADDF3L,(-1L),(-1L),(-1L),0xADCADDF3L,0x4AAA59CCL},{0xA79CB204L,(-1L),(-7L),0xA79CB204L,0xE445E70CL,1L},{0xA79CB204L,0xE445E70CL,1L,(-1L),(-1L),1L},{0xADCADDF3L,0xADCADDF3L,(-7L),0x13958EBFL,(-1L),0x4AAA59CCL},{(-1L),0xE445E70CL,(-1L),0x13958EBFL,0xE445E70CL,(-7L)},{(-10L),1L,0xE445E70CL,1L,(-10L),(-1L)},{(-8L),1L,0xA79CB204L,(-8L),(-2L),0x13958EBFL}};
static int32_t *g_198 = (void*)0;
static uint32_t g_227[6] = {4294967293UL,4294967293UL,0UL,4294967293UL,4294967293UL,0UL};
static uint32_t g_229[6][2][7] = {{{0x693B0AE3L,0x869ADE63L,0x37B2804DL,0x693B0AE3L,0x693B0AE3L,0x37B2804DL,0x869ADE63L},{0UL,0x1ACACCE1L,8UL,0x836BC6E7L,8UL,0x1ACACCE1L,0UL}},{{0x1D52DF08L,0x693B0AE3L,1UL,1UL,0x693B0AE3L,0x1D52DF08L,1UL},{1UL,0x836BC6E7L,0xD96F22F5L,0x836BC6E7L,1UL,0UL,1UL}},{{0x693B0AE3L,1UL,1UL,0x693B0AE3L,0x1D52DF08L,1UL,0x869ADE63L},{8UL,0x836BC6E7L,8UL,0x1ACACCE1L,0UL,0x1ACACCE1L,8UL}},{{0x693B0AE3L,0x693B0AE3L,0x37B2804DL,0x869ADE63L,0x693B0AE3L,0x9428BCF4L,0x869ADE63L},{1UL,0x1ACACCE1L,0xD9C4CFDCL,0x836BC6E7L,0xD9C4CFDCL,0x1ACACCE1L,1UL}},{{0x1D52DF08L,0x869ADE63L,1UL,0x1D52DF08L,0x693B0AE3L,1UL,1UL},{0UL,0x836BC6E7L,1UL,0x836BC6E7L,0UL,0UL,0UL}},{{0x693B0AE3L,0x1D52DF08L,1UL,0x869ADE63L,0x1D52DF08L,0x1D52DF08L,0x869ADE63L},{0xD9C4CFDCL,0x836BC6E7L,0xD9C4CFDCL,0x1ACACCE1L,1UL,0x1ACACCE1L,0xD9C4CFDCL}}};
static uint32_t g_231 = 0x22683E64L;
static uint32_t g_233 = 0x0718E8B4L;
static uint64_t g_237 = 6UL;
static int64_t **g_249[6] = {&g_139,&g_139,&g_139,&g_139,&g_139,&g_139};
static int64_t ***g_248 = &g_249[2];
static uint16_t * const g_252 = &g_75;
static uint16_t * const *g_251 = &g_252;
static int8_t g_265 = 0xE5L;
static int8_t *g_264 = &g_265;
static int64_t ****g_274[2][1][1] = {{{(void*)0}},{{(void*)0}}};
static uint16_t g_333 = 0x2543L;
static int16_t g_399 = 0xF938L;
static uint16_t *g_498[3][2] = {{(void*)0,&g_333},{&g_333,(void*)0},{&g_333,&g_333}};
static uint16_t **g_497 = &g_498[2][1];
static uint16_t ***g_496 = &g_497;
static uint16_t ****g_495 = &g_496;
static uint64_t g_606 = 1UL;
static uint64_t g_608 = 0x50A805BD088C0E34LL;
static int16_t g_621 = 0x77ADL;
static uint8_t g_646 = 0x63L;
static union U1 g_720 = {0xDDC38DA8L};
static int32_t *g_735 = &g_101.f1.f1;
static struct S0 *g_744[1][1] = {{(void*)0}};
static struct S0 * const *g_743 = &g_744[0][0];
static struct S0 * const **g_742 = &g_743;
static struct S0 * const ** const *g_741[2][5] = {{(void*)0,(void*)0,&g_742,(void*)0,(void*)0},{&g_742,(void*)0,&g_742,&g_742,(void*)0}};
static int32_t *g_760 = &g_185[0][0];
static struct S0 * const * const g_807 = (void*)0;
static struct S0 * const * const *g_806 = &g_807;
static struct S0 * const * const **g_805 = &g_806;
static union U4 *g_833 = (void*)0;
static union U4 **g_832 = &g_833;
static union U3 **g_874 = &g_154[0][0];
static int32_t g_978 = 0xE1317123L;
static const struct S0 *g_1023 = (void*)0;
static const struct S0 **g_1022[2] = {&g_1023,&g_1023};
static const struct S0 ***g_1021 = &g_1022[0];
static uint32_t g_1070 = 0x4216B546L;
static uint16_t g_1076 = 0x8AD7L;
static uint8_t *g_1102 = &g_71;
static uint8_t **g_1101 = &g_1102;
static uint32_t g_1151 = 4294967294UL;
static const union U2 g_1173 = {0};
static struct S0 **g_1220 = (void*)0;
static struct S0 ***g_1219 = &g_1220;
static struct S0 ****g_1218[7] = {&g_1219,&g_1219,&g_1219,&g_1219,&g_1219,&g_1219,&g_1219};



static uint64_t  func_1(void);
static union U1 * func_5(int64_t  p_6);
static uint16_t  func_14(union U1 * const  p_15, union U4  p_16, uint16_t  p_17, uint64_t  p_18, int64_t  p_19);
static int16_t  func_29(union U4 * p_30, union U1  p_31, int32_t  p_32);
static union U4 * func_33(struct S0  p_34, uint32_t  p_35, int8_t * p_36, int64_t  p_37, uint16_t  p_38);
static struct S0  func_39(int64_t * p_40);
static int64_t * func_41(int64_t * const  p_42, const int64_t * p_43, uint64_t  p_44);
static const int64_t * func_45(union U1 * p_46, uint64_t  p_47);




static uint64_t  func_1(void)
{ 
    union U1 * const l_20 = &g_21;
    int32_t l_24 = 0xD6273D59L;
    int32_t l_1214 = 0x1ED37821L;
    uint8_t l_1240 = 0x04L;
    int32_t l_1258 = 0x602D5F87L;
    int16_t l_1260 = 1L;
    int64_t l_1261[2];
    int i;
    for (i = 0; i < 2; i++)
        l_1261[i] = 1L;
    for (g_2 = 29; (g_2 >= 8); g_2 = safe_sub_func_int16_t_s_s(g_2, 3))
    { 
        uint8_t l_9[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
        union U4 l_22 = {1L};
        union U4 *l_23 = &l_22;
        int64_t *l_25 = &g_26[6];
        union U1 *l_1203[7];
        union U1 **l_1202 = &l_1203[2];
        int32_t *l_1213 = &g_185[5][3];
        uint8_t l_1238 = 0x1DL;
        struct S0 l_1263 = {0L,5L};
        int32_t l_1272[2][4];
        int i, j;
        for (i = 0; i < 7; i++)
            l_1203[i] = &g_21;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_1272[i][j] = (-4L);
        }
    }
    return g_229[3][0][5];
}



static union U1 * func_5(int64_t  p_6)
{ 
    uint16_t l_1143 = 0x2564L;
    int32_t *l_1146[1];
    uint16_t l_1159 = 0UL;
    union U1 *l_1166 = &g_720;
    uint32_t l_1183 = 0UL;
    union U4 l_1199[5][6][4] = {{{{0x45D0FA1308E109BALL},{0L},{-7L},{0xC2289C449E676B6DLL}},{{-7L},{0xC2289C449E676B6DLL},{1L},{0xD6F4B1A04BC1C35DLL}},{{-7L},{0xC393A2748DA96DB5LL},{-7L},{0xE0E7B6E3284ABB09LL}},{{0x45D0FA1308E109BALL},{0xD6F4B1A04BC1C35DLL},{0L},{0xE0E7B6E3284ABB09LL}},{{1L},{0xC393A2748DA96DB5LL},{0xA24FDECE9798A98BLL},{0xD6F4B1A04BC1C35DLL}},{{0L},{0xC2289C449E676B6DLL},{0xA24FDECE9798A98BLL},{0xC2289C449E676B6DLL}}},{{{1L},{0L},{0L},{1L}},{{0x45D0FA1308E109BALL},{0L},{-7L},{0xC2289C449E676B6DLL}},{{-7L},{0xC2289C449E676B6DLL},{1L},{0xD6F4B1A04BC1C35DLL}},{{-7L},{0xC393A2748DA96DB5LL},{-7L},{0xE0E7B6E3284ABB09LL}},{{0x45D0FA1308E109BALL},{0xD6F4B1A04BC1C35DLL},{0L},{0xE0E7B6E3284ABB09LL}},{{1L},{0xC393A2748DA96DB5LL},{0xA24FDECE9798A98BLL},{0xD6F4B1A04BC1C35DLL}}},{{{0L},{0L},{1L},{0L}},{{-10L},{0xD6F4B1A04BC1C35DLL},{0xA24FDECE9798A98BLL},{0xC393A2748DA96DB5LL}},{{-7L},{0xD6F4B1A04BC1C35DLL},{0L},{0L}},{{0L},{0L},{-10L},{0xE0E7B6E3284ABB09LL}},{{0L},{0x6705FE8ECA80F2BALL},{0L},{1L}},{{-7L},{0xE0E7B6E3284ABB09LL},{0xA24FDECE9798A98BLL},{1L}}},{{{-10L},{0x6705FE8ECA80F2BALL},{1L},{0xE0E7B6E3284ABB09LL}},{{0L},{0L},{1L},{0L}},{{-10L},{0xD6F4B1A04BC1C35DLL},{0xA24FDECE9798A98BLL},{0xC393A2748DA96DB5LL}},{{-7L},{0xD6F4B1A04BC1C35DLL},{0L},{0L}},{{0L},{0L},{-10L},{0xE0E7B6E3284ABB09LL}},{{0L},{0x6705FE8ECA80F2BALL},{0L},{1L}}},{{{-7L},{0xE0E7B6E3284ABB09LL},{0xA24FDECE9798A98BLL},{1L}},{{-10L},{0x6705FE8ECA80F2BALL},{1L},{0xE0E7B6E3284ABB09LL}},{{0L},{0L},{1L},{0L}},{{-10L},{0xD6F4B1A04BC1C35DLL},{0xA24FDECE9798A98BLL},{0xC393A2748DA96DB5LL}},{{-7L},{0xD6F4B1A04BC1C35DLL},{0L},{0L}},{{0L},{0L},{-10L},{0xE0E7B6E3284ABB09LL}}}};
    const uint64_t l_1200 = 0x461E6448A7BC9EA1LL;
    uint16_t ***l_1201 = &g_497;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1146[i] = &g_185[0][0];
    g_101.f1.f1 ^= (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s((g_185[0][0] ^= ((safe_mul_func_uint8_t_u_u(((g_71 >= l_1143) >= (safe_add_func_uint8_t_u_u((0xE940L == (l_1143 & (((-1L) <= 65535UL) != (0x1106244F3C7360A1LL >= l_1143)))), p_6))), 0xEBL)) , l_1143)), p_6)), 11)), p_6)), g_1076));
    for (g_1070 = 0; (g_1070 < 17); ++g_1070)
    { 
        int32_t l_1157 = 0L;
        int32_t l_1158[7] = {0x378170A0L,0xE0FEF001L,0x378170A0L,0x378170A0L,0xE0FEF001L,0x378170A0L,0x378170A0L};
        int i;
        for (g_399 = 16; (g_399 > 17); g_399++)
        { 
            if (p_6)
                break;
            if (g_1151)
                continue;
        }
        for (g_128 = 0; (g_128 >= (-25)); g_128 = safe_sub_func_int64_t_s_s(g_128, 8))
        { 
            uint32_t l_1154 = 4294967286UL;
            ++l_1154;
        }
        ++l_1159;
    }
    for (g_71 = 0; (g_71 != 33); g_71 = safe_add_func_uint16_t_u_u(g_71, 3))
    { 
        uint16_t l_1175 = 1UL;
        int32_t l_1184 = 0xB1BA91FAL;
        l_1184 &= (((void*)0 == l_1166) < ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((g_1173 , ((((~((**g_251) = ((l_1175 , g_21) , ((((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((*g_252), 12)), 8)) || ((safe_sub_func_int64_t_s_s((~l_1175), 0x4A3DDD593FD11FEBLL)) < l_1175)) <= p_6) ^ 0xFC42L)))) < p_6) , l_1175) != (**g_1101))), 6)), l_1183)), g_155.f2)) <= l_1175));
    }
    g_101.f1.f1 = (safe_add_func_uint8_t_u_u(0x7EL, (((safe_add_func_uint16_t_u_u(p_6, ((**g_251)--))) == ((safe_sub_func_int32_t_s_s((g_185[3][5] = p_6), (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_s((l_1199[0][4][3] , (l_1200 , ((((p_6 , (void*)0) != l_1201) , p_6) || 0UL))), 9)) <= p_6) >= (-1L)) < p_6), p_6)), p_6)))) , p_6)) == p_6)));
    return &g_720;
}



static uint16_t  func_14(union U1 * const  p_15, union U4  p_16, uint16_t  p_17, uint64_t  p_18, int64_t  p_19)
{ 
    union U1 *l_48 = &g_21;
    int32_t l_256 = 0x19EBCAD0L;
    uint64_t l_1131 = 0xCD6247CD68A89D36LL;
    int32_t l_1132 = 0x94EF5F3BL;
    l_1132 |= (safe_lshift_func_int16_t_s_u(func_29(func_33(func_39(func_41(&g_26[6], func_45(l_48, p_16.f1.f1), (safe_mod_func_int64_t_s_s(((g_129[1] < l_256) , 1L), g_129[1])))), g_2, g_264, l_256, l_256), g_720, p_16.f1.f1), l_1131));
    return (*g_252);
}



static int16_t  func_29(union U4 * p_30, union U1  p_31, int32_t  p_32)
{ 
    int8_t l_726 = 1L;
    int32_t **l_727 = &g_198;
    int32_t **l_728 = (void*)0;
    int32_t **l_729 = &g_198;
    int32_t *l_730 = &g_185[4][1];
    int32_t *l_731 = &g_185[4][0];
    int32_t **l_732 = (void*)0;
    int32_t **l_733 = &g_198;
    int32_t **l_734[3];
    int8_t l_753 = 5L;
    uint8_t l_762 = 1UL;
    int16_t l_765 = 0xC81DL;
    int32_t l_781 = 0x01EF329DL;
    struct S0 * const * const **l_804[6];
    int64_t ** const *l_827[6][4] = {{&g_249[2],&g_249[0],&g_249[0],&g_249[2]},{&g_249[2],&g_249[0],&g_249[0],&g_249[2]},{&g_249[2],&g_249[0],&g_249[0],&g_249[2]},{&g_249[2],&g_249[0],&g_249[0],&g_249[2]},{&g_249[2],&g_249[0],&g_249[0],&g_249[2]},{&g_249[2],&g_249[0],&g_249[0],&g_249[2]}};
    int64_t ** const **l_826 = &l_827[1][2];
    int32_t l_845 = (-8L);
    int32_t l_910[3][2][1] = {{{(-2L)},{(-1L)}},{{(-2L)},{(-1L)}},{{(-2L)},{(-1L)}}};
    uint32_t l_912 = 0xDE4D9F63L;
    union U4 * const *l_928 = &g_833;
    uint8_t l_979 = 0xD5L;
    const struct S0 ***l_1020 = (void*)0;
    union U3 l_1031[5] = {{-1L},{-1L},{-1L},{-1L},{-1L}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_734[i] = &g_198;
    for (i = 0; i < 6; i++)
        l_804[i] = (void*)0;
    if ((((!(*g_264)) ^ (((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(l_726, p_31.f2)), 0L)) >= ((l_730 = (void*)0) != (g_735 = (l_731 = (void*)0)))) | p_31.f0)) || 65532UL))
    { 
        int32_t l_740[3][4][4] = {{{0x600F2C4BL,0L,0x600F2C4BL,5L},{0x2433141AL,0L,5L,5L},{0L,0L,0xA458D6BCL,0L},{0L,0x2433141AL,0xA458D6BCL,0x2433141AL}},{{0L,0x600F2C4BL,5L,0xA458D6BCL},{0x2433141AL,0x600F2C4BL,0x600F2C4BL,0x2433141AL},{0x600F2C4BL,0x2433141AL,0L,0L},{0x600F2C4BL,0L,0x600F2C4BL,5L}},{{0x2433141AL,0L,5L,5L},{0L,0L,0xA458D6BCL,0L},{0L,0x2433141AL,0xA458D6BCL,0x2433141AL},{0L,0x600F2C4BL,5L,0xA458D6BCL}}};
        struct S0 * const ** const *l_745 = (void*)0;
        int i, j, k;
        p_32 = ((safe_rshift_func_int16_t_s_s(((((safe_add_func_int32_t_s_s((((p_31.f2 == l_740[0][0][3]) , (void*)0) != (l_745 = g_741[0][1])), (0x22846471L < ((safe_add_func_int8_t_s_s((((+0xD398L) , (!1L)) != g_101.f1.f0), (*g_264))) != 0x73072555L)))) != p_32) >= 0x1433B156A153F9D6LL) != 18446744073709551613UL), 11)) & p_32);
    }
    else
    { 
        int32_t ***l_750 = &l_733;
        int32_t l_751 = 0xDDB53822L;
        int32_t l_752 = 0x7E389755L;
        int32_t l_754[2];
        int i;
        for (i = 0; i < 2; i++)
            l_754[i] = (-8L);
        if ((&l_729 != ((*p_30) , l_750)))
        { 
            return g_231;
        }
        else
        { 
            int64_t l_755[1];
            int32_t l_756[1];
            uint64_t l_757 = 3UL;
            int i;
            for (i = 0; i < 1; i++)
                l_755[i] = 0x76CA91F935010D04LL;
            for (i = 0; i < 1; i++)
                l_756[i] = 0L;
            --l_757;
        }
        if (p_31.f2)
            goto lbl_761;
        g_760 = (g_735 = ((*l_733) = &p_32));
    }
lbl_761:
    for (g_155.f1 = 0; g_155.f1 < 6; g_155.f1 += 1)
    {
        g_227[g_155.f1] = 4294967295UL;
    }
    l_762++;
    l_765 &= p_31.f2;
    if (p_31.f0)
    { 
        uint64_t l_768 = 0x34903CE49B47D329LL;
        int32_t l_793 = 1L;
        int16_t l_794[2];
        int32_t l_813 = 3L;
        struct S0 l_823 = {0x905A3B2EL,0L};
        int64_t ****l_825[6][4] = {{&g_248,&g_248,&g_248,&g_248},{&g_248,&g_248,&g_248,&g_248},{&g_248,&g_248,&g_248,&g_248},{&g_248,&g_248,&g_248,&g_248},{&g_248,&g_248,&g_248,&g_248},{&g_248,&g_248,&g_248,&g_248}};
        int64_t l_854 = (-1L);
        int16_t *l_863 = &l_765;
        union U3 **l_872 = (void*)0;
        int32_t l_911 = (-5L);
        int16_t l_913 = 0x1894L;
        uint8_t l_940 = 0xF9L;
        struct S0 **l_1025 = &g_744[0][0];
        struct S0 ***l_1024 = &l_1025;
        int32_t l_1041 = 1L;
        int32_t l_1042 = 2L;
        int32_t l_1043 = 0x0B80A08EL;
        int32_t l_1044 = 0x1D54C8D4L;
        int32_t l_1045 = (-1L);
        int32_t l_1046 = 1L;
        const union U2 l_1050[6][2][4] = {{{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}}}};
        uint16_t **** const l_1083 = &g_496;
        uint64_t l_1112[4][3][7] = {{{0x42C27226666BCC46LL,0x130148560DA8374FLL,18446744073709551608UL,18446744073709551615UL,0x223A119EC4D17717LL,0UL,0x52648D521ECC9A91LL},{18446744073709551610UL,0xA0A5C6A749CDD4C2LL,0UL,0x075F9B97CD2841DFLL,3UL,18446744073709551611UL,0x42C27226666BCC46LL},{0xB9E6ADC4D0835705LL,0x4C6159982600B680LL,0UL,18446744073709551613UL,18446744073709551613UL,0UL,0x4C6159982600B680LL}},{{0x24B85DFD06A1AD90LL,1UL,18446744073709551608UL,0x35794DB9E1A2F401LL,18446744073709551610UL,18446744073709551615UL,0UL},{0x4A6BC744E2108270LL,0UL,18446744073709551611UL,0xA0A5C6A749CDD4C2LL,0x5655D3CC1CB149C8LL,0x4C6159982600B680LL,18446744073709551614UL},{18446744073709551610UL,0x4A6BC744E2108270LL,18446744073709551613UL,0x35794DB9E1A2F401LL,0x87424343CB5576DCLL,18446744073709551610UL,18446744073709551608UL}},{{0UL,18446744073709551614UL,1UL,18446744073709551613UL,0UL,0x223A119EC4D17717LL,0UL},{1UL,0x87424343CB5576DCLL,18446744073709551615UL,0x075F9B97CD2841DFLL,0UL,0UL,0x075F9B97CD2841DFLL},{0x130148560DA8374FLL,1UL,0x130148560DA8374FLL,18446744073709551615UL,0x87424343CB5576DCLL,0x24B85DFD06A1AD90LL,0x35794DB9E1A2F401LL}},{{0UL,18446744073709551615UL,18446744073709551610UL,0x42C27226666BCC46LL,0x5655D3CC1CB149C8LL,18446744073709551606UL,0x4A6BC744E2108270LL},{0x52648D521ECC9A91LL,0xB9E6ADC4D0835705LL,0x5655D3CC1CB149C8LL,1UL,18446744073709551610UL,0x24B85DFD06A1AD90LL,0xD1694A46E061C859LL},{0x35794DB9E1A2F401LL,0UL,18446744073709551614UL,1UL,18446744073709551613UL,0UL,0x223A119EC4D17717LL}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_794[i] = 0L;
        for (l_753 = 19; (l_753 <= 20); l_753 = safe_add_func_uint64_t_u_u(l_753, 2))
        { 
            return g_237;
        }
        l_768--;
        for (l_726 = (-20); (l_726 != 6); l_726 = safe_add_func_int64_t_s_s(l_726, 1))
        { 
            return p_31.f0;
        }
lbl_1071:
        for (g_128 = 0; (g_128 == (-6)); g_128 = safe_sub_func_uint32_t_u_u(g_128, 5))
        { 
            union U3 l_780 = {2L};
            uint32_t l_795 = 3UL;
            int32_t l_797[6][3][3] = {{{0L,0x9A37BDEEL,0L},{0L,0x9A37BDEEL,0L},{0L,0x9A37BDEEL,0L}},{{0L,0x9A37BDEEL,0L},{0L,0x9A37BDEEL,0L},{0L,0x9A37BDEEL,0L}},{{0L,0x9A37BDEEL,0L},{0L,0x9A37BDEEL,0L},{0L,0x9A37BDEEL,0L}},{{0L,0x9A37BDEEL,0L},{0L,0x9A37BDEEL,0L},{0L,0x9A37BDEEL,0L}},{{0L,0x9A37BDEEL,0L},{0L,0x9A37BDEEL,0L},{0L,0x9A37BDEEL,0L}},{{0L,0x9A37BDEEL,0L},{0L,0x9A37BDEEL,0L},{0L,0x9A37BDEEL,0L}}};
            uint16_t l_816 = 65527UL;
            int16_t l_878[5][5] = {{0xCD8CL,0xCD8CL,0x6D91L,0L,0x6D91L},{(-1L),(-1L),(-1L),0x3947L,0x906EL},{0x6D91L,0x6D91L,0x0D75L,1L,0x0D75L},{(-1L),(-1L),0x906EL,0x3B8EL,0x906EL},{0x6D91L,0x6D91L,0x0D75L,1L,0x0D75L}};
            int8_t *l_914 = &l_753;
            int32_t l_915[1][2][2];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_915[i][j][k] = (-4L);
                }
            }
            for (g_399 = 0; (g_399 <= 5); g_399 += 1)
            { 
                union U4 l_777 = {-1L};
                int64_t * const *l_788 = &g_139;
                int64_t * const * const *l_787 = &l_788;
                int64_t * const * const **l_786 = &l_787;
                int64_t *****l_791 = &g_274[1][0][0];
                int16_t *l_792 = &g_621;
                uint16_t l_796 = 65535UL;
                int i, j;
                g_185[g_399][g_399] |= (safe_rshift_func_uint16_t_u_s(((l_777 , g_227[g_399]) | 0xE2263ACCAE724C52LL), 3));
                (*g_760) = (l_797[5][2][0] &= ((g_646 != ((safe_lshift_func_int16_t_s_u(((((p_32 == (((l_780 , l_781) <= (safe_add_func_int16_t_s_s(((((((l_793 = (safe_rshift_func_int16_t_s_s(((*l_792) &= (l_786 == ((*l_791) = ((safe_div_func_uint32_t_u_u((l_777.f0 && g_76), 0x501BB6A4L)) , &g_248)))), g_26[6]))) , &g_128) != &l_753) , l_793) < (*g_760)) > l_794[0]), l_795))) & p_32)) | l_796) >= p_31.f2) | l_777.f1.f0), p_31.f2)) & 0x0FA6A837L)) == p_31.f2));
            }
            for (p_32 = (-18); (p_32 >= 15); ++p_32)
            { 
                int32_t l_808 = 0xD6BE0544L;
                int32_t l_812 = 1L;
                int32_t l_814 = 0xC62DFC6DL;
                int32_t l_815 = 0x9B02A014L;
                struct S0 l_824 = {4L,0x12CCC787L};
                uint8_t *l_849 = &g_646;
                union U3 **l_864 = &g_154[0][0];
                uint64_t l_879 = 0xF9902011E975E4D3LL;
                if ((safe_add_func_uint64_t_u_u((9UL <= (&g_742 == ((0x342FL <= l_780.f2) , (g_805 = l_804[5])))), 0x33714F4864D706A3LL)))
                { 
                    l_797[5][2][0] ^= 9L;
                    if (p_31.f0)
                        break;
                    if (l_808)
                        continue;
                }
                else
                { 
                    struct S0 *l_809[7][5] = {{&g_101.f1,&g_101.f1,&g_101.f1,&g_101.f1,&g_101.f1},{&g_101.f1,&g_101.f1,&g_101.f1,&g_101.f1,(void*)0},{&g_101.f1,&g_101.f1,&g_101.f1,&g_101.f1,&g_101.f1},{&g_101.f1,&g_101.f1,&g_101.f1,&g_101.f1,&g_101.f1},{&g_101.f1,&g_101.f1,&g_101.f1,&g_101.f1,&g_101.f1},{&g_101.f1,&g_101.f1,&g_101.f1,&g_101.f1,&g_101.f1},{&g_101.f1,&g_101.f1,&g_101.f1,&g_101.f1,&g_101.f1}};
                    struct S0 **l_810 = &l_809[2][4];
                    struct S0 **l_811[1];
                    int32_t l_828 = 1L;
                    union U4 ***l_831 = &g_114[2];
                    int16_t *l_838 = &g_399;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_811[i] = &g_744[0][0];
                    g_744[0][0] = ((*l_810) = l_809[2][4]);
                    l_816--;
                    l_815 &= (safe_add_func_int8_t_s_s(((*g_264) = (safe_rshift_func_int8_t_s_s(((l_824 = l_823) , (((l_825[5][3] != l_826) <= (l_828 < ((((((*l_831) = g_114[0]) == g_832) | ((((~(((*l_838) = (safe_add_func_int32_t_s_s(((safe_unary_minus_func_uint8_t_u(0x50L)) != l_797[5][2][0]), (*g_760)))) && 0UL)) <= l_780.f2) ^ 0UL) == p_31.f0)) == l_816) , g_101.f1.f0))) < p_32)), 6))), l_816));
                    (*l_729) = &l_793;
                }
                if ((safe_mul_func_int8_t_s_s(0x0CL, (safe_sub_func_int8_t_s_s(((safe_add_func_int64_t_s_s(8L, ((l_845 = l_794[0]) ^ g_185[0][0]))) < l_823.f0), (+(safe_mul_func_uint8_t_u_u((--(*l_849)), (safe_div_func_int32_t_s_s(l_854, (((safe_sub_func_uint16_t_u_u((((*g_252) , (*g_264)) > l_824.f0), l_824.f0)) != l_797[5][0][0]) | 1UL)))))))))))
                { 
                    union U3 **l_865 = &g_154[0][0];
                    int32_t *l_871 = &g_101.f1.f0;
                    int32_t **l_870 = &l_871;
                    union U3 ***l_873[5][4] = {{(void*)0,(void*)0,&l_864,(void*)0},{&l_865,&l_872,&l_865,&l_864},{&l_865,&l_864,&l_864,&l_865},{(void*)0,&l_864,(void*)0,&l_864},{&l_864,&l_872,(void*)0,(void*)0}};
                    uint8_t **l_875 = &l_849;
                    uint32_t l_876 = 0xD8508A15L;
                    int32_t l_877 = (-2L);
                    int i, j;
                    l_824.f1 ^= (~((*g_264) ^= (safe_rshift_func_int16_t_s_u(((+(0UL > (safe_lshift_func_uint8_t_u_s(((*l_849) = ((l_863 == (((*p_30) = (*p_30)) , (void*)0)) ^ (g_720.f2 > (l_864 == l_865)))), p_31.f0)))) > l_824.f0), p_31.f0))));
                    l_814 = ((safe_div_func_uint64_t_u_u(((((((safe_add_func_uint8_t_u_u((g_760 != ((*l_870) = (void*)0)), (&g_154[0][0] != (g_874 = l_872)))) != (&g_76 != ((*l_875) = (((0xFC6FAE6BL || l_797[5][2][0]) , 0xC9081C03BF14626ELL) , (void*)0)))) & 0xBFF5L) != p_31.f0) && g_129[1]) ^ p_31.f2), l_876)) , 8L);
                    l_879++;
                }
                else
                { 
                    g_101.f1.f1 |= 0x50E2D49CL;
                }
            }
            l_915[0][1][1] |= (+(l_797[5][2][0] &= ((*l_914) &= ((*g_264) = (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(p_32, 11)), (p_31.f0 ^ (safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((l_793 = 0x3B09L) , ((safe_unary_minus_func_int32_t_s((l_794[1] & (((safe_mod_func_int32_t_s_s(((l_878[2][2] <= ((safe_add_func_uint64_t_u_u((p_32 == (((safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s(0xFEL, 0xAEL)) | 1L), 0)) >= p_32) & l_854), (**g_251))) ^ (*g_252)), 6)) , l_910[1][0][0]), l_911)) ^ 0x20L) , 0x1D00C47E282045EBLL)), l_823.f0)) == p_32)) > (*g_264)), l_795)) , p_32) || l_912)))) & p_31.f0)), g_227[4])), p_31.f0))))), l_911)), l_913))))));
        }
        for (g_75 = 0; (g_75 >= 32); g_75++)
        { 
            int64_t l_918 = (-5L);
            int32_t l_933[7] = {1L,1L,1L,1L,1L,1L,1L};
            struct S0 l_943[6] = {{0x7F61F2AFL,1L},{0x7F61F2AFL,1L},{0x7F61F2AFL,1L},{0x7F61F2AFL,1L},{0x7F61F2AFL,1L},{0x7F61F2AFL,1L}};
            union U3 *l_952[2];
            uint64_t l_977 = 0x6CFD108B738BA40FLL;
            uint32_t l_992[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
            uint8_t **l_1103 = &g_1102;
            int i;
            for (i = 0; i < 2; i++)
                l_952[i] = &g_155;
            (*g_760) = (*g_760);
            if ((l_918 , (safe_add_func_int16_t_s_s(g_155.f2, ((safe_rshift_func_uint16_t_u_s(65529UL, g_185[1][4])) , ((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((((g_608 & (safe_unary_minus_func_int8_t_s((l_928 == &p_30)))) >= 3UL) != l_918), 7)) | (*g_760)), p_32)) , (**g_251)))))))
            { 
                int32_t *l_929 = &g_101.f1.f1;
                int32_t l_935 = 0x0705513BL;
                int32_t l_936 = 0L;
                uint64_t l_937 = 18446744073709551615UL;
                const int64_t *l_942 = &g_26[6];
                g_735 = l_929;
                for (g_155.f1 = 0; (g_155.f1 == 51); g_155.f1 = safe_add_func_int16_t_s_s(g_155.f1, 6))
                { 
                    int16_t l_932 = (-8L);
                    int32_t l_934 = 0xD7DD55E6L;
                    int64_t * const l_941 = (void*)0;
                    --l_937;
                    l_943[0] = (l_823 = func_39((l_940 , func_41(l_941, l_942, l_932))));
                }
            }
            else
            { 
                int32_t l_954 = 0x45A54291L;
                int32_t l_957 = 0x9EE5065BL;
                int32_t l_995 = (-1L);
                int32_t l_996[2];
                uint64_t l_997[6] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                int i;
                for (i = 0; i < 2; i++)
                    l_996[i] = 0xBB7472B4L;
                for (l_823.f1 = 0; (l_823.f1 < 18); l_823.f1 = safe_add_func_uint8_t_u_u(l_823.f1, 9))
                { 
                    union U3 *l_953 = (void*)0;
                    uint16_t *l_955[3][7][4] = {{{&g_75,&g_75,&g_333,(void*)0},{&g_333,(void*)0,&g_75,(void*)0},{&g_75,&g_333,&g_75,&g_333},{&g_333,&g_75,(void*)0,&g_75},{&g_333,&g_75,&g_75,&g_75},{&g_333,&g_333,&g_333,(void*)0},{&g_333,&g_75,&g_333,(void*)0}},{{&g_333,&g_75,&g_75,&g_333},{&g_333,&g_75,&g_75,(void*)0},{&g_75,&g_75,&g_75,(void*)0},{&g_333,&g_333,&g_333,&g_75},{&g_75,&g_75,&g_333,&g_75},{(void*)0,&g_75,&g_75,&g_333},{&g_333,&g_333,&g_333,(void*)0}},{{&g_333,(void*)0,&g_75,(void*)0},{&g_75,&g_75,&g_333,&g_333},{&g_333,(void*)0,(void*)0,(void*)0},{&g_333,&g_75,(void*)0,&g_333},{&g_333,&g_333,(void*)0,(void*)0},{&g_333,&g_333,&g_333,&g_75},{&g_75,&g_75,&g_75,&g_333}}};
                    int32_t l_956[1];
                    uint32_t l_958 = 0UL;
                    union U1 l_966 = {5UL};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_956[i] = (-7L);
                    l_979 = (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(p_31.f2, ((l_952[0] == l_953) <= ((--l_958) | (g_399 && (safe_unary_minus_func_int64_t_s((safe_div_func_int32_t_s_s(((*g_760) = (safe_add_func_int32_t_s_s((l_966 , (safe_mul_func_int16_t_s_s((!(safe_add_func_int32_t_s_s((!((safe_div_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((p_31 , (l_977 < p_32)) != p_31.f0), l_768)) ^ g_978), 65535UL)) | l_957)), 0xAF745C9DL))), (*g_252)))), p_32))), 0x1703DE67L))))))))), l_794[1])), l_957));
                    if (p_32)
                        break;
                    l_933[6] = (l_954 && ((safe_mod_func_uint16_t_u_u((l_943[0].f1 = (l_957 = (**g_251))), ((p_31.f2 == ((8UL > (safe_mod_func_uint32_t_u_u((l_954 == (safe_div_func_uint8_t_u_u((l_958 || (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((p_31.f2 , l_913), 2)), 5))), l_954))), l_954))) > 1L)) & p_32))) , p_31.f0));
                }
                for (g_237 = 9; (g_237 <= 36); g_237++)
                { 
                    l_992[3]--;
                    if (p_31.f0)
                        continue;
                }
                --l_997[1];
            }
            for (g_231 = 0; (g_231 <= 56); ++g_231)
            { 
                int8_t l_1012 = 0x80L;
                int32_t l_1038 = 0x003BAC1CL;
                int32_t l_1039[5][2] = {{0x882F52CEL,0xA6A46220L},{0x882F52CEL,0x882F52CEL},{0xA6A46220L,0x882F52CEL},{0x882F52CEL,0xA6A46220L},{0x882F52CEL,0x882F52CEL}};
                union U3 l_1067 = {0xB058L};
                int64_t l_1105 = 0xE3D7120DF0ED38B7LL;
                struct S0 l_1107 = {0x40D4BCCCL,0x143192DEL};
                uint16_t *l_1111[5];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_1111[i] = (void*)0;
                if (((((-5L) != 1L) & g_101.f1.f0) > (safe_add_func_int8_t_s_s((safe_div_func_uint64_t_u_u((g_720 , (safe_mul_func_int8_t_s_s(0x29L, (p_32 || ((safe_add_func_uint64_t_u_u(((((safe_sub_func_int64_t_s_s(l_1012, 0x1372F0CBF445BF2CLL)) > (-1L)) != p_31.f0) , 0x3439953745301697LL), 1UL)) || 2L))))), l_977)), p_32))))
                { 
                    uint32_t l_1013 = 0x6C521C5BL;
                    struct S0 ****l_1026 = &l_1024;
                    struct S0 ***l_1028 = &l_1025;
                    struct S0 ****l_1027 = &l_1028;
                    uint64_t *l_1036 = &l_977;
                    uint16_t *l_1037 = &g_333;
                    int32_t l_1040[7][2] = {{0x3F2E7BC1L,0x3F2E7BC1L},{8L,0L},{0L,0L},{8L,0x93D12E0CL},{0x93D12E0CL,8L},{0L,0L},{0L,8L}};
                    uint64_t l_1047 = 0xA727D654BC93E557LL;
                    int32_t *l_1062 = &l_845;
                    int i, j;
                    l_1013 = (*g_760);
                    l_1038 &= ((safe_rshift_func_uint16_t_u_u(((*l_1037) = (safe_div_func_int8_t_s_s(((safe_div_func_int8_t_s_s(((g_1021 = l_1020) != ((*l_1027) = ((*l_1026) = l_1024))), ((safe_sub_func_uint64_t_u_u(((*l_1036) = ((l_730 != (l_1031[4] , (void*)0)) & ((safe_rshift_func_int16_t_s_u((-4L), (0x6019L != 0UL))) || l_854))), p_32)) || p_31.f2))) , l_940), (*g_264)))), 11)) ^ 0L);
                    l_1047++;
                    l_933[6] ^= (l_1050[5][0][2] , ((((*g_264) = (*g_264)) < ((safe_rshift_func_int16_t_s_u(((p_31.f0 <= (safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(((l_1047 == (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int64_t_s(p_31.f2)), l_823.f0))) >= (((l_1062 != &g_978) || l_1012) != 1UL)), p_32)), 0)) >= l_854) < p_31.f2) && g_646), g_2))) > l_1041), l_1040[2][0])) > p_31.f2)) == l_768));
                    g_185[1][2] ^= ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((((((((*l_863) |= ((g_720 , l_1067) , p_31.f2)) >= (((p_32 > (((*g_264) = (safe_mul_func_uint16_t_u_u(((l_793 ^= ((0x0997DF81L < ((g_1070 , (l_933[3] = l_1013)) | p_31.f2)) ^ p_31.f2)) != l_1012), (**g_251)))) > l_1067.f0)) < p_31.f2) == l_854)) <= (-1L)) == p_31.f2) ^ l_1038) , 0x783705F2L), 1UL)), 3L)) | 0x130DCDF86FFDD4D7LL);
                }
                else
                { 
                    if (l_912)
                        goto lbl_1071;
                }
                for (l_762 = 0; (l_762 <= 3); l_762 += 1)
                { 
                    int64_t l_1072 = 0x9D48DAA67270BC07LL;
                    int32_t l_1073 = 0L;
                    int32_t l_1074 = (-10L);
                    int32_t l_1075[3][1];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1075[i][j] = 0L;
                    }
                    g_1076--;
                }
                for (l_781 = 1; (l_781 <= 4); l_781 += 1)
                { 
                    int16_t l_1086 = 0x6232L;
                    uint32_t *l_1087 = &g_229[2][0][1];
                    struct S0 *l_1096 = &l_823;
                    int32_t l_1104 = 0x0E5C357FL;
                    int32_t l_1106 = 1L;
                    l_1039[3][1] = (((*l_1087) = (safe_sub_func_int8_t_s_s((((*g_760) |= (safe_rshift_func_int16_t_s_u(((func_39((**g_248)) , l_1083) == (void*)0), 7))) && (safe_rshift_func_int16_t_s_u(((l_1086 >= 0xF2L) | l_1086), l_1086))), g_151))) || g_21.f2);
                    (*g_760) = (l_1086 > ((safe_div_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(0x85L, (l_1106 |= ((safe_mul_func_uint16_t_u_u(((g_621 = ((safe_div_func_int16_t_s_s((l_1096 != (void*)0), (safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((g_1101 == l_1103) , ((((l_933[3] = (((0x5F22599DF66DD3ECLL != l_1104) , 0x308EC035L) >= 9UL)) | (*g_264)) | p_31.f2) < l_1105)), 6L)), 0x199874CFL)))) ^ 7UL)) > 0xC27DL), p_31.f2)) , (*g_1102))))) >= g_2), (-1L))) , p_31.f2));
                }
                l_1107 = l_943[0];
                p_32 &= (+((safe_lshift_func_uint16_t_u_u((l_1112[3][1][6]--), 10)) , l_1046));
            }
            if (p_31.f2)
                break;
            return g_129[1];
        }
    }
    else
    { 
        uint64_t *l_1123 = &g_237;
        struct S0 l_1126 = {0L,0L};
        struct S0 l_1130 = {0x745F4BCAL,0xF89F1FCBL};
        for (g_646 = 0; (g_646 == 9); g_646 = safe_add_func_int64_t_s_s(g_646, 6))
        { 
            uint32_t l_1117 = 4294967294UL;
            return l_1117;
        }
        l_1130 = (l_1126 = ((((~(safe_lshift_func_uint8_t_u_s(8UL, 6))) <= (safe_mul_func_uint64_t_u_u(((*l_1123) = g_94), ((((safe_mod_func_uint16_t_u_u(((l_1126 , g_978) >= (p_32 != (safe_unary_minus_func_uint64_t_u((safe_sub_func_int32_t_s_s((-1L), 4294967295UL)))))), g_978)) || 1UL) <= p_32) < 6UL)))) >= (*g_760)) , l_1126));
    }
    return g_26[1];
}



static union U4 * func_33(struct S0  p_34, uint32_t  p_35, int8_t * p_36, int64_t  p_37, uint16_t  p_38)
{ 
    const uint16_t l_270 = 0xCCDEL;
    uint32_t l_298[2];
    uint16_t l_305 = 0x1474L;
    int32_t * const l_308 = &g_2;
    int32_t l_311 = 0x59F6053CL;
    int32_t l_312 = 0x049319BCL;
    int32_t l_314 = 0x1E57EB0DL;
    int32_t l_323[1];
    const union U4 * const l_377 = (void*)0;
    uint16_t **l_411[2];
    uint16_t ***l_410 = &l_411[1];
    uint32_t l_467 = 4294967289UL;
    const int32_t l_500 = 8L;
    struct S0 *l_540 = &g_101.f1;
    struct S0 **l_539 = &l_540;
    struct S0 ***l_538[1][2][5] = {{{&l_539,&l_539,&l_539,&l_539,&l_539},{&l_539,&l_539,&l_539,&l_539,&l_539}}};
    union U3 *l_575[3];
    int64_t **l_586 = &g_139;
    uint64_t l_693 = 18446744073709551615UL;
    int16_t l_698 = 0xF323L;
    union U4 *l_719 = &g_101;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_298[i] = 4294967295UL;
    for (i = 0; i < 1; i++)
        l_323[i] = 0x9284DA9FL;
    for (i = 0; i < 2; i++)
        l_411[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_575[i] = &g_155;
lbl_300:
    for (g_101.f1.f1 = 0; (g_101.f1.f1 <= (-1)); g_101.f1.f1 = safe_sub_func_int64_t_s_s(g_101.f1.f1, 1))
    { 
        for (g_265 = 0; (g_265 != 10); g_265 = safe_add_func_int8_t_s_s(g_265, 1))
        { 
            int32_t *l_271 = &g_185[4][2];
            int64_t ****l_273[4][1] = {{(void*)0},{&g_248},{(void*)0},{&g_248}};
            int64_t *****l_272[4][3][1] = {{{&l_273[0][0]},{&l_273[0][0]},{(void*)0}},{{(void*)0},{&l_273[0][0]},{&l_273[0][0]}},{{&l_273[0][0]},{(void*)0},{(void*)0}},{{&l_273[0][0]},{&l_273[0][0]},{&l_273[0][0]}}};
            int i, j, k;
            (*l_271) = l_270;
            g_274[0][0][0] = &g_248;
        }
    }
lbl_404:
    for (g_71 = 4; (g_71 <= 3); g_71 = safe_sub_func_uint32_t_u_u(g_71, 2))
    { 
        struct S0 *l_278 = &g_101.f1;
        struct S0 **l_277 = &l_278;
        int32_t l_299 = 0xBC088E69L;
        int32_t l_328 = 0xC15214DAL;
        int32_t l_329 = 1L;
        int32_t l_330 = 0xA47882F8L;
        int32_t l_332 = 0xD9D19841L;
        int32_t l_336 = 0xE0B96589L;
        int32_t l_340 = 0x5CF57141L;
        int32_t l_341 = (-10L);
        int32_t l_342 = 0x8323D87DL;
        int32_t l_343 = 0x1565E2D1L;
        uint8_t l_344 = 255UL;
        union U3 * const l_361 = &g_155;
        (*l_277) = &p_34;
        for (g_237 = 0; (g_237 >= 2); ++g_237)
        { 
            int32_t l_285 = 1L;
            int32_t *l_310 = &g_2;
            int32_t l_313 = 0L;
            int32_t l_315 = 2L;
            int32_t l_317 = 0x98FE0E62L;
            int32_t l_319 = 0xD0DBD0D2L;
            int32_t l_322 = 0xED8269C4L;
            int32_t l_325 = (-1L);
            int32_t l_326 = 0xB5618F28L;
            int32_t l_331 = 1L;
            int32_t l_338 = 0x0B7A4064L;
            if (p_37)
                break;
            for (g_94 = (-7); (g_94 > 25); g_94 = safe_add_func_uint32_t_u_u(g_94, 4))
            { 
                int32_t *l_283 = (void*)0;
                int32_t *l_284 = &g_185[4][5];
                int32_t *l_301 = &g_101.f1.f1;
                int32_t *l_302 = &g_101.f1.f1;
                int32_t *l_303 = (void*)0;
                int32_t *l_304[4][7][5] = {{{&l_299,(void*)0,&g_185[0][0],&l_299,&g_2},{&g_185[0][0],(void*)0,&g_2,&g_2,(void*)0},{&g_2,(void*)0,&g_101.f1.f1,&g_185[2][4],&g_185[1][3]},{&g_185[0][0],(void*)0,&g_101.f1.f1,(void*)0,&g_185[0][0]},{&g_101.f1.f1,(void*)0,&g_2,&g_185[2][3],&l_299},{&g_185[0][0],&g_185[2][2],&g_185[2][2],&g_185[0][0],&g_2},{&g_2,&l_299,&g_185[0][0],(void*)0,&l_299}},{{&g_185[0][0],&g_185[0][0],&g_185[0][0],&g_2,&g_185[0][0]},{&l_299,(void*)0,&g_185[1][3],(void*)0,&g_185[1][3]},{&l_299,&l_299,&g_101.f1.f1,&g_185[0][0],(void*)0},{&g_101.f1.f1,&g_185[2][4],&g_185[1][3],&g_185[2][3],&g_2},{(void*)0,&g_185[2][2],&g_185[0][0],(void*)0,&g_2},{&g_2,&g_185[2][4],&g_185[0][0],&g_185[2][4],&g_2},{&g_185[0][0],&l_299,&g_185[2][2],&g_2,&l_299}},{{&g_2,(void*)0,&g_2,&l_299,&g_185[1][3]},{(void*)0,&g_185[0][0],&g_101.f1.f1,&l_299,&l_299},{&g_101.f1.f1,&l_299,&g_101.f1.f1,&g_185[2][3],&g_2},{&l_299,&g_185[2][2],&g_2,&l_299,&g_2},{&l_299,(void*)0,&g_185[0][0],&l_299,&g_2},{&g_185[0][0],(void*)0,&g_2,&g_2,(void*)0},{&g_2,(void*)0,&g_101.f1.f1,&g_185[2][4],&g_185[1][3]}},{{&g_185[0][0],(void*)0,&g_101.f1.f1,(void*)0,&g_185[0][0]},{&g_101.f1.f1,(void*)0,&g_2,&g_185[2][3],&l_299},{&g_185[0][0],&g_185[2][2],&g_185[2][2],&g_185[0][0],&g_2},{&g_2,&l_299,&g_185[0][0],(void*)0,&l_299},{&g_185[0][0],&g_185[0][0],&g_185[0][0],&g_2,&g_185[0][0]},{&l_299,(void*)0,&g_185[1][3],(void*)0,&g_185[1][3]},{&l_299,&l_299,&g_101.f1.f1,&g_185[0][0],(void*)0}}};
                int16_t l_339 = 1L;
                int i, j, k;
                (*l_284) ^= 6L;
                for (p_34.f1 = 0; (p_34.f1 <= 1); p_34.f1 += 1)
                { 
                    int i, j;
                    l_285 = 8L;
                    (*l_284) ^= (safe_sub_func_int16_t_s_s((((((g_26[(p_34.f1 + 2)] ^= ((void*)0 == &p_35)) > (safe_add_func_uint8_t_u_u((g_237 ^ (g_154[p_34.f1][p_34.f1] != g_154[p_34.f1][p_34.f1])), ((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0x83L, (safe_lshift_func_int8_t_s_s((l_298[1] = (((safe_mod_func_uint64_t_u_u(0x7376010C94A9A175LL, l_285)) & (*g_252)) == l_270)), 2)))), l_270)) == l_299)))) && g_26[(p_34.f1 + 2)]) , 4294967288UL) <= p_34.f1), 0x35A8L));
                    if (g_71)
                        goto lbl_300;
                }
                ++l_305;
                for (g_101.f1.f1 = 5; (g_101.f1.f1 >= 0); g_101.f1.f1 -= 1)
                { 
                    int32_t *l_309 = &l_299;
                    l_309 = l_308;
                    g_198 = l_310;
                }
                if (p_37)
                { 
                    int8_t l_316 = 7L;
                    int32_t l_318 = 0xF883B221L;
                    int32_t l_320 = 0x9A92F3D4L;
                    int32_t l_321 = 0x0E9A27FEL;
                    int32_t l_324 = 0xCB39F021L;
                    int32_t l_327[4][5] = {{0x9AA457E3L,0x9086DFAEL,0x9086DFAEL,0x9AA457E3L,9L},{0L,7L,7L,0L,0L},{0x9AA457E3L,0x9086DFAEL,0x9086DFAEL,0x407B66DBL,(-10L)},{0x8FFBC86CL,0L,0L,0x8FFBC86CL,1L}};
                    int32_t l_337 = 0L;
                    int i, j;
                    g_333--;
                    l_344--;
                }
                else
                { 
                    int32_t **l_347 = (void*)0;
                    g_198 = &g_185[3][5];
                }
            }
            if (l_305)
                goto lbl_300;
        }
        if (p_38)
            continue;
        for (p_38 = 0; (p_38 == 25); ++p_38)
        { 
            union U3 *l_360 = &g_155;
            int32_t l_364 = 6L;
            int32_t l_365 = 1L;
            int32_t *l_366[3];
            int32_t **l_367 = &l_366[0];
            int i;
            for (i = 0; i < 3; i++)
                l_366[i] = &l_328;
            if (p_35)
                break;
            p_34.f1 &= p_34.f0;
            p_34.f1 &= (l_365 &= (safe_rshift_func_int16_t_s_u((((**g_251) = (safe_add_func_uint8_t_u_u(((p_37 != ((safe_div_func_uint16_t_u_u(p_34.f0, (safe_mul_func_uint16_t_u_u((l_360 != l_361), ((safe_lshift_func_uint8_t_u_s((((void*)0 != &g_265) && (g_101.f1 , p_38)), 6)) ^ g_233))))) <= 0UL)) != 0UL), l_364))) != l_364), 14)));
            (*l_367) = &g_185[0][0];
            if ((*l_308))
                continue;
        }
    }
lbl_625:
    for (p_37 = 1; (p_37 >= 0); p_37 -= 1)
    { 
        int32_t l_384 = 0xB3D1CA73L;
        int32_t l_385 = (-7L);
        int64_t *l_397 = &g_26[6];
        int64_t ****l_403 = &g_248;
        uint16_t ***l_408 = (void*)0;
        union U4 *l_441 = &g_101;
        struct S0 l_442 = {2L,0xE6880C44L};
        struct S0 *l_443 = (void*)0;
        struct S0 *l_444 = &l_442;
        int32_t l_473 = 4L;
        int32_t l_476 = 0xC93E8A59L;
        int32_t l_481 = 0L;
        int32_t l_482 = (-9L);
        int32_t l_483 = 0x3F30FC3AL;
        int32_t l_484 = 0xE5800BC1L;
        int32_t l_485 = 7L;
        int32_t l_486 = (-6L);
        int32_t l_487 = 0L;
        int32_t l_488 = (-7L);
        int64_t l_489 = (-1L);
        int32_t l_490 = 0x71880921L;
        int32_t l_491 = 0x90D084EBL;
        union U3 l_532 = {0L};
        struct S0 ***l_542 = &l_539;
        int i;
        for (l_305 = 0; (l_305 <= 0); l_305 += 1)
        { 
            uint16_t l_388 = 0xE7E1L;
            int32_t l_391 = 0x2618BB75L;
            uint8_t l_394 = 252UL;
            int32_t *l_422 = &l_314;
            for (g_155.f2 = 0; (g_155.f2 <= 5); g_155.f2 += 1)
            { 
                uint64_t *l_375 = &g_237;
                int32_t l_392 = 1L;
                int16_t l_393 = 0x189CL;
                int64_t **l_398[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_398[i] = &l_397;
                l_323[l_305] &= (safe_unary_minus_func_uint32_t_u(4294967295UL));
                for (g_333 = 0; (g_333 <= 5); g_333 += 1)
                { 
                    int i, j, k;
                    g_185[(p_37 + 3)][(l_305 + 1)] = ((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((((l_375 == ((!(l_377 == (((safe_unary_minus_func_uint8_t_u((safe_mod_func_int64_t_s_s((!(safe_lshift_func_uint8_t_u_s(g_227[(l_305 + 4)], ((*g_264) = ((l_384 = l_323[l_305]) , (((void*)0 != &l_308) && g_229[(l_305 + 2)][p_37][(p_37 + 2)])))))), g_185[(g_333 + 1)][(p_37 + 1)])))) & l_323[l_305]) , l_377))) , (void*)0)) && 0xAEL) , g_229[(l_305 + 2)][p_37][(p_37 + 2)]) >= 0x3020L) <= p_37), p_35)), (*l_308))), p_38)) >= l_385);
                    if (g_101.f1.f1)
                        continue;
                }
                for (g_233 = 0; (g_233 <= 5); g_233 += 1)
                { 
                    union U4 *l_386 = &g_101;
                    return l_386;
                }
                for (g_237 = 0; (g_237 <= 5); g_237 += 1)
                { 
                    int32_t *l_387[7] = {&l_384,&l_384,&l_384,&l_384,&l_384,&l_384,&l_384};
                    int64_t *****l_400 = &g_274[0][0][0];
                    int64_t ****l_402 = &g_248;
                    int64_t *****l_401[4][3] = {{&l_402,&l_402,(void*)0},{&l_402,(void*)0,(void*)0},{(void*)0,&l_402,&l_402},{&l_402,&l_402,&l_402}};
                    int i, j, k;
                    l_388++;
                    ++l_394;
                    g_399 ^= (((g_227[(l_305 + 2)] && (g_101.f1 , ((((func_39(l_397) , l_398[2]) == (void*)0) > l_323[l_305]) , g_229[(p_37 + 4)][p_37][(l_305 + 4)]))) && g_185[(p_37 + 3)][(l_305 + 5)]) , p_34.f1);
                    l_403 = ((*l_400) = &g_248);
                    if (g_333)
                        goto lbl_404;
                }
            }
            g_198 = &l_385;
            for (p_34.f1 = 0; (p_34.f1 <= 1); p_34.f1 += 1)
            { 
                uint8_t l_416[2][4][2];
                int32_t *l_420 = &g_185[4][3];
                int32_t **l_421[4][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_416[i][j][k] = 0UL;
                    }
                }
                for (g_265 = 5; (g_265 >= 0); g_265 -= 1)
                { 
                    uint64_t *l_405 = &g_237;
                    uint16_t ***l_409 = (void*)0;
                    int32_t *l_414[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_414[i] = (void*)0;
                    l_312 = (((*l_405) = g_227[p_37]) , ((*g_198) = ((safe_add_func_uint32_t_u_u(((l_409 = l_408) == l_410), 0x97B7D34FL)) >= (safe_mul_func_uint8_t_u_u(g_227[p_37], 0xD5L)))));
                }
                for (g_233 = 0; (g_233 <= 1); g_233 += 1)
                { 
                    int32_t *l_415 = (void*)0;
                    int32_t l_419 = 0x516B679FL;
                    l_416[1][1][1]--;
                    if (l_419)
                        break;
                }
                l_422 = (g_198 = l_420);
                (*l_420) = (safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((*g_252), g_227[4])) > ((safe_add_func_uint32_t_u_u(p_38, (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((l_385 <= (((*l_422) >= (((g_155.f2--) && (18446744073709551606UL > ((*l_397) = (safe_mul_func_int16_t_s_s(g_129[1], l_384))))) < (*l_422))) || (*l_420))), p_35)) > 1UL), g_227[0])), 3)))) | p_34.f1)), g_151));
            }
        }
        if (g_101.f1.f1)
            goto lbl_404;
        for (g_231 = 0; (g_231 <= 5); g_231 += 1)
        { 
            int32_t ***l_439 = (void*)0;
            int32_t ****l_440 = &l_439;
            (*l_440) = l_439;
            return l_441;
        }
        (*l_444) = l_442;
        g_185[0][0] = g_227[(p_37 + 3)];
        for (g_231 = 0; (g_231 <= 0); g_231 += 1)
        { 
            int32_t *l_445[5][3][2] = {{{&g_101.f1.f0,(void*)0},{&l_442.f0,&g_101.f1.f0},{&g_101.f1.f0,&g_101.f1.f0}},{{&g_101.f1.f0,&g_101.f1.f0},{&l_442.f0,(void*)0},{&g_101.f1.f0,(void*)0}},{{&l_442.f0,&g_101.f1.f0},{&g_101.f1.f0,&g_101.f1.f0},{&g_101.f1.f0,&g_101.f1.f0}},{{&l_442.f0,(void*)0},{&g_101.f1.f0,(void*)0},{&l_442.f0,&g_101.f1.f0}},{{&g_101.f1.f0,&g_101.f1.f0},{&g_101.f1.f0,&g_101.f1.f0},{&l_442.f0,(void*)0}}};
            uint16_t ****l_449 = &l_408;
            int32_t l_477[2];
            int16_t l_478[6][1];
            uint8_t l_492 = 0xDAL;
            int32_t l_552 = (-6L);
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_477[i] = 0x2A371FB9L;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                    l_478[i][j] = 0x508EL;
            }
            if (((l_385 &= l_323[g_231]) , l_323[g_231]))
            { 
                int32_t **l_446 = &g_198;
                int i;
                (*l_444) = p_34;
                (*l_446) = &l_323[g_231];
                if (l_323[g_231])
                    break;
                (*l_446) = &l_323[g_231];
                (*l_446) = (void*)0;
            }
            else
            { 
                uint16_t ****l_447 = &l_410;
                const int32_t l_465 = 8L;
                int32_t l_470 = 7L;
                int32_t l_471 = 0L;
                int32_t l_472 = 8L;
                int32_t l_474 = (-3L);
                int32_t l_475 = 0L;
                int32_t l_479 = 0x266A009DL;
                int32_t l_480[5][4][6] = {{{1L,7L,(-8L),1L,(-4L),(-9L)},{1L,(-1L),0xAD2903A7L,0x95F754D5L,7L,0x45C7B378L},{0x933A7EF6L,0x1C9B4789L,(-1L),(-8L),(-1L),0xE0EE7DC0L},{0x95F754D5L,0x23DC6AB2L,9L,0x7F858093L,4L,0x843554DDL}},{{0x45C7B378L,0L,0L,0L,(-7L),(-10L)},{0L,0x4B2E9253L,6L,(-1L),(-1L),(-1L)},{0xF8074F60L,(-6L),(-6L),0xF8074F60L,9L,0x933A7EF6L},{0L,0x10AEA30CL,0L,(-1L),8L,(-8L)}},{{0x3E75BF86L,0xF52F20D9L,(-8L),0xAD2903A7L,8L,(-1L)},{0x73459280L,0x10AEA30CL,0x843554DDL,(-1L),9L,0L},{0xEA0B25DEL,(-6L),0x23DC6AB2L,0xEB6D2009L,(-1L),0x7F858093L},{(-10L),0x4B2E9253L,0xF8074F60L,(-4L),(-7L),0x1C9B4789L}},{{0x10AEA30CL,0L,1L,(-1L),4L,7L},{(-1L),0x23DC6AB2L,1L,0x8C5D8B13L,(-1L),0L},{(-8L),0x1C9B4789L,(-4L),6L,7L,0xAD2903A7L},{0xEB6D2009L,(-1L),(-1L),4L,(-4L),4L}},{{(-1L),7L,(-1L),0x5B7BF6CDL,0L,(-4L)},{0x23DC6AB2L,8L,0x3E75BF86L,0x1C9B4789L,1L,(-4L)},{9L,0L,(-4L),0x7F858093L,1L,0xBD44E643L},{0xF9994010L,0x1C9B4789L,0x10AEA30CL,0xBD44E643L,0x7F858093L,0xD6582A0AL}}};
                int i, j, k;
                for (g_399 = 0; (g_399 <= 0); g_399 += 1)
                { 
                    uint16_t *****l_448[3][7] = {{&l_447,&l_447,(void*)0,(void*)0,&l_447,(void*)0,(void*)0},{&l_447,&l_447,&l_447,&l_447,(void*)0,&l_447,(void*)0},{&l_447,(void*)0,(void*)0,&l_447,(void*)0,&l_447,&l_447}};
                    int32_t *l_466 = &l_314;
                    int32_t *l_468 = (void*)0;
                    int32_t *l_469[7] = {&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2};
                    int i, j, k;
                    l_449 = l_447;
                    l_323[g_231] = 7L;
                    if (l_385)
                        goto lbl_404;
                    g_101.f1.f1 |= (((*l_466) = ((((safe_lshift_func_int16_t_s_s(1L, 0)) | (safe_mod_func_uint8_t_u_u((g_155.f2 = (((safe_mod_func_uint16_t_u_u(((void*)0 == &l_323[g_231]), (safe_lshift_func_int8_t_s_u(((*g_264) = (~(safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_int64_t_s_s(((*l_397) &= g_229[(g_231 + 1)][g_399][(g_399 + 5)]), 0xAC1D83111AF98608LL)), (((((g_229[(g_231 + 5)][g_231][(g_399 + 3)] | 0L) & l_465) | p_37) <= p_34.f1) == g_75))), l_385)))), g_229[4][0][5])))) <= p_37) && p_38)), g_94))) > 0x7DC054A8L) ^ 0xFD0A315EL)) , l_467);
                    --l_492;
                }
            }
            for (l_482 = 1; (l_482 >= 0); l_482 -= 1)
            { 
                int32_t *l_503 = (void*)0;
                int32_t l_533[6] = {0L,0L,0L,0L,0L,0L};
                int32_t l_535 = 0x5CDE60C6L;
                int32_t *l_537 = &l_312;
                int i;
                for (g_101.f1.f0 = 0; (g_101.f1.f0 <= 1); g_101.f1.f0 += 1)
                { 
                    uint16_t *****l_499 = &l_449;
                    const int32_t *l_505 = &l_500;
                    const int32_t **l_504 = &l_505;
                    int32_t *l_506 = &l_314;
                    int32_t *l_507 = &l_442.f1;
                    if (l_323[g_231])
                        break;
                    (*l_499) = g_495;
                    if (l_500)
                        break;
                    (*l_507) ^= ((*l_506) = (safe_sub_func_int64_t_s_s((l_503 != ((*l_504) = l_445[4][1][0])), p_35)));
                    if (p_38)
                        continue;
                }
                for (l_314 = 1; (l_314 >= 0); l_314 -= 1)
                { 
                    int32_t l_512 = (-1L);
                    int16_t *l_534 = &l_478[5][0];
                    int32_t *l_536 = &l_484;
                    struct S0 ****l_541[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_541[i] = &l_538[0][1][3];
                    (*l_536) = ((safe_sub_func_int64_t_s_s((((((safe_add_func_int8_t_s_s(l_512, (safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((&p_35 != ((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(1L, ((p_37 , ((g_21 , (safe_div_func_int16_t_s_s(((*l_534) = (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(((((((safe_lshift_func_uint8_t_u_s(g_21.f0, 2)) < (l_532 , l_512)) > (*p_36)) >= 0xABC45B57AEF369DELL) & 0x2B04L) <= 0x5489L))), 0)), l_533[4]))), l_535))) || 0xC6DCL)) == 0UL))) == 0xD101L), (**g_251))), p_35)) , (void*)0)), p_34.f1)), p_34.f1)))) , p_34.f1) ^ l_512) || g_101.f1.f0) || 0x0DE1L), 3UL)) && (*l_308));
                    l_537 = &l_477[1];
                    l_542 = l_538[0][1][3];
                }
                for (l_311 = 0; (l_311 <= 1); l_311 += 1)
                { 
                    int16_t *l_551[2][1][2] = {{{&l_478[5][0],&l_478[5][0]}},{{&l_478[5][0],&l_478[5][0]}}};
                    int i, j, k;
                    l_533[4] ^= ((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((p_35 < (((void*)0 != &l_535) || ((((safe_mod_func_uint32_t_u_u(((l_552 ^= p_34.f0) , p_38), (*l_537))) > (safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((+p_38), 0xA03DL)), (*l_537))), p_35)), 15))) != 0x4FL) ^ l_532.f0))), (*l_537))), (*p_36))), (*l_308))) >= 0x561E1EDDL);
                    if (g_75)
                        break;
                }
            }
            for (l_483 = 1; (l_483 >= 0); l_483 -= 1)
            { 
                if (l_490)
                    break;
            }
        }
    }
    for (p_34.f1 = 0; (p_34.f1 <= 3); p_34.f1 = safe_add_func_uint32_t_u_u(p_34.f1, 8))
    { 
        int32_t *l_564 = &g_185[4][4];
        union U1 l_594 = {4294967286UL};
        int32_t l_626[3];
        int8_t l_628[1][3][2] = {{{0x79L,0x79L},{0x79L,0x79L},{0x79L,0x79L}}};
        uint8_t *l_651 = &g_646;
        union U4 l_654 = {-4L};
        uint16_t ****l_669 = &l_410;
        union U3 l_678 = {0xF947L};
        int64_t l_692 = 0L;
        int32_t *l_717 = (void*)0;
        int32_t *l_718 = &l_314;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_626[i] = 0xED185C7DL;
        (*l_564) |= 8L;
        if ((safe_lshift_func_int8_t_s_u(0L, g_2)))
        { 
            int32_t l_570 = 0x20925220L;
            int64_t l_585[4];
            int32_t l_627 = (-8L);
            int32_t l_629 = 8L;
            int32_t l_630 = 0x0B2FD4D1L;
            int32_t l_631[1][2];
            int32_t **l_635 = &l_564;
            int32_t *l_636 = &l_630;
            int32_t *l_637 = &l_631[0][1];
            int32_t *l_638 = (void*)0;
            int32_t *l_639 = &l_311;
            int32_t *l_640 = &l_627;
            int32_t *l_641 = (void*)0;
            int32_t *l_642 = &l_311;
            int32_t *l_643 = &l_626[2];
            int32_t *l_644 = &l_626[2];
            int32_t *l_645[6] = {(void*)0,&l_323[0],&l_323[0],(void*)0,&l_323[0],&l_323[0]};
            int i, j;
            for (i = 0; i < 4; i++)
                l_585[i] = 0x75CD24657ED765CDLL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_631[i][j] = 6L;
            }
            for (g_155.f2 = (-1); (g_155.f2 <= 9); ++g_155.f2)
            { 
                uint32_t l_569 = 1UL;
                union U2 l_576 = {0};
                int32_t l_587 = (-1L);
                int32_t **l_604 = (void*)0;
                int32_t ***l_603 = &l_604;
                int32_t ****l_602 = &l_603;
                int32_t ****l_613[5][6][2] = {{{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603}},{{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603}},{{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603}},{{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603}},{{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603},{&l_603,&l_603}}};
                uint16_t l_632[4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_632[i] = 0UL;
                if (l_569)
                { 
                    union U3 *l_577 = &g_155;
                    uint8_t *l_578[7][7] = {{&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76},{&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76},{&g_76,&g_76,&g_71,&g_76,&g_76,&g_71,&g_76},{&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76},{&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76},{&g_76,&g_76,&g_71,&g_76,&g_76,&g_71,&g_76},{&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76}};
                    int32_t l_584 = (-1L);
                    uint64_t *l_605 = &g_606;
                    uint64_t *l_607[1];
                    int32_t l_609 = 8L;
                    const int32_t *l_617 = &g_185[5][1];
                    const int32_t * const *l_616 = &l_617;
                    const int32_t * const **l_615 = &l_616;
                    const int32_t * const ***l_614 = &l_615;
                    int16_t *l_618 = (void*)0;
                    int16_t *l_619 = &g_399;
                    int16_t *l_620 = &g_621;
                    union U4 *l_622[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_607[i] = &g_608;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_622[i][j] = &g_101;
                    }
                    if (l_570)
                        break;
                    l_587 = (safe_rshift_func_uint8_t_u_u((((*p_36) = l_569) | (safe_lshift_func_uint8_t_u_u((g_71 = (l_575[0] == (l_576 , l_577))), (((((l_569 , (safe_mod_func_int16_t_s_s(g_229[4][0][5], (~(safe_add_func_uint16_t_u_u(((l_584 |= p_35) > l_585[1]), 0x80BAL)))))) && 0x6C1BL) != 0x8AL) , l_586) == (*g_248))))), g_26[6]));
                    l_570 = ((safe_div_func_uint16_t_u_u((255UL ^ (safe_mod_func_uint16_t_u_u(((((((((((l_609 ^= ((((g_237 <= ((((((*l_605) = ((l_594 , (safe_rshift_func_uint8_t_u_s((+(g_129[0] & (safe_sub_func_int32_t_s_s(p_34.f0, (p_38 != (safe_div_func_uint32_t_u_u(((void*)0 == l_602), g_101.f1.f0))))))), 0))) | (*p_36))) & (*l_564)) != (*p_36)) , p_34.f1) , 0x70L)) & p_38) == l_584) == 0x73F015CE1AE12948LL)) , g_155.f2) == p_37) && g_151) == (*l_564)) & l_585[3]) , l_584) && 0L) | p_38) < (*p_36)), p_34.f0))), 0xAC79L)) <= 0UL);
                    l_584 = (~(safe_lshift_func_int16_t_s_u(((*l_620) = ((*l_564) > ((*l_619) = (l_613[2][1][1] == l_614)))), 5)));
                    return l_622[0][2];
                }
                else
                { 
                    int32_t *l_623 = &l_323[0];
                    int32_t *l_624[3][4][7] = {{{&g_185[3][5],&g_2,&g_2,&l_570,&g_101.f1.f1,&g_185[3][5],&l_587},{&g_2,&l_587,&g_101.f1.f1,&l_587,&l_587,&g_101.f1.f1,&l_587},{&g_185[0][0],&l_570,&g_101.f1.f1,&l_587,&l_587,&l_323[0],(void*)0},{&l_587,&l_587,&l_312,(void*)0,&l_323[0],(void*)0,&l_587}},{{&l_312,&g_185[0][0],&g_2,&l_570,&g_2,&l_587,&g_101.f1.f1},{&l_323[0],&l_587,&l_323[0],&l_570,&l_570,&l_570,&l_323[0]},{&l_323[0],&l_323[0],&g_185[3][5],&g_185[0][0],&g_185[0][0],&l_312,(void*)0},{&l_312,&l_323[0],&g_101.f1.f1,&g_185[3][5],&g_185[3][5],&l_323[0],&g_2}},{{&g_185[3][5],&g_101.f1.f1,(void*)0,&l_587,&g_185[0][0],&g_2,&l_323[0]},{(void*)0,&g_185[0][0],(void*)0,(void*)0,&l_570,&l_570,(void*)0},{&g_185[0][0],&g_185[0][0],&g_185[0][0],&l_323[0],&g_2,&g_185[0][0],&l_587},{&l_587,&g_101.f1.f1,&g_101.f1.f1,&g_2,&l_323[0],&g_185[3][5],&g_185[3][5]}}};
                    int i, j, k;
                    l_624[2][2][6] = l_623;
                    if (p_37)
                        goto lbl_625;
                    if (l_570)
                        continue;
                    (*l_623) ^= (-10L);
                    l_632[3]--;
                }
            }
            (*l_635) = (void*)0;
            --g_646;
            if (g_21.f2)
                break;
        }
        else
        { 
            int64_t l_657 = (-9L);
            int32_t l_661 = 2L;
            int32_t l_671 = 0L;
            int32_t l_690[6];
            int i;
            for (i = 0; i < 6; i++)
                l_690[i] = 1L;
            if ((((safe_mul_func_uint16_t_u_u((*l_308), ((*l_308) & g_185[0][5]))) , l_651) == p_36))
            { 
                int16_t *l_658 = &g_621;
                int32_t l_666 = 0x3E7FA98DL;
                int32_t l_670 = 3L;
                int32_t l_691[6][7][6] = {{{0x35C17CE2L,(-8L),0x824F6FD0L,9L,9L,(-2L)},{1L,3L,0x0DEFE24FL,9L,0x4B705E7CL,0x2FAAC03FL},{0x35C17CE2L,0x82428FF0L,(-1L),0x2FAAC03FL,0xE8A61A88L,0x4B705E7CL},{(-1L),0xBE1F9605L,0x5185998BL,6L,1L,0x314407FFL},{0xBE1F9605L,3L,0L,(-1L),0xA64633ABL,0xC7CAAA63L},{0L,0x308DE587L,2L,0x895BEF40L,(-1L),1L},{(-1L),0xA64633ABL,1L,0x43E8157BL,(-8L),(-1L)}},{{0xB59585C4L,2L,0x7555E6D3L,0xB7A1E37EL,0x7257DC69L,0L},{3L,0x895BEF40L,0x66B54152L,1L,0L,0xBE1F9605L},{6L,(-1L),0x7AB201A9L,0x9B004C15L,0xDC705003L,0xDC705003L},{0L,9L,9L,0L,0x308DE587L,0x25BBCAADL},{0xB7A1E37EL,0x9B004C15L,0x8D3B5897L,0L,9L,0xE8A61A88L},{0L,0x7257DC69L,0x4B705E7CL,1L,9L,(-5L)},{0x86E67969L,0x9B004C15L,6L,0x3C962E1CL,0x308DE587L,0x3FB256AEL}},{{0L,9L,0x314407FFL,0L,0xDC705003L,(-8L)},{0x7257DC69L,(-1L),0x82428FF0L,1L,0L,1L},{0x824F6FD0L,0x895BEF40L,0x3C962E1CL,0L,0x7257DC69L,9L},{0x66B54152L,2L,1L,0x7257DC69L,(-8L),0L},{0x43E8157BL,0xA64633ABL,1L,0x5185998BL,(-1L),2L},{1L,0x308DE587L,1L,0xE8A61A88L,0xA64633ABL,(-4L)},{0x7AB201A9L,3L,9L,0xB59585C4L,1L,0xD2F95163L}},{{0xE8A61A88L,0xBE1F9605L,0L,0xB59585C4L,(-1L),0x5185998BL},{9L,0x66B54152L,3L,0x895BEF40L,0x314407FFL,0x6174A9E7L},{9L,0xBE1F9605L,9L,0x66B54152L,1L,0x6174A9E7L},{2L,0L,3L,0L,0x824F6FD0L,0x5185998BL},{1L,0L,0x7257DC69L,0x6C35032AL,(-1L),0xB7A1E37EL},{3L,(-1L),1L,0xE8A61A88L,0x895BEF40L,0L},{0xB7A1E37EL,0x0DEFE24FL,0xC7CAAA63L,(-1L),0x8D3B5897L,1L}},{{0x7555E6D3L,0x86E67969L,0L,(-2L),0xD2F95163L,0L},{0xC7CAAA63L,(-5L),0x6174A9E7L,0x7AB201A9L,9L,3L},{6L,0x895BEF40L,9L,(-1L),0xBE1F9605L,0L},{1L,0xDC705003L,0x66B54152L,0x86E67969L,1L,0L},{(-1L),2L,(-8L),(-8L),2L,(-1L)},{0x0DEFE24FL,4L,0x824F6FD0L,3L,0x7257DC69L,(-1L)},{0x308DE587L,(-2L),0x314407FFL,0x35C17CE2L,0L,(-1L)}},{{0x308DE587L,0x6C35032AL,0x35C17CE2L,3L,0x4B705E7CL,3L},{0x0DEFE24FL,0x7257DC69L,0x7AB201A9L,(-8L),9L,0x076AC0ABL},{(-1L),0x308DE587L,3L,0x86E67969L,3L,0xB59585C4L},{1L,0x82428FF0L,0x6C35032AL,(-1L),0L,9L},{6L,0L,0x0DEFE24FL,0x7AB201A9L,0x43E8157BL,0xA64633ABL},{0xC7CAAA63L,3L,(-4L),(-2L),0x86E67969L,0xE8A61A88L},{0x7555E6D3L,3L,1L,(-1L),0x35C17CE2L,0L}}};
                int i, j, k;
                if (((&p_38 != (void*)0) | ((safe_rshift_func_uint16_t_u_s((p_37 && (l_654 , p_34.f1)), ((*l_658) &= (0x9DL | ((safe_rshift_func_int16_t_s_s(g_227[4], g_21.f2)) ^ l_657))))) && p_34.f1)))
                { 
                    (*l_564) &= (safe_rshift_func_uint16_t_u_s(((((l_661 = ((*l_658) &= g_71)) , (((*l_308) || ((safe_rshift_func_uint16_t_u_s(p_38, 9)) > ((g_21.f0 > (l_666 == ((*l_658) = (l_670 = ((safe_div_func_int16_t_s_s(((void*)0 != l_669), (*l_308))) | g_75))))) != g_227[1]))) >= g_101.f1.f0)) , g_101.f1) , l_671), 2));
                }
                else
                { 
                    union U2 l_679[6][4][7] = {{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0}}}};
                    int i, j, k;
                    (*l_564) |= (safe_lshift_func_int8_t_s_u(((p_34.f0 >= ((safe_rshift_func_int16_t_s_u((p_34 , (*l_308)), (safe_div_func_int8_t_s_s((l_678 , (((*g_252) = (l_679[4][0][4] , (0x473CL < (*l_308)))) , l_666)), (*p_36))))) , p_38)) >= 3UL), g_227[0]));
                }
                for (l_654.f1.f1 = 0; (l_654.f1.f1 >= 2); l_654.f1.f1++)
                { 
                    int32_t *l_682 = &l_323[0];
                    int32_t *l_683 = (void*)0;
                    int32_t *l_684 = &l_661;
                    int32_t *l_685 = (void*)0;
                    int32_t *l_686 = (void*)0;
                    int32_t *l_687 = &l_666;
                    int32_t *l_688 = &l_314;
                    int32_t *l_689[4][2] = {{&l_666,&l_666},{&l_666,&l_666},{&l_666,&l_666},{&l_666,&l_666}};
                    int i, j;
                    l_693++;
                    if (p_38)
                        continue;
                    if (p_34.f1)
                        break;
                    if ((*l_564))
                        break;
                    (*l_688) |= (safe_div_func_uint16_t_u_u(((**g_251) = (((*l_564) = (((((&l_500 != ((*l_564) , l_684)) & (p_38 & 0x772A1A49L)) != (l_698 == (*l_564))) , g_606) < l_691[0][4][1])) && g_101.f0)), g_71));
                }
            }
            else
            { 
                union U3 **l_699 = &l_575[0];
                int32_t l_704 = 0x6C8E4AD4L;
                (*l_699) = &g_155;
                for (l_678.f2 = 1; (l_678.f2 > 37); l_678.f2++)
                { 
                    int16_t *l_715 = &l_698;
                    int32_t *l_716 = (void*)0;
                    g_101.f1.f1 |= ((safe_add_func_uint16_t_u_u(((void*)0 != &p_37), ((l_704 > (p_34.f0 ^ (safe_div_func_int16_t_s_s(((*l_715) &= ((safe_sub_func_uint64_t_u_u((l_704 >= ((**l_699) , ((safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((l_704 != 5UL), 0x20L)) != (*l_564)), g_265)), l_671)) || p_38))), (*l_308))) | l_704)), g_2)))) > l_704))) ^ 6UL);
                    if (g_151)
                        goto lbl_625;
                }
            }
        }
        (*l_718) = ((void*)0 == &g_129[1]);
    }
    return l_719;
}



static struct S0  func_39(int64_t * p_40)
{ 
    int32_t *l_260 = (void*)0;
    int32_t **l_261 = (void*)0;
    int32_t **l_262 = &l_260;
    struct S0 l_263 = {0x1F444ABCL,0xACA091E0L};
    (*l_262) = l_260;
    return l_263;
}



static int64_t * func_41(int64_t * const  p_42, const int64_t * p_43, uint64_t  p_44)
{ 
    uint32_t l_257[7][2][2] = {{{0UL,0x2A9382D2L},{0UL,0UL}},{{0x2A9382D2L,0UL},{0UL,0x2A9382D2L}},{{0UL,0UL},{0x2A9382D2L,0UL}},{{0UL,0x2A9382D2L},{0UL,0UL}},{{0x2A9382D2L,0UL},{0UL,0x2A9382D2L}},{{0UL,0UL},{0x2A9382D2L,0UL}},{{0UL,0x2A9382D2L},{0UL,0UL}}};
    int32_t *l_258 = &g_185[3][5];
    int64_t *l_259 = &g_101.f0;
    int i, j, k;
    (*l_258) |= (l_257[4][0][1] | 0xA2L);
    return l_259;
}



static const int64_t * func_45(union U1 * p_46, uint64_t  p_47)
{ 
    int16_t l_55 = 0L;
    int32_t l_93 = 1L;
    int64_t *l_110 = &g_26[6];
    union U3 *l_156 = (void*)0;
    uint16_t l_183 = 0xE7EEL;
    int32_t l_188 = (-1L);
    int32_t l_189[6] = {0L,(-1L),0L,0L,(-1L),0L};
    struct S0 l_210 = {8L,7L};
    int32_t *l_243 = (void*)0;
    int64_t ****l_250[7] = {&g_248,&g_248,&g_248,&g_248,&g_248,&g_248,&g_248};
    uint16_t * const **l_253 = &g_251;
    int i;
    if (p_47)
    { 
        const union U4 *l_50 = (void*)0;
        const union U4 **l_49 = &l_50;
        const int32_t l_66 = (-5L);
        uint8_t *l_69 = (void*)0;
        uint8_t *l_70 = &g_71;
        uint16_t *l_74 = &g_75;
        (*l_49) = (void*)0;
        g_76 &= (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(g_21.f2, l_55)), (((safe_div_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((((((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(l_66, (safe_mod_func_uint8_t_u_u(((*l_70) &= l_66), (safe_rshift_func_uint16_t_u_u(l_55, ((*l_74) = g_21.f0))))))), (0xF5L || p_47))), 1L)) == l_66) != p_47) != p_47) ^ p_47), 4294967291UL)), p_47)) >= p_47) , g_21.f2)));
        p_46 = &g_21;
    }
    else
    { 
        uint64_t l_85 = 0xF9C852071694A98ALL;
        struct S0 l_88 = {-4L,0x027488F5L};
        int32_t *l_91 = (void*)0;
        int32_t *l_92[5][1][2] = {{{&l_88.f1,&l_88.f1}},{{&l_88.f1,&l_88.f1}},{{&l_88.f1,&l_88.f1}},{{&l_88.f1,&l_88.f1}},{{&l_88.f1,&l_88.f1}}};
        union U4 *l_116 = &g_101;
        union U4 * const *l_115[3][7] = {{&l_116,&l_116,&l_116,&l_116,&l_116,&l_116,&l_116},{&l_116,&l_116,&l_116,(void*)0,&l_116,&l_116,&l_116},{&l_116,&l_116,(void*)0,&l_116,&l_116,&l_116,&l_116}};
        uint32_t l_121 = 4294967294UL;
        int64_t l_150 = 0x552ABCF54F23DFB5LL;
        int i, j, k;
        g_94 = (l_93 = (safe_div_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((((0xEE07L != g_26[1]) , (safe_mul_func_uint8_t_u_u(255UL, l_85))) <= (safe_rshift_func_int16_t_s_u((-1L), ((l_88 , (safe_sub_func_uint64_t_u_u(l_88.f0, 18446744073709551612UL))) >= p_47)))) || p_47), l_55)) & 0x2231L), 3)) < 0xA8L), 0x8BB1B5B3A04BB84ALL)));
        if (g_26[6])
        { 
            int32_t **l_95 = &l_92[3][0][1];
            (*l_95) = &g_2;
            for (l_55 = 22; (l_55 > (-8)); l_55 = safe_sub_func_uint16_t_u_u(l_55, 3))
            { 
                (*l_95) = (*l_95);
            }
        }
        else
        { 
            union U4 *l_100[4] = {&g_101,&g_101,&g_101,&g_101};
            int32_t l_111 = 0L;
            int64_t *l_138 = &g_101.f0;
            int32_t l_191 = 4L;
            int32_t l_193 = 1L;
            int32_t l_194 = 1L;
            uint32_t l_195 = 0xF4353AD9L;
            int i;
            if ((safe_lshift_func_uint8_t_u_s(0xE4L, (l_100[3] == (((safe_add_func_int64_t_s_s(((((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(65535UL, (safe_sub_func_uint64_t_u_u(((*p_46) , p_47), (l_110 != (g_101 , &g_26[6])))))), 1L)) || l_111) >= 0x83373E763FF63661LL) , p_47), p_47)) ^ 6UL) , (void*)0)))))
            { 
                union U3 l_126[4] = {{0x9045L},{0x9045L},{0x9045L},{0x9045L}};
                int8_t *l_127 = &g_128;
                uint32_t l_130 = 0x9EF6EAEAL;
                uint32_t l_142[7] = {0UL,0UL,0UL,0x1534744AL,0x1534744AL,0UL,0x1534744AL};
                int32_t l_169 = 0x38541C8EL;
                int i;
                l_130 ^= (safe_unary_minus_func_int8_t_s((safe_unary_minus_func_uint32_t_u((((g_114[1] == l_115[1][0]) && ((safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s(l_121, 0x76L)), g_71)) <= (((*l_127) = ((((*l_110) |= (safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((l_126[0] , g_21.f0), p_47)), l_126[0].f0))) <= g_21.f0) ^ p_47)) == g_129[1]))) & p_47)))));
                for (g_76 = 0; (g_76 > 21); g_76 = safe_add_func_int32_t_s_s(g_76, 3))
                { 
                    int64_t **l_133 = (void*)0;
                    int64_t **l_134 = (void*)0;
                    int64_t **l_135 = &l_110;
                    int64_t *l_137[3][1];
                    int64_t **l_136[6];
                    uint32_t *l_140 = (void*)0;
                    uint32_t *l_141[7][2] = {{&l_121,&l_121},{&l_121,&l_121},{(void*)0,(void*)0},{&l_121,&l_121},{&l_121,&l_121},{&l_121,(void*)0},{(void*)0,&l_121}};
                    int16_t *l_147 = &l_126[0].f0;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_137[i][j] = &g_26[6];
                    }
                    for (i = 0; i < 6; i++)
                        l_136[i] = &l_137[2][0];
                    g_151 |= ((l_142[6] &= (((*l_135) = &g_26[3]) != (g_139 = (l_138 = (void*)0)))) >= ((((safe_mul_func_int16_t_s_s(((*l_147) = ((safe_sub_func_uint64_t_u_u(0x48CC3AA3D5FEEC88LL, l_111)) <= (g_21.f0 <= 0UL))), (safe_add_func_int32_t_s_s((l_93 ^= (p_47 < g_101.f0)), g_128)))) >= g_129[0]) && l_150) >= l_55));
                }
                for (l_55 = 0; (l_55 < 20); l_55 = safe_add_func_int32_t_s_s(l_55, 3))
                { 
                    int16_t l_157 = 0L;
                    uint16_t *l_170 = (void*)0;
                    uint16_t *l_171 = &g_75;
                    uint8_t *l_174 = &l_126[0].f2;
                    int64_t *l_181 = &g_151;
                    int64_t *l_182 = &l_150;
                    uint32_t *l_184 = &g_21.f0;
                    l_156 = g_154[0][0];
                    if (l_157)
                        continue;
                    g_101.f1.f1 = 1L;
                    g_185[0][0] |= (((((*l_184) ^= ((g_101.f1.f0 & (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(1UL, (safe_mod_func_int32_t_s_s((l_157 > (-1L)), (safe_mod_func_uint32_t_u_u((!(l_111 && (safe_mul_func_int8_t_s_s((((*l_171)++) <= 3L), (--(*l_174)))))), ((((*l_182) &= (((*l_181) ^= (((((((safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s((g_101.f1 , (-2L)), 18446744073709551615UL)), 0UL)) | l_55) ^ 1UL) || l_130) & g_26[5]) != g_26[6]) != p_47)) == g_101.f1.f1)) ^ 1UL) , l_183))))))), p_47))) & p_47)) == g_128) , l_157) > 18446744073709551615UL);
                }
            }
            else
            { 
                int8_t l_186 = 1L;
                int32_t l_187 = (-7L);
                int32_t l_190 = 1L;
                int32_t l_192[3][4][2] = {{{0x38324C05L,0x38324C05L},{0xD1AE7548L,0x38324C05L},{0x38324C05L,0xD1AE7548L},{0x38324C05L,0x38324C05L}},{{0xD1AE7548L,0x38324C05L},{0x38324C05L,0xD1AE7548L},{0x38324C05L,0x38324C05L},{0xD1AE7548L,0x38324C05L}},{{0x38324C05L,0xD1AE7548L},{0x38324C05L,0x38324C05L},{0xD1AE7548L,0x38324C05L},{0x38324C05L,0xD1AE7548L}}};
                int i, j, k;
                l_195++;
                g_198 = l_92[3][0][0];
            }
        }
    }
    for (l_93 = 0; (l_93 < (-23)); l_93 = safe_sub_func_int16_t_s_s(l_93, 8))
    { 
        uint32_t l_211 = 0xD358E9FEL;
        uint64_t l_245 = 18446744073709551606UL;
        int32_t **l_246 = &l_243;
        const int64_t *l_247 = &g_26[6];
        for (g_75 = (-13); (g_75 <= 12); g_75 = safe_add_func_int32_t_s_s(g_75, 1))
        { 
            int32_t l_234 = 0x28CBF020L;
            int32_t l_235 = 0x76829996L;
            uint64_t *l_236 = &g_237;
            union U2 l_242 = {0};
            int32_t **l_244 = &g_198;
            for (g_101.f0 = 0; (g_101.f0 <= 27); g_101.f0 = safe_add_func_int16_t_s_s(g_101.f0, 6))
            { 
                union U4 l_209[7] = {{-6L},{-6L},{-6L},{-6L},{-6L},{-6L},{-6L}};
                uint32_t *l_216 = &g_21.f0;
                uint32_t *l_226 = &g_227[1];
                uint32_t *l_228 = &g_229[4][0][5];
                uint32_t *l_230 = &g_231;
                uint32_t *l_232 = &g_233;
                int i;
                l_235 ^= ((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((((l_209[5] , l_210) , (g_155.f0 = (l_211 , ((safe_add_func_uint8_t_u_u((!(l_234 = (((0xCE0E0F3BL <= (((((+((*l_216) = 4294967295UL)) | (safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((~(safe_mod_func_uint32_t_u_u(((*l_232) = ((*l_230) = ((*l_228) = ((*l_226) ^= (safe_rshift_func_uint8_t_u_s(1UL, 4)))))), (l_211 , g_94)))) < g_2) < l_209[5].f0), 0x7145L)) | g_151), g_129[1]))) >= 2L) & g_94) ^ l_210.f1)) ^ l_209[5].f0) > 3L))), l_210.f0)) & 0xB1BE9037B7EF6DE3LL)))) && 0x2966L), 10)), l_189[4])) == g_101.f0);
            }
            (*l_244) = ((l_211 , (++(*l_236))) , (l_243 = (((p_47 != (0x72L || (safe_div_func_int32_t_s_s((g_155.f0 <= (0x22L >= p_47)), (l_242 , 9L))))) | g_101.f1.f0) , &g_185[0][0])));
            l_210 = g_101.f1;
            (*l_243) |= l_245;
        }
        (*l_246) = &g_185[0][0];
        return l_247;
    }
    g_185[6][0] = ((void*)0 != &l_189[3]);
    g_248 = g_248;
    (*l_253) = g_251;
    return (**g_248);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_21.f2, "g_21.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_26[i], "g_26[i]", print_hash_value);

    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_101.f0, "g_101.f0", print_hash_value);
    transparent_crc(g_101.f1.f0, "g_101.f1.f0", print_hash_value);
    transparent_crc(g_101.f1.f1, "g_101.f1.f1", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_129[i], "g_129[i]", print_hash_value);

    }
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_155.f0, "g_155.f0", print_hash_value);
    transparent_crc(g_155.f2, "g_155.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_185[i][j], "g_185[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_227[i], "g_227[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_229[i][j][k], "g_229[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    transparent_crc(g_608, "g_608", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    transparent_crc(g_720.f0, "g_720.f0", print_hash_value);
    transparent_crc(g_720.f2, "g_720.f2", print_hash_value);
    transparent_crc(g_978, "g_978", print_hash_value);
    transparent_crc(g_1070, "g_1070", print_hash_value);
    transparent_crc(g_1076, "g_1076", print_hash_value);
    transparent_crc(g_1151, "g_1151", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}

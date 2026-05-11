// SPDX-License-Identifier: MIT
// cctest_csmith_f2ab2b75.c --- cctest case csmith_f2ab2b75 (csmith seed 4071304053)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x80a0c310 */

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

// Options:   -s 4071304053 -o /tmp/csmith_gen_yw02n6nj/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   uint16_t  f1;
};
#pragma pack(pop)

union U1 {
   uint64_t  f0;
   unsigned f1 : 7;
   int16_t  f2;
};


static int64_t g_4 = 0L;
static uint64_t g_5 = 0x865425A80E3580D4LL;
static uint32_t g_33 = 0UL;
static struct S0 g_34 = {0x974DL,0x9BECL};
static uint32_t g_52 = 4294967295UL;
static uint32_t g_65 = 18446744073709551615UL;
static int8_t g_72 = 1L;
static struct S0 g_73 = {2UL,0x1658L};
static int16_t g_99[4] = {(-4L),(-4L),(-4L),(-4L)};
static int32_t g_100 = 0xA8E6C661L;
static int64_t g_105 = 0xB690C4FCC00BB049LL;
static union U1 g_136[2] = {{0x04801D3CF30455FDLL},{0x04801D3CF30455FDLL}};
static uint16_t g_183 = 0xF89FL;



static uint16_t  func_1(void);
static int32_t  func_6(uint32_t  p_7);
static const int64_t  func_12(union U1  p_13);
static union U1  func_14(union U1  p_15);




static uint16_t  func_1(void)
{ 
    uint32_t l_2 = 4294967293UL;
    int32_t l_3 = (-1L);
    struct S0 l_95 = {3UL,65531UL};
    int64_t l_101 = 0x70AF28410211DA04LL;
    uint8_t l_121 = 0x7DL;
    int8_t l_123 = 0xD7L;
    int32_t l_138 = 0xCB42A345L;
    union U1 l_163[2][5][4] = {{{{0xAF6E95F59AB2ABFELL},{0x09578A626304C604LL},{6UL},{1UL}},{{0x09578A626304C604LL},{18446744073709551612UL},{18446744073709551615UL},{0xAF6E95F59AB2ABFELL}},{{18446744073709551610UL},{18446744073709551607UL},{18446744073709551607UL},{18446744073709551610UL}},{{18446744073709551610UL},{1UL},{18446744073709551615UL},{0x370E5BB3944318FBLL}},{{0x09578A626304C604LL},{18446744073709551610UL},{6UL},{0UL}}},{{{0xAF6E95F59AB2ABFELL},{9UL},{0xAF6E95F59AB2ABFELL},{0UL}},{{6UL},{18446744073709551610UL},{0x09578A626304C604LL},{0x370E5BB3944318FBLL}},{{18446744073709551615UL},{1UL},{18446744073709551610UL},{18446744073709551610UL}},{{18446744073709551607UL},{18446744073709551607UL},{18446744073709551610UL},{0xAF6E95F59AB2ABFELL}},{{18446744073709551615UL},{18446744073709551612UL},{0x09578A626304C604LL},{1UL}}}};
    uint16_t l_179[3][4] = {{3UL,3UL,0xEA59L,3UL},{3UL,8UL,8UL,3UL},{8UL,3UL,8UL,8UL}};
    uint64_t l_182[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_182[i] = 0xE94898853A53F0CDLL;
    l_3 |= l_2;
    g_5 = g_4;
    if (func_6(g_5))
    { 
        uint32_t l_79 = 1UL;
        int32_t l_80 = 1L;
        l_80 ^= ((l_79 | 0x77C4L) < l_79);
    }
    else
    { 
        uint32_t l_103 = 18446744073709551607UL;
        int32_t l_137 = 4L;
        for (g_34.f1 = 29; (g_34.f1 >= 14); g_34.f1 = safe_sub_func_uint32_t_u_u(g_34.f1, 3))
        { 
            const int32_t l_98 = 0L;
            int32_t l_104 = 0xAD813D13L;
            if (g_73.f1)
            { 
                int16_t l_102 = 0L;
                int32_t l_122 = 0xBDCB9720L;
                const struct S0 l_124 = {0x8E2CL,0xBE23L};
                uint32_t l_135 = 18446744073709551613UL;
                g_105 = (safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((+((l_104 = (safe_lshift_func_int8_t_s_u(l_2, (((safe_unary_minus_func_int16_t_s(((((g_100 &= (safe_div_func_uint64_t_u_u(0x0FD7A8D5DA263B4ALL, (l_95 , ((g_99[0] = ((safe_sub_func_uint64_t_u_u((g_73.f0 , g_5), g_4)) ^ l_98)) , l_95.f0))))) && 1UL) & g_34.f0) & l_101))) & l_102) & l_103)))) != 0xAD17113E0D7569D0LL)), g_5)), l_3)), l_98));
                g_73 = ((safe_rshift_func_int16_t_s_s((g_73.f0 != ((((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((l_122 ^= (safe_mul_func_int8_t_s_s(((-1L) && ((((safe_lshift_func_int16_t_s_s(((g_5 ^= (l_95.f0 ^ ((~0x16L) & 0L))) , l_104), 9)) && 1L) ^ g_99[0]) > 1L)), l_121))), 0x27L)), 4294967295UL)), 5)) && l_123) == l_104) , 0L)), 8)) , l_124);
                l_122 &= (safe_lshift_func_uint16_t_u_u(((g_73.f0 != (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(2L, 7)), 3))) == (l_137 |= (safe_add_func_int64_t_s_s(0x7E243D31FC3C61D2LL, ((safe_add_func_uint64_t_u_u((func_14((((l_135 |= 0x5357L) <= l_103) , g_136[1])) , l_95.f1), 1UL)) != g_136[1].f0))))), 2));
            }
            else
            { 
                return l_137;
            }
            l_138 &= (l_3 = g_99[0]);
        }
        for (l_95.f0 = 0; (l_95.f0 < 37); ++l_95.f0)
        { 
            uint8_t l_149[2][4][2] = {{{0xFAL,0xFAL},{0xFAL,0xFAL},{0xFAL,0xFAL},{0xFAL,0xFAL}},{{0xFAL,0xFAL},{0xFAL,0xFAL},{0xFAL,0xFAL},{0xFAL,0xFAL}}};
            int i, j, k;
            for (l_3 = 2; (l_3 < 20); ++l_3)
            { 
                int8_t l_143 = 0L;
                if (g_100)
                    break;
                l_138 = (l_143 ^ (!(safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(l_149[0][2][1], (safe_lshift_func_uint8_t_u_u(((g_136[1].f0 , (safe_sub_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(g_65, g_136[1].f0)) == g_33) != l_143), 0x8C66L))) || g_33), 7)))), l_149[0][2][1]))));
            }
            for (l_2 = (-6); (l_2 < 5); l_2 = safe_add_func_uint64_t_u_u(l_2, 6))
            { 
                uint8_t l_158 = 0xEBL;
                int8_t l_164 = 0x05L;
                l_158--;
                g_100 ^= ((((safe_lshift_func_int16_t_s_u(0x6133L, (l_2 < g_105))) == (func_14((g_136[1] = func_14((l_163[0][4][0] = func_14(g_136[1]))))) , l_164)) ^ g_5) , 0L);
                return l_149[0][2][1];
            }
            for (l_123 = (-9); (l_123 == (-23)); l_123 = safe_sub_func_int64_t_s_s(l_123, 2))
            { 
                int8_t l_169[2][2] = {{0xAFL,0xAFL},{0xAFL,0xAFL}};
                int32_t l_175[3];
                int32_t l_178 = 0x14EA1F16L;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_175[i] = 0x1B0FF881L;
                l_178 = (safe_mul_func_uint16_t_u_u((l_169[0][1] == (safe_mod_func_int16_t_s_s((safe_add_func_int64_t_s_s(0xBD725CBBC646FAD0LL, (g_136[1].f0 = ((l_175[0] ^= (+0L)) > (safe_mod_func_int8_t_s_s(g_4, 255UL)))))), g_100))), g_73.f1));
            }
        }
        g_183 ^= ((g_4 || (g_5 = l_179[2][2])) != (((((g_100 ^= (safe_lshift_func_int8_t_s_u(g_136[1].f1, 2))) > ((((l_3 = 0xC96CL) == (-1L)) ^ l_2) <= g_136[1].f2)) | l_182[1]) >= g_136[1].f1) , g_73.f0));
    }
    return l_182[1];
}



static int32_t  func_6(uint32_t  p_7)
{ 
    union U1 l_16[4] = {{1UL},{1UL},{1UL},{1UL}};
    int32_t l_76 = 0L;
    int32_t l_77 = (-1L);
    struct S0 l_78 = {6UL,0x6EA3L};
    int i;
    l_77 = (l_76 = ((safe_mul_func_uint16_t_u_u((p_7 != (((g_5 <= (safe_sub_func_int64_t_s_s((-8L), func_12(func_14(l_16[3]))))) | l_16[3].f1) | p_7)), 0L)) , p_7));
    l_78 = l_78;
    return l_16[3].f0;
}



static const int64_t  func_12(union U1  p_13)
{ 
    int16_t l_19[1];
    int i;
    for (i = 0; i < 1; i++)
        l_19[i] = (-9L);
    for (g_4 = 0; (g_4 <= 0); g_4 += 1)
    { 
        uint8_t l_32 = 250UL;
        struct S0 l_35 = {65530UL,65530UL};
        int32_t l_41 = (-8L);
        for (p_13.f0 = 0; (p_13.f0 <= 0); p_13.f0 += 1)
        { 
            int i;
            if ((safe_lshift_func_int8_t_s_s(((l_19[p_13.f0] | p_13.f2) | ((safe_rshift_func_int16_t_s_s(g_4, (safe_mul_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(l_19[0], l_19[0])), g_4)), p_13.f0)) ^ g_4), g_4)))) != 0x6CAD8E65L)), 5)))
            { 
                g_33 = (0x5BL || ((((g_4 != ((l_32 , p_13.f1) > l_19[0])) && l_19[p_13.f0]) < p_13.f1) , l_32));
                l_35 = g_34;
            }
            else
            { 
                uint32_t l_36 = 18446744073709551609UL;
                l_36 = 9L;
            }
        }
        for (g_34.f0 = (-12); (g_34.f0 != 18); ++g_34.f0)
        { 
            uint16_t l_51 = 65535UL;
            struct S0 l_54[5][1][2] = {{{{0xD0C7L,0UL},{0xD0C7L,0UL}}},{{{0xD0C7L,0UL},{0xD0C7L,0UL}}},{{{0xD0C7L,0UL},{0xD0C7L,0UL}}},{{{0xD0C7L,0UL},{0xD0C7L,0UL}}},{{{0xD0C7L,0UL},{0xD0C7L,0UL}}}};
            struct S0 l_55 = {0xF4C7L,65535UL};
            int i, j, k;
            for (l_32 = 0; (l_32 <= 0); l_32 += 1)
            { 
                uint32_t l_50 = 0UL;
                int32_t l_53 = 0x64616E91L;
                int i;
                l_53 &= (((g_52 &= (safe_sub_func_int32_t_s_s((((l_41 ^= l_19[l_32]) <= l_19[0]) || (((safe_add_func_int8_t_s_s((l_51 = (l_50 = ((l_41 = (((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(18446744073709551615UL, (safe_div_func_int8_t_s_s(l_41, l_32)))), 0L)) < g_5) != g_34.f0)) | l_19[0]))), 0x01L)) , g_34.f0) > 0L)), 0UL))) == l_19[0]) | 0x8977B405A815809FLL);
            }
            if (p_13.f2)
                continue;
            l_55 = (l_54[3][0][1] = l_35);
        }
        if ((safe_add_func_int16_t_s_s(1L, (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((l_35.f1 <= p_13.f2), 2)) || (!(safe_mod_func_int16_t_s_s((g_65 = g_52), l_35.f1)))), g_4)))))
        { 
            struct S0 l_66 = {65527UL,7UL};
            if (((g_4 , ((0L <= 0xCC25L) , (g_4 , p_13.f2))) > 2L))
            { 
                l_66 = l_66;
                g_72 = (((0xCD49L != (p_13.f1 >= ((~(l_66.f1 == (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(p_13.f2, g_34.f1)), p_13.f0)))) || 1L))) , 0x13AA7A40L) > 0xF99C4824L);
                g_73 = (g_34 = l_66);
            }
            else
            { 
                if (p_13.f2)
                    break;
                return g_34.f1;
            }
            return l_66.f1;
        }
        else
        { 
            for (g_33 = 0; (g_33 != 34); ++g_33)
            { 
                return l_41;
            }
        }
    }
    return p_13.f1;
}



static union U1  func_14(union U1  p_15)
{ 
    uint32_t l_17 = 1UL;
    int32_t l_18[1][4][4] = {{{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}}};
    int i, j, k;
    l_18[0][2][0] = ((p_15.f2 == ((l_17 < l_17) || g_5)) ^ 0x14L);
    return p_15;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_99[i], "g_99[i]", print_hash_value);

    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_136[i].f0, "g_136[i].f0", print_hash_value);
        transparent_crc(g_136[i].f1, "g_136[i].f1", print_hash_value);
        transparent_crc(g_136[i].f2, "g_136[i].f2", print_hash_value);

    }
    transparent_crc(g_183, "g_183", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}

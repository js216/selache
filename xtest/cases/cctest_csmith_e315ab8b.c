// SPDX-License-Identifier: MIT
// cctest_csmith_e315ab8b.c --- cctest case csmith_e315ab8b (csmith seed 3809848203)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x114be884 */

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

// Options:   -s 3809848203 -o /tmp/csmith_gen_498rwik4/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   uint16_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

union U1 {
   uint16_t  f0;
   uint32_t  f1;
   int64_t  f2;
   int16_t  f3;
};

union U2 {
   uint8_t  f0;
};


static int32_t g_3 = 0L;
static int32_t g_4 = 0x3A23FE5EL;
static int32_t g_9[6] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
static int32_t **g_48 = (void*)0;
static union U1 g_67 = {65526UL};
static uint8_t g_71 = 0x8BL;
static union U2 g_99 = {0x81L};
static int8_t g_106 = 0x1BL;
static int16_t g_113 = 0xDD9CL;
static int32_t *g_114[5][5][5] = {{{(void*)0,&g_9[5],&g_9[5],&g_3,&g_9[2]},{&g_9[0],&g_3,&g_3,&g_3,&g_9[0]},{(void*)0,&g_3,&g_9[2],&g_9[5],(void*)0},{&g_3,&g_9[2],&g_9[0],&g_9[5],&g_3},{&g_9[5],&g_9[1],&g_9[5],&g_3,(void*)0}},{{&g_3,&g_9[5],&g_9[5],&g_3,&g_9[0]},{(void*)0,(void*)0,&g_3,(void*)0,&g_9[2]},{&g_9[3],&g_9[0],&g_3,&g_9[2],&g_9[1]},{&g_9[2],(void*)0,&g_9[5],&g_9[5],&g_9[5]},{(void*)0,&g_4,(void*)0,&g_9[2],&g_9[1]}},{{(void*)0,(void*)0,&g_9[1],&g_9[5],&g_3},{&g_3,&g_3,&g_3,&g_3,(void*)0},{&g_9[5],&g_9[5],&g_9[1],&g_3,&g_9[1]},{&g_3,&g_3,(void*)0,&g_9[5],&g_9[0]},{(void*)0,&g_3,&g_9[5],&g_9[5],(void*)0}},{{&g_9[5],&g_3,&g_3,&g_9[0],(void*)0},{&g_9[5],&g_3,&g_9[2],&g_9[2],&g_3},{(void*)0,&g_3,&g_3,&g_3,&g_9[2]},{(void*)0,&g_9[5],&g_3,&g_9[5],&g_9[5]},{&g_9[5],&g_3,(void*)0,&g_3,&g_9[2]}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_4,&g_9[2],(void*)0,&g_3},{&g_9[5],(void*)0,&g_3,(void*)0,&g_4},{&g_9[5],&g_3,&g_9[3],&g_4,&g_3},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static struct S0 g_152 = {18446744073709551615UL,4UL,0UL};
static int64_t g_168[1] = {0xE15FF329CA2B82A3LL};
static uint32_t g_232 = 0x983DDCAAL;
static int16_t g_273[2][5][3] = {{{(-1L),(-1L),0x1AF0L},{0x1AF0L,(-7L),1L},{(-1L),(-7L),(-1L)},{0L,(-1L),1L},{0L,0L,0x1AF0L}},{{(-1L),(-1L),0x1AF0L},{0x1AF0L,(-7L),1L},{(-1L),(-7L),(-1L)},{0L,(-1L),1L},{0L,0L,0x1AF0L}}};
static uint8_t g_322 = 0xB1L;
static uint8_t * const g_324[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint8_t * const *g_323 = &g_324[1];
static uint8_t g_366 = 255UL;
static uint32_t g_421 = 4294967291UL;
static uint16_t *g_445 = &g_67.f0;
static uint64_t ***g_574[3] = {(void*)0,(void*)0,(void*)0};
static uint64_t ****g_573 = &g_574[2];
static union U2 *g_673[4] = {&g_99,&g_99,&g_99,&g_99};
static union U1 *g_693 = (void*)0;
static union U1 **g_692 = &g_693;
static const uint16_t g_696 = 65535UL;
static const union U2 g_995 = {0x53L};
static union U2 g_1000 = {0x26L};
static uint8_t *g_1025 = &g_322;
static uint8_t **g_1024 = &g_1025;
static const uint32_t g_1153 = 0xE19FC6FFL;
static uint8_t g_1163[6][7][6] = {{{0xC8L,255UL,0x97L,255UL,0xC8L,255UL},{1UL,1UL,1UL,255UL,1UL,1UL},{0xC8L,1UL,0x97L,1UL,0xC8L,1UL},{1UL,255UL,1UL,1UL,1UL,255UL},{0xC8L,255UL,0x97L,255UL,0xC8L,255UL},{1UL,1UL,1UL,255UL,1UL,1UL},{0xC8L,1UL,0x97L,1UL,0xC8L,1UL}},{{1UL,255UL,1UL,1UL,1UL,255UL},{0xC8L,255UL,0x97L,255UL,0xC8L,255UL},{1UL,1UL,1UL,255UL,1UL,1UL},{0xC8L,1UL,0x97L,1UL,0xC8L,1UL},{1UL,255UL,1UL,1UL,1UL,255UL},{0xC8L,255UL,0x97L,255UL,0xC8L,255UL},{1UL,1UL,1UL,255UL,1UL,1UL}},{{0xC8L,1UL,0x97L,1UL,0xC8L,1UL},{1UL,255UL,1UL,1UL,1UL,255UL},{0xC8L,255UL,0x97L,255UL,0xC8L,255UL},{1UL,1UL,1UL,255UL,1UL,1UL},{0xC8L,1UL,0x97L,1UL,0xC8L,1UL},{1UL,255UL,1UL,1UL,1UL,255UL},{0xC8L,255UL,0x97L,255UL,0xC8L,255UL}},{{1UL,1UL,1UL,255UL,1UL,1UL},{0xC8L,1UL,0x97L,1UL,0xC8L,1UL},{1UL,255UL,1UL,1UL,1UL,255UL},{0xC8L,255UL,0x97L,255UL,0xC8L,255UL},{1UL,1UL,1UL,255UL,1UL,1UL},{0xC8L,1UL,0x97L,1UL,0xC8L,1UL},{1UL,255UL,1UL,1UL,1UL,255UL}},{{0xC8L,255UL,0x97L,255UL,0xC8L,255UL},{1UL,1UL,1UL,255UL,1UL,1UL},{0xC8L,1UL,0x97L,1UL,0xC8L,1UL},{1UL,255UL,1UL,1UL,1UL,255UL},{0xC8L,255UL,0x97L,255UL,0xC8L,255UL},{1UL,1UL,1UL,255UL,1UL,1UL},{0xC8L,1UL,0x97L,1UL,0xC8L,1UL}},{{1UL,255UL,1UL,1UL,1UL,255UL},{0xC8L,255UL,0x97L,255UL,0xC8L,255UL},{1UL,1UL,1UL,255UL,1UL,1UL},{0xC8L,1UL,0x97L,1UL,0xC8L,1UL},{1UL,255UL,1UL,1UL,1UL,255UL},{0xC8L,255UL,0x97L,255UL,0xC8L,255UL},{1UL,1UL,1UL,255UL,1UL,1UL}}};
static const int32_t g_1175 = (-1L);
static uint64_t g_1181 = 0x69399FCB3FEB5C0DLL;
static union U2 **g_1265 = (void*)0;
static union U2 ***g_1264 = &g_1265;
static int8_t g_1325 = 0L;
static const union U1 *g_1342 = &g_67;
static const union U1 **g_1341 = &g_1342;
static int16_t *g_1352 = &g_67.f3;
static int16_t g_1478 = 0xA721L;
static union U1 g_1533 = {65527UL};
static uint32_t g_1552[6] = {0UL,0UL,0xA736E4F3L,0UL,0UL,0xA736E4F3L};
static union U2 g_1585 = {1UL};
static struct S0 *g_1679[2][5] = {{&g_152,&g_152,&g_152,&g_152,&g_152},{&g_152,&g_152,&g_152,&g_152,&g_152}};
static struct S0 **g_1678[3][2][2] = {{{&g_1679[1][2],&g_1679[1][4]},{&g_1679[1][2],&g_1679[1][4]}},{{&g_1679[1][2],&g_1679[1][4]},{&g_1679[1][2],&g_1679[1][4]}},{{&g_1679[1][2],&g_1679[1][4]},{&g_1679[1][2],&g_1679[1][4]}}};
static const int8_t g_1710[5][3] = {{0x25L,1L,1L},{0xFCL,1L,(-1L)},{(-3L),0x25L,0L},{0xFCL,0xFCL,0L},{0x25L,(-3L),(-1L)}};
static const int8_t *g_1709 = &g_1710[4][0];
static int64_t g_1863 = 4L;
static int32_t g_1961[1] = {(-5L)};
static uint64_t g_2059 = 1UL;
static int16_t g_2151[7][6][3] = {{{(-1L),0xE6E4L,9L},{0x0E20L,0xEF8AL,0x0B41L},{5L,0L,(-1L)},{0x86D0L,(-1L),1L},{5L,0L,(-2L)},{0x0E20L,(-5L),(-2L)}},{{(-1L),0L,(-10L)},{0xE6E4L,0xEC44L,1L},{1L,(-1L),(-1L)},{(-4L),(-1L),0x2CD0L},{(-1L),0L,6L},{(-1L),0xA512L,(-8L)}},{{(-10L),(-1L),0x86D0L},{2L,(-1L),(-1L)},{0xC31BL,0xA512L,0xFF40L},{0L,0L,0xEC44L},{0xEF8AL,(-1L),1L},{0x22B7L,(-1L),0L}},{{0xEF88L,0xEC44L,(-5L)},{0L,0L,0xABA9L},{0xD5C5L,(-5L),(-10L)},{0L,0L,0x22B7L},{1L,(-1L),1L},{0x0B41L,0L,0x22B7L}},{{0xB79FL,0xEF8AL,(-10L)},{(-2L),0xE6E4L,0xABA9L},{(-1L),0x8CB4L,(-5L)},{1L,0x271CL,0L},{(-1L),2L,1L},{0xABA9L,0xB6FEL,0xEC44L}},{{(-8L),0xEF88L,0xFF40L},{0x96BAL,1L,(-1L)},{0x96C3L,0x0E20L,0x86D0L},{0x96C3L,6L,(-8L)},{0x96BAL,0xABA9L,6L},{(-8L),(-2L),0x2CD0L}},{{0xABA9L,7L,(-1L)},{(-1L),(-2L),1L},{1L,(-10L),(-10L)},{(-1L),0xADFFL,(-2L)},{(-2L),0L,(-2L)},{0xB79FL,0xFF40L,1L}}};
static int32_t g_2179 = 0x5ABC60E4L;
static uint8_t g_2246 = 247UL;
static int16_t *g_2389 = &g_273[0][0][1];
static int16_t *g_2390 = &g_2151[4][1][1];
static int8_t ***g_2413 = (void*)0;
static int32_t ***g_2432[6][4][5] = {{{(void*)0,&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48,&g_48},{(void*)0,&g_48,(void*)0,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48,&g_48}},{{&g_48,(void*)0,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,(void*)0,(void*)0,&g_48},{(void*)0,&g_48,&g_48,&g_48,&g_48}},{{&g_48,&g_48,&g_48,&g_48,&g_48},{(void*)0,&g_48,(void*)0,(void*)0,&g_48},{&g_48,&g_48,(void*)0,(void*)0,&g_48},{&g_48,(void*)0,&g_48,&g_48,&g_48}},{{(void*)0,&g_48,&g_48,(void*)0,&g_48},{&g_48,(void*)0,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,&g_48,&g_48},{(void*)0,&g_48,&g_48,(void*)0,(void*)0}},{{&g_48,(void*)0,(void*)0,&g_48,(void*)0},{(void*)0,&g_48,&g_48,&g_48,&g_48},{&g_48,&g_48,&g_48,(void*)0,(void*)0},{&g_48,(void*)0,&g_48,&g_48,(void*)0}},{{&g_48,&g_48,&g_48,&g_48,&g_48},{&g_48,(void*)0,&g_48,(void*)0,&g_48},{&g_48,&g_48,&g_48,&g_48,(void*)0},{&g_48,&g_48,&g_48,&g_48,&g_48}}};
static int32_t ****g_2431 = &g_2432[0][1][3];
static uint8_t ****g_2490 = (void*)0;
static union U1 *g_2511 = &g_67;
static const int8_t ** const ***g_2533 = (void*)0;
static uint64_t g_2651 = 18446744073709551606UL;
static uint64_t g_2683 = 0x4CAE513E2F4C5D9FLL;
static int8_t g_2727 = 0xA5L;
static int32_t g_2819[2] = {0L,0L};
static union U2 ****g_2821[3][4][3] = {{{&g_1264,&g_1264,&g_1264},{&g_1264,&g_1264,&g_1264},{&g_1264,&g_1264,&g_1264},{&g_1264,&g_1264,&g_1264}},{{&g_1264,&g_1264,&g_1264},{&g_1264,&g_1264,&g_1264},{&g_1264,&g_1264,&g_1264},{&g_1264,&g_1264,&g_1264}},{{&g_1264,&g_1264,&g_1264},{&g_1264,&g_1264,&g_1264},{&g_1264,&g_1264,&g_1264},{&g_1264,&g_1264,&g_1264}}};
static int32_t g_2824[7] = {0xA4D1D955L,0xA4D1D955L,0xA4D1D955L,0xA4D1D955L,0xA4D1D955L,0xA4D1D955L,0xA4D1D955L};
static const union U2 g_2832 = {0x27L};
static uint64_t * const * const g_2891 = (void*)0;
static uint64_t * const * const *g_2890 = &g_2891;
static uint64_t * const * const **g_2889 = &g_2890;
static uint64_t * const * const **g_2893 = &g_2890;
static uint16_t g_2928[7][1] = {{0xC7BFL},{7UL},{7UL},{0xC7BFL},{7UL},{7UL},{0xC7BFL}};
static uint32_t g_2929 = 6UL;
static int32_t g_3030 = 6L;
static int16_t ** const *g_3066 = (void*)0;
static union U1 * const * const g_3142 = (void*)0;
static union U1 * const * const *g_3141 = &g_3142;
static int16_t g_3149[2][1] = {{0L},{0L}};
static int32_t * const g_3181[2] = {&g_2179,&g_2179};
static uint8_t * const * const **g_3204 = (void*)0;
static uint32_t g_3232 = 4294967295UL;
static const int32_t g_3280[4] = {(-3L),(-3L),(-3L),(-3L)};
static uint32_t g_3281 = 1UL;



static struct S0  func_1(void);
static const union U2  func_14(int64_t  p_15, uint8_t  p_16);
static const int8_t  func_24(int32_t ** p_25, uint16_t  p_26, uint32_t  p_27);
static uint16_t  func_30(const int64_t  p_31, int32_t  p_32, int32_t * p_33, int32_t ** p_34, uint64_t  p_35);
static uint64_t  func_40(uint32_t  p_41, int32_t * p_42, int32_t ** p_43, uint64_t  p_44);
static int32_t * func_49(uint32_t  p_50, int16_t  p_51, uint16_t  p_52, int32_t * p_53);
static int8_t  func_54(int32_t * p_55, int32_t ** p_56, uint32_t  p_57, uint8_t  p_58);
static int32_t * func_59(int32_t *** p_60, int32_t  p_61, uint64_t  p_62);




static struct S0  func_1(void)
{ 
    int32_t l_2[6];
    int8_t l_7 = 0x4CL;
    union U1 *l_2845 = &g_67;
    uint64_t l_2847 = 9UL;
    int32_t *l_2848 = (void*)0;
    int32_t l_2850 = (-1L);
    uint8_t l_2857 = 1UL;
    union U2 l_2871[7] = {{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL}};
    uint64_t ****l_2894 = &g_574[0];
    uint32_t l_2896[6][3];
    int32_t l_2904[2][7] = {{0xB8EE681FL,0xFA676308L,0xFA676308L,0xB8EE681FL,0xA09B9A2CL,0x00C67698L,0xA09B9A2CL},{0xB8EE681FL,0xFA676308L,0xFA676308L,0xB8EE681FL,0xA09B9A2CL,0x00C67698L,0xA09B9A2CL}};
    uint8_t l_2908 = 0xF1L;
    uint16_t **l_2918 = &g_445;
    uint32_t l_2938 = 5UL;
    struct S0 l_2941 = {0xC998BAF3B0280709LL,0xD56CL,1UL};
    int16_t **l_2999 = (void*)0;
    uint32_t l_3044 = 0x5DC28C7DL;
    struct S0 l_3087 = {0x471C78598291E88FLL,0x7F33L,1UL};
    uint8_t l_3095 = 254UL;
    int32_t l_3213[3];
    struct S0 l_3265[1] = {{0xF9724CCE72617CE7LL,0x7359L,0xBAAE7072L}};
    int i, j;
    for (i = 0; i < 6; i++)
        l_2[i] = 0x73D2D672L;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
            l_2896[i][j] = 0UL;
    }
    for (i = 0; i < 3; i++)
        l_3213[i] = 0x5393E836L;
    for (g_3 = 0; (g_3 <= 5); g_3 += 1)
    { 
        int32_t *l_13 = &l_2[2];
        int32_t l_2851 = 0L;
        int32_t l_2852 = 0x580ACCCCL;
        int32_t l_2853 = 6L;
        int32_t l_2854 = 0x9A134DBAL;
        int32_t l_2855 = 0L;
        int32_t l_2856[6][4][1] = {{{1L},{0xE8A195A6L},{1L},{0xE8A195A6L}},{{1L},{0xE8A195A6L},{1L},{0xE8A195A6L}},{{1L},{0xE8A195A6L},{1L},{0xE8A195A6L}},{{1L},{0xE8A195A6L},{1L},{0xE8A195A6L}},{{1L},{0xE8A195A6L},{1L},{0xE8A195A6L}},{{1L},{0xE8A195A6L},{1L},{0xE8A195A6L}}};
        int16_t **l_2881 = &g_2389;
        int16_t ** const *l_2880 = &l_2881;
        uint16_t **l_2917 = &g_445;
        int64_t *l_2927 = &g_168[0];
        struct S0 l_2939 = {0UL,5UL,18446744073709551614UL};
        uint32_t l_2942 = 18446744073709551615UL;
        union U2 **l_2997 = &g_673[1];
        uint32_t l_2998 = 18446744073709551607UL;
        int32_t *l_3021 = &g_2819[1];
        int64_t l_3025[2];
        union U1 l_3031 = {0x71BBL};
        uint64_t l_3039 = 18446744073709551613UL;
        int64_t l_3056 = 0x8C3C376592DA0A3BLL;
        uint8_t ***l_3074 = &g_1024;
        struct S0 *l_3101[7] = {&g_152,&g_152,&g_152,&g_152,&g_152,&g_152,&g_152};
        int8_t l_3112 = (-1L);
        uint64_t *l_3147[5] = {&g_2683,&g_2683,&g_2683,&g_2683,&g_2683};
        int8_t l_3148 = (-1L);
        uint64_t l_3150 = 18446744073709551615UL;
        int32_t l_3153 = 0x4585AB6CL;
        uint8_t l_3154[3][2] = {{0x95L,0x95L},{0x95L,0x95L},{0x95L,0x95L}};
        union U2 l_3167 = {1UL};
        uint32_t l_3237 = 0UL;
        int8_t **l_3279 = (void*)0;
        int64_t l_3286 = 0x8D4C51140199A2A7LL;
        uint32_t l_3287 = 0x2B8AEC14L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_3025[i] = (-6L);
    }
    return l_3265[0];
}



static const union U2  func_14(int64_t  p_15, uint8_t  p_16)
{ 
    int8_t l_23 = 4L;
    int32_t *l_29[1];
    int32_t **l_28 = &l_29[0];
    uint16_t l_36 = 65535UL;
    int32_t *l_38 = &g_3;
    int32_t **l_37 = &l_38;
    union U2 ****l_2690 = &g_1264;
    int64_t l_2700[2];
    int8_t ****l_2723 = &g_2413;
    int64_t l_2738[7][4][3] = {{{(-4L),0L,0x60AC4F445DEF5799LL},{9L,0x25070E4F6F1D3827LL,0xB1D150B5E11C2ACBLL},{0L,9L,(-10L)},{0xF8B64EC5ABDBE2C4LL,(-10L),0x98290BD719DD0C40LL}},{{0xF914204440E8840BLL,2L,0x98290BD719DD0C40LL},{0x60AC4F445DEF5799LL,(-10L),(-10L)},{(-1L),0xB1D150B5E11C2ACBLL,0xB1D150B5E11C2ACBLL},{(-1L),0xF914204440E8840BLL,0x60AC4F445DEF5799LL}},{{2L,(-1L),0x771349398016CFFDLL},{(-1L),0xB57C3F8118B37337LL,(-1L)},{0x89370F9CC212FB5ELL,(-1L),0x0B196B7C8282727DLL},{0xB39413F3FDAB4712LL,0xB57C3F8118B37337LL,(-6L)}},{{0xB813B59847C97700LL,(-1L),0x7841676BA5ECDC1CLL},{(-1L),0xF914204440E8840BLL,0L},{0x25070E4F6F1D3827LL,0xB1D150B5E11C2ACBLL,0xF914204440E8840BLL},{(-1L),(-10L),0xB39413F3FDAB4712LL}},{{0xB57C3F8118B37337LL,2L,0xD4003D8E4593A65BLL},{0xB57C3F8118B37337LL,(-10L),0x25070E4F6F1D3827LL},{(-1L),9L,0xF8B64EC5ABDBE2C4LL},{0x25070E4F6F1D3827LL,0x25070E4F6F1D3827LL,8L}},{{(-1L),0L,0x05AB1E460F6B77FALL},{0xB813B59847C97700LL,0x98290BD719DD0C40LL,(-1L)},{0xB39413F3FDAB4712LL,0L,9L},{0x89370F9CC212FB5ELL,0xB813B59847C97700LL,(-1L)}},{{(-1L),0L,0x05AB1E460F6B77FALL},{2L,(-1L),8L},{(-1L),0L,0xF8B64EC5ABDBE2C4LL},{(-1L),0x771349398016CFFDLL,0x25070E4F6F1D3827LL}}};
    int64_t l_2739 = 0xE8DDB75B18CC1661LL;
    uint64_t l_2744 = 1UL;
    uint32_t l_2785 = 0UL;
    uint32_t l_2822[3][7][1] = {{{9UL},{0x8C201340L},{9UL},{0x8C201340L},{9UL},{0x8C201340L},{9UL}},{{0x8C201340L},{9UL},{0x8C201340L},{9UL},{0x8C201340L},{9UL},{0x8C201340L}},{{9UL},{0x8C201340L},{9UL},{0x8C201340L},{9UL},{0x8C201340L},{9UL}}};
    struct S0 l_2825 = {0UL,0xAC0CL,0x90BD7031L};
    uint16_t l_2833 = 0UL;
    const union U2 l_2834 = {0xA1L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_29[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_2700[i] = 1L;
    if ((((safe_mul_func_uint8_t_u_u(0xCAL, (((safe_add_func_int16_t_s_s(((g_2683 = (safe_sub_func_uint64_t_u_u(0xABFD090D790F9584LL, (l_23 | func_24(l_28, (func_30((l_36 , ((*l_28) == ((*l_37) = (void*)0))), p_15, &g_3, &l_29[0], g_9[5]) == g_1175), g_1163[5][3][3]))))) , p_15), 0xE2B3L)) && p_16) , p_15))) >= p_16) < l_23))
    { 
        int32_t *l_2686[5];
        int8_t *l_2699[4][5];
        uint32_t l_2704 = 0xBC523E8AL;
        uint64_t *l_2708 = &g_2683;
        uint64_t * const *l_2707[5][3][4] = {{{&l_2708,&l_2708,(void*)0,&l_2708},{&l_2708,(void*)0,(void*)0,(void*)0},{&l_2708,&l_2708,&l_2708,(void*)0}},{{&l_2708,(void*)0,&l_2708,&l_2708},{&l_2708,&l_2708,&l_2708,&l_2708},{&l_2708,&l_2708,(void*)0,&l_2708}},{{&l_2708,(void*)0,(void*)0,(void*)0},{&l_2708,&l_2708,&l_2708,(void*)0},{&l_2708,(void*)0,&l_2708,&l_2708}},{{&l_2708,&l_2708,&l_2708,&l_2708},{&l_2708,&l_2708,(void*)0,&l_2708},{&l_2708,(void*)0,(void*)0,(void*)0}},{{&l_2708,&l_2708,&l_2708,(void*)0},{&l_2708,(void*)0,(void*)0,&l_2708},{(void*)0,&l_2708,&l_2708,(void*)0}}};
        uint64_t * const **l_2706 = &l_2707[0][1][0];
        uint64_t * const ** const *l_2705 = &l_2706;
        const struct S0 l_2724 = {0xA2B489EE9397DBD0LL,0x4418L,0UL};
        const union U2 l_2728 = {0UL};
        union U1 l_2733[7][7][5] = {{{{7UL},{1UL},{0UL},{3UL},{0x39D2L}},{{0UL},{8UL},{0x5BE6L},{8UL},{0UL}},{{0UL},{65534UL},{65533UL},{1UL},{1UL}},{{0x9832L},{0x5F95L},{0xA77FL},{65534UL},{65532UL}},{{0x39D2L},{1UL},{65534UL},{65534UL},{1UL}},{{0x6A47L},{65534UL},{1UL},{0x5B82L},{0UL}},{{1UL},{0UL},{0xDFF3L},{7UL},{0x39D2L}}},{{{0x9CE7L},{0x8DEFL},{0xA77FL},{0xBBE4L},{0xA77FL}},{{1UL},{1UL},{0xF544L},{3UL},{0UL}},{{0x6A47L},{0xBBE4L},{0x5BE6L},{0UL},{0x6A47L}},{{0x39D2L},{65534UL},{1UL},{7UL},{7UL}},{{0x9832L},{0xBBE4L},{0x9832L},{0x8DEFL},{65532UL}},{{0UL},{1UL},{3UL},{65534UL},{1UL}},{{0UL},{0x8DEFL},{1UL},{65526UL},{0x6A47L}}},{{{7UL},{0UL},{3UL},{1UL},{65530UL}},{{0x9CE7L},{65534UL},{0x9832L},{0x5F95L},{0xA77FL}},{{1UL},{1UL},{1UL},{3UL},{9UL}},{{0UL},{0x5F95L},{0x5BE6L},{0x5F95L},{0UL}},{{65530UL},{65534UL},{0xF544L},{1UL},{1UL}},{{0x9832L},{8UL},{0xA77FL},{65526UL},{65532UL}},{{9UL},{1UL},{0xDFF3L},{65534UL},{1UL}}},{{{0x6A47L},{65526UL},{1UL},{0x8DEFL},{0UL}},{{1UL},{0UL},{65534UL},{7UL},{9UL}},{{0x9CE7L},{0x5B82L},{0xA77FL},{0UL},{0xA77FL}},{{1UL},{1UL},{65533UL},{3UL},{65530UL}},{{0x6A47L},{0UL},{0x5BE6L},{0xBBE4L},{0x6A47L}},{{9UL},{65534UL},{0UL},{7UL},{1UL}},{{0x9832L},{0UL},{0x9832L},{0x5B82L},{65532UL}}},{{{65530UL},{1UL},{0UL},{65534UL},{7UL}},{{0UL},{0x5B82L},{1UL},{65534UL},{0x6A47L}},{{1UL},{0UL},{0UL},{1UL},{0UL}},{{0x9CE7L},{65526UL},{0x9832L},{8UL},{0xA77FL}},{{7UL},{1UL},{0UL},{3UL},{0x39D2L}},{{0UL},{8UL},{0x5BE6L},{8UL},{0UL}},{{0UL},{65534UL},{65533UL},{1UL},{1UL}}},{{{0x9832L},{0x5F95L},{0xA77FL},{65534UL},{65532UL}},{{0x39D2L},{1UL},{65534UL},{65534UL},{1UL}},{{0x6A47L},{65534UL},{1UL},{0x5B82L},{0UL}},{{1UL},{0UL},{0xDFF3L},{7UL},{0x39D2L}},{{0x9CE7L},{0x8DEFL},{0xA77FL},{0xBBE4L},{0xA77FL}},{{1UL},{1UL},{0xF544L},{3UL},{0UL}},{{0x6A47L},{0xBBE4L},{0x5BE6L},{0UL},{0x6A47L}}},{{{0x39D2L},{65534UL},{1UL},{7UL},{7UL}},{{0x9832L},{0xBBE4L},{0x9832L},{0x8DEFL},{65532UL}},{{0UL},{1UL},{3UL},{65534UL},{1UL}},{{0UL},{0x8DEFL},{1UL},{65526UL},{0x6A47L}},{{7UL},{0UL},{3UL},{1UL},{65530UL}},{{0x9CE7L},{65534UL},{0x9832L},{0x5F95L},{0xA77FL}},{{1UL},{1UL},{1UL},{3UL},{9UL}}}};
        int8_t ****l_2781 = &g_2413;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_2686[i] = &g_1961[0];
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 5; j++)
                l_2699[i][j] = (void*)0;
        }
lbl_2789:
        for (g_113 = 0; (g_113 > 0); ++g_113)
        { 
            uint8_t l_2687[3][5] = {{0xCAL,255UL,255UL,255UL,255UL},{0xD2L,2UL,255UL,0x45L,0x45L},{2UL,0xD2L,2UL,255UL,0x45L}};
            struct S0 l_2702 = {1UL,0x9313L,18446744073709551612UL};
            uint64_t ****l_2710[6][7][4] = {{{(void*)0,&g_574[1],&g_574[2],&g_574[2]},{(void*)0,(void*)0,(void*)0,&g_574[0]},{&g_574[2],&g_574[1],&g_574[0],&g_574[2]},{&g_574[2],&g_574[2],&g_574[2],&g_574[2]},{(void*)0,&g_574[0],&g_574[1],&g_574[2]},{&g_574[2],&g_574[1],(void*)0,&g_574[0]},{(void*)0,&g_574[1],&g_574[2],(void*)0}},{{&g_574[2],&g_574[2],&g_574[0],(void*)0},{&g_574[2],&g_574[1],&g_574[1],&g_574[2]},{&g_574[2],&g_574[2],&g_574[2],&g_574[2]},{(void*)0,&g_574[2],&g_574[1],&g_574[2]},{&g_574[2],&g_574[2],&g_574[2],&g_574[2]},{&g_574[1],&g_574[2],&g_574[2],&g_574[2]},{&g_574[1],&g_574[2],(void*)0,&g_574[2]}},{{&g_574[2],&g_574[2],(void*)0,&g_574[2]},{&g_574[2],&g_574[2],&g_574[1],&g_574[2]},{&g_574[0],&g_574[1],&g_574[2],(void*)0},{&g_574[1],&g_574[2],&g_574[2],(void*)0},{&g_574[0],&g_574[1],(void*)0,&g_574[0]},{&g_574[2],&g_574[1],(void*)0,&g_574[2]},{&g_574[0],&g_574[0],&g_574[1],&g_574[2]}},{{&g_574[2],&g_574[2],&g_574[2],&g_574[2]},{&g_574[1],&g_574[1],&g_574[1],&g_574[0]},{&g_574[0],(void*)0,&g_574[2],&g_574[2]},{&g_574[2],&g_574[1],&g_574[2],&g_574[0]},{&g_574[2],&g_574[2],&g_574[2],&g_574[2]},{(void*)0,&g_574[0],(void*)0,&g_574[2]},{&g_574[2],&g_574[0],&g_574[1],&g_574[1]}},{{&g_574[2],(void*)0,&g_574[1],&g_574[2]},{&g_574[1],(void*)0,(void*)0,&g_574[2]},{&g_574[1],&g_574[1],&g_574[1],&g_574[2]},{&g_574[2],(void*)0,&g_574[2],&g_574[0]},{&g_574[2],&g_574[0],&g_574[2],&g_574[0]},{(void*)0,&g_574[1],&g_574[1],(void*)0},{&g_574[2],&g_574[1],&g_574[1],&g_574[2]}},{{&g_574[1],(void*)0,(void*)0,&g_574[2]},{(void*)0,&g_574[2],&g_574[0],&g_574[2]},{&g_574[2],&g_574[2],&g_574[2],&g_574[2]},{&g_574[2],(void*)0,&g_574[1],&g_574[2]},{&g_574[1],&g_574[1],&g_574[2],&g_574[1]},{&g_574[1],&g_574[0],&g_574[1],&g_574[1]},{&g_574[0],&g_574[2],&g_574[2],&g_574[0]}}};
            int32_t l_2718 = 2L;
            int32_t l_2719[1][3];
            const uint32_t *l_2731[3][2][4] = {{{&g_232,&g_232,&g_1552[2],&g_1153},{(void*)0,&g_1552[1],(void*)0,&g_1552[2]}},{{(void*)0,&g_1552[2],&g_1552[2],(void*)0},{&g_232,&g_1552[2],&g_1153,&g_1552[2]}},{{&g_1552[2],&g_1552[1],&g_1153,&g_1153},{&g_232,&g_232,&g_1552[2],&g_1153}}};
            int16_t l_2741 = 0xBC1FL;
            int8_t l_2742[4];
            uint32_t l_2780 = 4UL;
            int16_t l_2786 = (-1L);
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_2719[i][j] = 0xE450B9B4L;
            }
            for (i = 0; i < 4; i++)
                l_2742[i] = (-1L);
            l_2686[1] = (*l_37);
            if (p_15)
                break;
            for (g_2059 = 0; (g_2059 <= 2); g_2059 += 1)
            { 
                union U2 l_2688[2][7] = {{{0xD4L},{0xD4L},{0xD4L},{0xD4L},{0xD4L},{0xD4L},{0xD4L}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}};
                int32_t l_2701 = 1L;
                struct S0 *l_2703 = &g_152;
                uint64_t * const ** const **l_2709[3];
                uint64_t *****l_2711 = (void*)0;
                uint64_t *****l_2712 = &l_2710[1][6][3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_2709[i] = (void*)0;
                if (l_2687[1][0])
                    break;
                for (g_232 = 0; (g_232 <= 2); g_232 += 1)
                { 
                    union U2 *l_2689 = &g_1585;
                    int64_t *l_2693 = (void*)0;
                    int64_t *l_2694 = &g_1863;
                    l_2701 = (((((*l_2689) = l_2688[0][3]) , &g_1264) != l_2690) <= (((safe_lshift_func_uint8_t_u_s(((((*l_2694) = 0x294EADF33544A01BLL) <= ((safe_mod_func_int16_t_s_s(p_16, (safe_add_func_uint64_t_u_u((((void*)0 != l_2699[3][4]) && l_2700[0]), l_2688[0][3].f0)))) != (*g_445))) >= g_1181), p_16)) , p_16) | p_16));
                    return (*l_2689);
                }
                (*l_2703) = l_2702;
                (*l_37) = func_49(l_2704, ((l_2705 = (p_16 , l_2705)) == ((*l_2712) = l_2710[1][6][3])), (safe_add_func_uint32_t_u_u((p_15 , (safe_sub_func_uint64_t_u_u((((&g_445 != (void*)0) , 0xC4L) != 0x52L), l_2687[2][3]))), 4294967287UL)), (*l_37));
                for (l_2702.f0 = 0; (l_2702.f0 <= 0); l_2702.f0 += 1)
                { 
                    int32_t l_2717 = 2L;
                    int i;
                    l_2717 |= ((*l_38) = g_168[l_2702.f0]);
                }
            }
            l_2719[0][0] |= (l_2718 = (-1L));
            for (g_322 = 0; (g_322 >= 26); g_322 = safe_add_func_uint64_t_u_u(g_322, 1))
            { 
                const union U2 l_2722 = {0xBDL};
                uint32_t l_2726 = 0xD4ABD1CFL;
                uint32_t *l_2732 = (void*)0;
                int32_t l_2745 = 1L;
                uint32_t l_2784 = 0x906FD5A8L;
                for (l_2718 = 0; (l_2718 <= 2); l_2718 += 1)
                { 
                    return l_2722;
                }
                if (((p_15 <= ((p_16 = ((((void*)0 == l_2723) , ((*g_445) && (l_2724 , ((!(-5L)) , ((l_2726 = 8L) || g_2727))))) != g_2151[6][3][0])) && (*g_1709))) <= 0xA774L))
                { 
                    return l_2728;
                }
                else
                { 
                    uint32_t *l_2737[7] = {(void*)0,&l_2726,&l_2726,(void*)0,&l_2726,&l_2726,(void*)0};
                    uint16_t *l_2740 = &l_2733[5][6][0].f0;
                    int32_t l_2743 = 0xF60A8644L;
                    uint8_t *l_2782 = &g_366;
                    uint8_t *l_2783 = &g_99.f0;
                    int i;
                    l_2745 = ((safe_div_func_int16_t_s_s((((l_2719[0][0] &= 0x9210L) != ((((*l_2740) = ((*g_445) = (((((*l_2708) = ((l_2731[0][0][0] == l_2732) | p_16)) ^ (((l_2733[5][6][0] , l_2733[5][6][0]) , (((((((((l_2718 = (!(((g_152.f2 &= (safe_mod_func_int8_t_s_s((l_2733[5][6][0] , p_16), p_16))) , l_2690) != l_2690))) ^ 0x3390FDD8L) > 1L) && l_2738[2][0][0]) || 0x0761L) && l_2722.f0) >= l_2739) == p_16) != 0UL)) | p_15)) >= p_15) && 0x2FA1L))) || l_2741) , l_2742[0])) >= l_2743), (*g_2390))) || l_2744);
                    (*l_37) = (void*)0;
                    (*l_28) = (void*)0;
                    l_2718 &= (((safe_lshift_func_int8_t_s_s((l_2745 ^ (l_2719[0][0] = (safe_mul_func_uint8_t_u_u(((*l_2783) = ((*l_2782) |= (safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s((((((safe_lshift_func_uint16_t_u_u((((*g_1025) == (g_1175 , ((safe_lshift_func_uint16_t_u_s((((safe_add_func_int32_t_s_s((l_2726 , (safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((!(safe_div_func_uint32_t_u_u((++g_421), (p_15 , (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_2780 = (safe_mul_func_uint16_t_u_u((*g_445), ((safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint8_t_u_u((0x30BEE8FB9DE34362LL == p_16), l_2743)) >= (*g_445)) < 65535UL), l_2726)) , (-6L))))), 255UL)), 5)))))), 1)), p_16)), 0x84L))), g_2727)) ^ p_16) | l_2743), p_15)) ^ (*g_1709)))) >= g_273[0][1][1]), (*g_445))) <= 0x16CF5EA0939428D2LL) , (void*)0) != l_2781) && 8L))) == p_16), p_15)))), l_2726)))), 4)) != 0x3376L) < l_2784);
                    l_2743 |= p_15;
                }
                l_2785 &= p_15;
                l_2786 |= 0x787F95F9L;
                return l_2722;
            }
        }
        for (g_152.f1 = 0; (g_152.f1 < 55); g_152.f1 = safe_add_func_int16_t_s_s(g_152.f1, 7))
        { 
            uint16_t l_2792 = 65535UL;
            int32_t l_2793 = 0x6C64EF85L;
            int32_t l_2802 = 1L;
            if (g_1585.f0)
                goto lbl_2789;
            for (g_322 = 0; (g_322 > 51); g_322 = safe_add_func_uint8_t_u_u(g_322, 9))
            { 
                union U1 ***l_2804 = &g_692;
                union U1 ****l_2803[7][6] = {{&l_2804,&l_2804,&l_2804,&l_2804,&l_2804,&l_2804},{&l_2804,&l_2804,&l_2804,&l_2804,&l_2804,&l_2804},{&l_2804,&l_2804,&l_2804,&l_2804,&l_2804,&l_2804},{&l_2804,&l_2804,&l_2804,&l_2804,&l_2804,&l_2804},{&l_2804,&l_2804,&l_2804,&l_2804,&l_2804,&l_2804},{&l_2804,&l_2804,&l_2804,&l_2804,&l_2804,&l_2804},{&l_2804,&l_2804,&l_2804,&l_2804,&l_2804,&l_2804}};
                int32_t l_2809 = (-1L);
                union U2 ****l_2818 = &g_1264;
                int i, j;
                l_2793 ^= l_2792;
                for (g_2179 = 0; (g_2179 <= 2); g_2179 += 1)
                { 
                    union U1 *****l_2805 = &l_2803[0][4];
                    int64_t *l_2808[2][6] = {{&g_168[0],&l_2700[0],&g_168[0],&g_168[0],&l_2700[0],&g_168[0]},{&g_168[0],&l_2700[0],&g_168[0],&g_168[0],&l_2700[0],&g_168[0]}};
                    struct S0 l_2810 = {18446744073709551612UL,0xB69DL,0x7A3FAA85L};
                    struct S0 *l_2811 = &l_2810;
                    int i, j;
                    l_2802 |= ((safe_div_func_int32_t_s_s(((p_16 > (safe_div_func_int16_t_s_s(p_16, ((*g_2390) &= ((safe_mod_func_int32_t_s_s((6L == ((((void*)0 == g_2490) == 0L) ^ (safe_rshift_func_uint16_t_u_u(0x5371L, 0)))), l_2793)) & 4294967289UL))))) >= 0xCE22L), 1UL)) >= 4UL);
                    (*l_2805) = l_2803[0][4];
                    l_2809 = (safe_mul_func_int8_t_s_s((-6L), ((void*)0 != l_2808[1][2])));
                    (*l_2811) = l_2810;
                }
                g_2819[1] &= ((((**g_1341) , (((p_15 , ((safe_add_func_uint32_t_u_u((((l_2809 == l_2809) , (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_2809, (l_2818 == l_2690))), 1))) <= 0x29L), 0x4C2C7E43L)) | p_15)) >= 1L) > l_2792)) , p_15) || 0x27L);
            }
            if (l_2792)
                continue;
        }
    }
    else
    { 
        union U2 *****l_2820 = (void*)0;
        int32_t *l_2823[7][4][6] = {{{&g_2824[2],&g_2824[2],(void*)0,&g_2824[2],&g_2824[2],(void*)0},{&g_2824[2],&g_2824[2],&g_2824[2],&g_2824[2],&g_2824[2],&g_2824[2]},{&g_2824[2],&g_2824[0],&g_2824[2],&g_2824[2],&g_2824[0],&g_2824[2]},{&g_2824[4],(void*)0,&g_2824[2],(void*)0,&g_2824[2],&g_2824[2]}},{{&g_2824[2],(void*)0,&g_2824[6],(void*)0,&g_2824[5],&g_2824[2]},{&g_2824[2],&g_2824[2],(void*)0,(void*)0,&g_2824[2],&g_2824[2]},{&g_2824[4],&g_2824[2],(void*)0,&g_2824[2],&g_2824[2],&g_2824[2]},{(void*)0,&g_2824[5],(void*)0,&g_2824[2],(void*)0,&g_2824[5]}},{{&g_2824[0],(void*)0,&g_2824[2],&g_2824[2],&g_2824[2],(void*)0},{(void*)0,&g_2824[6],&g_2824[5],&g_2824[2],&g_2824[6],&g_2824[2]},{(void*)0,(void*)0,&g_2824[2],&g_2824[2],(void*)0,&g_2824[0]},{&g_2824[2],(void*)0,&g_2824[2],&g_2824[2],&g_2824[1],(void*)0}},{{&g_2824[2],&g_2824[1],&g_2824[2],&g_2824[2],&g_2824[2],&g_2824[2]},{(void*)0,(void*)0,(void*)0,&g_2824[2],&g_2824[2],&g_2824[2]},{(void*)0,(void*)0,&g_2824[5],&g_2824[2],&g_2824[2],&g_2824[0]},{&g_2824[0],&g_2824[4],&g_2824[2],&g_2824[2],&g_2824[6],&g_2824[2]}},{{(void*)0,&g_2824[2],(void*)0,&g_2824[2],&g_2824[2],&g_2824[0]},{(void*)0,(void*)0,&g_2824[2],&g_2824[2],&g_2824[2],(void*)0},{&g_2824[2],&g_2824[2],&g_2824[5],&g_2824[2],&g_2824[2],&g_2824[2]},{&g_2824[2],(void*)0,&g_2824[2],&g_2824[2],&g_2824[2],&g_2824[5]}},{{(void*)0,&g_2824[2],&g_2824[5],&g_2824[2],&g_2824[1],&g_2824[2]},{(void*)0,&g_2824[2],&g_2824[5],&g_2824[2],&g_2824[1],&g_2824[2]},{&g_2824[0],(void*)0,&g_2824[2],&g_2824[2],&g_2824[2],&g_2824[5]},{(void*)0,&g_2824[2],&g_2824[2],&g_2824[2],&g_2824[2],(void*)0}},{{(void*)0,&g_2824[4],(void*)0,&g_2824[2],&g_2824[1],&g_2824[2]},{&g_2824[2],&g_2824[5],(void*)0,&g_2824[2],&g_2824[2],&g_2824[5]},{&g_2824[2],&g_2824[2],&g_2824[2],&g_2824[2],&g_2824[2],&g_2824[0]},{(void*)0,&g_2824[1],&g_2824[5],&g_2824[2],&g_2824[2],&g_2824[2]}}};
        int32_t l_2828[5];
        int32_t l_2829[6] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
        int64_t *l_2830[1][6][2] = {{{(void*)0,&l_2739},{&l_2738[2][0][0],&l_2738[2][0][0]},{&l_2738[2][0][0],&l_2739},{(void*)0,&l_2738[0][3][2]},{&l_2739,&l_2738[0][3][2]},{(void*)0,&l_2739}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_2828[i] = 0L;
        g_2821[2][3][2] = l_2690;
        if (((l_2822[0][6][0] , (((l_2823[2][2][0] != (l_2825 , l_2823[5][1][1])) && (safe_div_func_int64_t_s_s((l_2828[1] = l_2828[1]), (g_168[0] = l_2829[1])))) , (((**g_1341) , (void*)0) != (*g_1264)))) <= 0x14DF9331L))
        { 
            const union U2 l_2831 = {0UL};
            return l_2831;
        }
        else
        { 
            return g_2832;
        }
    }
    l_2833 |= ((void*)0 != &l_37);
    return l_2834;
}



static const int8_t  func_24(int32_t ** p_25, uint16_t  p_26, uint32_t  p_27)
{ 
    int32_t *l_2200 = &g_1961[0];
    int32_t *l_2201 = (void*)0;
    int32_t *l_2202 = &g_9[0];
    int32_t *l_2203 = &g_1961[0];
    int32_t *l_2204 = &g_1961[0];
    int32_t *l_2205 = (void*)0;
    int32_t *l_2206 = &g_1961[0];
    int32_t l_2207 = 0xB294ED0EL;
    int32_t l_2208 = 0x0F5D83B7L;
    int32_t *l_2209 = &l_2208;
    int32_t *l_2210 = &g_2179;
    int32_t *l_2211 = (void*)0;
    int32_t *l_2212[4][7][2] = {{{&g_2179,&l_2208},{&l_2208,&g_1961[0]},{&g_2179,&g_1961[0]},{&g_1961[0],&g_1961[0]},{&g_2179,&g_1961[0]},{&l_2208,&l_2208},{&g_2179,&l_2208}},{{&g_2179,&g_3},{&l_2208,&g_1961[0]},{&g_1961[0],&l_2208},{&l_2208,&g_2179},{&l_2208,&l_2208},{&g_1961[0],&g_1961[0]},{&l_2208,&g_3}},{{&g_2179,&l_2208},{&g_2179,&l_2208},{&l_2208,&g_1961[0]},{&g_2179,&g_1961[0]},{&g_1961[0],&g_1961[0]},{&g_2179,&g_1961[0]},{&l_2208,&l_2208}},{{&g_2179,&g_1961[0]},{&l_2207,&l_2207},{&g_1961[0],&g_2179},{&g_1961[0],&g_1961[0]},{&g_1961[0],&g_9[3]},{&g_1961[0],&g_1961[0]},{&g_1961[0],&g_2179}}};
    int8_t l_2213 = (-1L);
    int32_t l_2214[6] = {(-9L),0x09544605L,0x09544605L,(-9L),0x09544605L,0x09544605L};
    int32_t l_2215 = 0xCCC9B57DL;
    uint64_t l_2216[5];
    int32_t l_2258 = 1L;
    const struct S0 *l_2271 = (void*)0;
    int32_t *l_2314 = &l_2214[5];
    int16_t **l_2388 = &g_1352;
    int16_t ***l_2387 = &l_2388;
    uint8_t l_2393 = 255UL;
    union U2 l_2450 = {0UL};
    uint32_t l_2465 = 0UL;
    int8_t l_2469 = 4L;
    int64_t l_2487 = 0xD7D2406A5D1B2FBCLL;
    struct S0 l_2503[3][6] = {{{0x12F5EF6DCB81CFC5LL,0x4394L,0UL},{0xDDDB354BDEC019F1LL,0x30EEL,1UL},{18446744073709551615UL,0x2964L,0x97732DE2L},{0UL,0UL,0x558E41C5L},{0UL,0UL,0x558E41C5L},{18446744073709551615UL,0x2964L,0x97732DE2L}},{{0x12F5EF6DCB81CFC5LL,0x4394L,0UL},{0x12F5EF6DCB81CFC5LL,0x4394L,0UL},{0UL,0UL,0x558E41C5L},{0x50CDF5A65C614332LL,0x795AL,0xC7E761D4L},{18446744073709551615UL,0xC5F1L,1UL},{0x50CDF5A65C614332LL,0x795AL,0xC7E761D4L}},{{0xDDDB354BDEC019F1LL,0x30EEL,1UL},{0x12F5EF6DCB81CFC5LL,0x4394L,0UL},{0xDDDB354BDEC019F1LL,0x30EEL,1UL},{18446744073709551615UL,0x2964L,0x97732DE2L},{0UL,0UL,0x558E41C5L},{0UL,0UL,0x558E41C5L}}};
    int16_t l_2510 = 2L;
    const union U1 * const l_2553 = &g_1533;
    uint8_t l_2587 = 1UL;
    int8_t l_2604[3];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_2216[i] = 0x40ECF18E7FE267ECLL;
    for (i = 0; i < 3; i++)
        l_2604[i] = (-1L);
lbl_2485:
    ++l_2216[0];
    for (g_421 = 0; (g_421 < 14); g_421++)
    { 
        uint32_t l_2221 = 6UL;
        int16_t *l_2232 = &g_2151[2][0][0];
        uint32_t *l_2239 = &g_1552[0];
        uint64_t ***l_2242 = (void*)0;
        int8_t *l_2243 = &l_2213;
        int8_t *l_2244 = (void*)0;
        int32_t l_2316 = 0x4CE8065FL;
        int32_t l_2317 = 0x73B2CDE9L;
        int32_t l_2318 = (-1L);
        int32_t l_2319 = 0x96501CBDL;
        int32_t l_2320[2];
        uint8_t l_2324 = 0x6DL;
        uint32_t l_2378 = 0xED02DF72L;
        struct S0 *l_2396 = &g_152;
        int32_t *l_2405 = &l_2316;
        union U1 l_2449 = {1UL};
        union U2 **l_2494 = &g_673[1];
        uint16_t l_2499 = 0x7AD5L;
        int32_t l_2536 = (-1L);
        uint32_t l_2537[5] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        const union U1 *l_2554 = &g_67;
        union U2 **** const l_2598 = &g_1264;
        int32_t l_2602 = 0x5936AB0FL;
        int16_t l_2603 = 0xC92EL;
        uint8_t l_2605 = 0xF5L;
        uint64_t * const l_2650 = &g_2651;
        uint64_t * const *l_2649[1];
        uint64_t * const **l_2648 = &l_2649[0];
        uint64_t * const ***l_2647 = &l_2648;
        uint64_t * const ****l_2646[7];
        int i;
        for (i = 0; i < 2; i++)
            l_2320[i] = 0xC99BBA30L;
        for (i = 0; i < 1; i++)
            l_2649[i] = &l_2650;
        for (i = 0; i < 7; i++)
            l_2646[i] = &l_2647;
        l_2221++;
        if ((safe_unary_minus_func_int8_t_s((g_106 = (((!0xEEB869F02853F57ALL) ^ (((l_2221 , ((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((((((*l_2209) = (-8L)) ^ ((*g_1352) < (((*l_2243) = (safe_lshift_func_int16_t_s_u(((*l_2232) = (*l_2202)), (safe_lshift_func_uint16_t_u_u((p_27 && (((safe_unary_minus_func_int64_t_s(((safe_div_func_int32_t_s_s(((~((*l_2239)++)) || ((l_2221 , (*g_573)) == l_2242)), 0x22BA4377L)) , 0x3B72B04C288A470ELL))) , 255UL) ^ (*g_1709))), 1))))) != (*g_1709)))) && l_2221) | p_26) & 0x807FCD2DL) != 0x07DDA21348D3741ALL), 0UL)) || p_27), p_26)) < 246UL)) , (void*)0) == (void*)0)) , p_27)))))
        { 
            int32_t l_2245 = 1L;
            int32_t l_2304 = (-4L);
            union U1 l_2340 = {0x2008L};
            int32_t l_2359 = 0x6EBD1A48L;
            uint32_t l_2368 = 0x9D05AD4EL;
            int16_t **l_2386 = (void*)0;
            int16_t ***l_2385 = &l_2386;
            g_2246++;
            for (g_106 = 22; (g_106 == (-8)); g_106--)
            { 
                uint8_t l_2251[7] = {0x6EL,0x6EL,0x1EL,0x6EL,0x6EL,0x1EL,0x6EL};
                int32_t l_2310 = (-2L);
                int32_t *l_2315 = &l_2214[4];
                int32_t l_2321 = 0xE8386EECL;
                int32_t l_2322 = 0xB1128E73L;
                int32_t l_2323 = 4L;
                uint16_t l_2348 = 0UL;
                int32_t l_2360 = 0L;
                int i;
                if ((l_2245 == l_2251[4]))
                { 
                    int32_t ***l_2262 = &g_48;
                    int32_t ****l_2263 = &l_2262;
                    struct S0 l_2266 = {0x93ED212E763AC173LL,0UL,0x901C2DECL};
                    (*l_2209) = (safe_mul_func_uint8_t_u_u((((((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_2258, 2)), (safe_rshift_func_uint16_t_u_u(((+(&p_25 != ((*l_2263) = l_2262))) > (safe_lshift_func_uint8_t_u_u(((l_2266 , &l_2242) != ((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((-9L), (((0xAF66L != p_27) | l_2221) , 0x027EL))), (*l_2206))) , (void*)0)), 7))), (*g_445))))) != g_4) , &l_2266) != l_2271) || (*g_445)), (**g_1024)));
                }
                else
                { 
                    (*l_2200) |= l_2251[3];
                }
                for (g_99.f0 = 0; (g_99.f0 >= 17); g_99.f0 = safe_add_func_uint32_t_u_u(g_99.f0, 4))
                { 
                    uint8_t *l_2301 = &l_2251[4];
                    uint16_t *l_2305 = &g_152.f1;
                    int32_t l_2306[7][6][3] = {{{1L,0xA196A20AL,0L},{0x0234B259L,1L,0L},{0xCB37DF4DL,0x0234B259L,1L},{6L,6L,1L},{0xCB37DF4DL,1L,0x0234B259L},{0x0234B259L,1L,0xCB37DF4DL}},{{1L,6L,6L},{1L,0x0234B259L,0xCB37DF4DL},{0L,1L,0x0234B259L},{0L,0xA196A20AL,1L},{1L,0x80885272L,1L},{1L,0xA196A20AL,0L}},{{0x0234B259L,1L,0L},{0xCB37DF4DL,0x0234B259L,1L},{6L,6L,1L},{0xCB37DF4DL,1L,0x0234B259L},{0x0234B259L,1L,0xCB37DF4DL},{1L,6L,6L}},{{1L,0x0234B259L,0xCB37DF4DL},{0L,1L,0x0234B259L},{0L,0xA196A20AL,1L},{1L,0x80885272L,1L},{1L,0xA196A20AL,0L},{0x0234B259L,1L,0L}},{{0xCB37DF4DL,0x0234B259L,1L},{6L,6L,1L},{0xCB37DF4DL,1L,0x0234B259L},{0x0234B259L,1L,0xCB37DF4DL},{1L,6L,6L},{1L,0x0234B259L,0xCB37DF4DL}},{{0L,1L,0x0234B259L},{0L,0xA196A20AL,1L},{1L,0x80885272L,1L},{1L,0xA196A20AL,0L},{0x0234B259L,1L,0L},{0xCB37DF4DL,0x0234B259L,1L}},{{6L,6L,1L},{0xCB37DF4DL,1L,0x0234B259L},{0x0234B259L,1L,0xCB37DF4DL},{1L,6L,6L},{1L,0x0234B259L,0xCB37DF4DL},{0L,1L,0x0234B259L}}};
                    uint8_t *l_2307[7];
                    uint32_t l_2308[1];
                    struct S0 l_2309 = {0UL,0UL,0x93E3E66BL};
                    int32_t **l_2311 = (void*)0;
                    int32_t *l_2313 = &l_2214[1];
                    int32_t **l_2312[4][5] = {{&l_2313,&l_2313,&l_2313,&l_2313,&l_2313},{&l_2313,&l_2313,&l_2313,&l_2313,&l_2313},{&l_2313,&l_2313,&l_2313,&l_2313,&l_2313},{&l_2313,&l_2313,&l_2313,&l_2313,(void*)0}};
                    union U1 l_2341 = {0UL};
                    uint64_t *l_2346[4][4][4] = {{{&g_152.f0,&g_152.f0,&l_2216[0],&g_152.f0},{&g_152.f0,&l_2216[0],&l_2216[0],&g_152.f0},{&l_2216[0],&g_152.f0,&l_2216[0],&l_2216[0]},{&g_152.f0,&g_152.f0,&l_2216[0],&g_152.f0}},{{&g_152.f0,&l_2216[0],&l_2216[0],&g_152.f0},{&l_2216[0],&g_152.f0,&l_2216[0],&l_2216[0]},{&g_152.f0,&g_152.f0,&l_2216[0],&g_152.f0},{&g_152.f0,&l_2216[0],&l_2216[0],&g_152.f0}},{{&l_2216[0],&g_152.f0,&l_2216[0],&l_2216[0]},{&g_152.f0,&g_152.f0,&l_2216[0],&g_152.f0},{&g_152.f0,&l_2216[0],&l_2216[0],&g_152.f0},{&l_2216[0],&g_152.f0,&l_2216[0],&l_2216[0]}},{{&g_152.f0,&g_152.f0,&l_2216[0],&g_152.f0},{&g_152.f0,&l_2216[0],&l_2216[0],&g_152.f0},{&l_2216[0],&g_152.f0,&l_2216[0],&l_2216[0]},{&g_152.f0,&g_152.f0,&l_2216[0],&g_152.f0}}};
                    int16_t l_2347 = 6L;
                    int64_t *l_2351 = (void*)0;
                    int64_t *l_2352 = (void*)0;
                    int64_t *l_2353[7] = {&g_1863,(void*)0,(void*)0,&g_1863,(void*)0,(void*)0,&g_1863};
                    int8_t *l_2354 = &g_1325;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_2307[i] = &g_2246;
                    for (i = 0; i < 1; i++)
                        l_2308[i] = 4294967295UL;
                    (*l_2204) &= (((safe_mod_func_int64_t_s_s(((((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((*g_1709) | ((l_2314 = ((((!((((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((l_2308[0] |= ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s((l_2306[4][1][1] = ((*l_2305) ^= ((safe_unary_minus_func_uint16_t_u(((((l_2245 = (~((safe_add_func_int64_t_s_s((((*g_1352) == (safe_div_func_uint64_t_u_u(p_27, (safe_add_func_int16_t_s_s((((*g_1025) = (l_2245 & 0x6FL)) | ((*l_2301) = 0x3EL)), (safe_add_func_uint64_t_u_u(0xA57D0B8B1B7BE437LL, 5UL))))))) || p_27), 0x657138A263075C3BLL)) || 0L))) && (*g_1709)) , p_26) >= l_2304))) , 0x2F6DL))), 14)) , 0x1895L), (*g_1352))) >= (-5L)), p_27)) , l_2245)), p_27)), 6)), (*g_445))) , l_2309) , 1UL) || 0xFFE464A8L)) != l_2310) , p_26) , l_2239)) != l_2315)), 0x20L)), (-7L))) , p_26) <= p_27) < p_26), 0x167078620BE5BC48LL)) <= 0xEB00L) > p_26);
                    l_2324++;
                    l_2245 = (safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((void*)0 == &g_1863), (safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((*l_2354) ^= (~(safe_mul_func_int8_t_s_s(0x91L, ((*l_2301) |= (l_2340 , (l_2341 , ((((*g_445) = (safe_div_func_int8_t_s_s((((*l_2243) |= ((((*l_2209) = ((safe_add_func_int64_t_s_s((l_2319 > (l_2348--)), (((*l_2232) &= (g_67.f3 , 0xEAC7L)) || 0xE085L))) > 0xB9L)) | p_27) , 0xC5L)) || 0x16L), p_26))) > g_1552[4]) <= 0xCDEFL)))))))), l_2306[2][2][0])) , 0x66L), l_2320[0])))) == 0x2AE2L), 0UL)), p_27));
                    return p_26;
                }
                for (g_152.f2 = (-5); (g_152.f2 < 39); g_152.f2 = safe_add_func_int32_t_s_s(g_152.f2, 5))
                { 
                    int8_t l_2357 = 0x72L;
                    int32_t l_2358 = 0x0FC7AD37L;
                    uint32_t l_2361[6][7][2] = {{{7UL,0x8961EDC5L},{0x8961EDC5L,0x74FC9ED8L},{0xD526DDCCL,9UL},{7UL,0xD526DDCCL},{9UL,0x74FC9ED8L},{9UL,0xD526DDCCL},{7UL,9UL}},{{0xD526DDCCL,0x74FC9ED8L},{0x8961EDC5L,0x8961EDC5L},{7UL,0x8961EDC5L},{0x8961EDC5L,0x74FC9ED8L},{0xD526DDCCL,9UL},{7UL,0xD526DDCCL},{9UL,0x74FC9ED8L}},{{9UL,0xD526DDCCL},{7UL,9UL},{0xD526DDCCL,0x74FC9ED8L},{0x8961EDC5L,0x8961EDC5L},{7UL,0x8961EDC5L},{0x8961EDC5L,0x74FC9ED8L},{0xD526DDCCL,9UL}},{{7UL,0xD526DDCCL},{9UL,0x74FC9ED8L},{9UL,0xD526DDCCL},{7UL,9UL},{0xD526DDCCL,0x74FC9ED8L},{0x8961EDC5L,0x8961EDC5L},{7UL,0x8961EDC5L}},{{0x8961EDC5L,0x74FC9ED8L},{0xD526DDCCL,9UL},{7UL,0xD526DDCCL},{9UL,0x74FC9ED8L},{9UL,0xD526DDCCL},{7UL,9UL},{0xD526DDCCL,0x74FC9ED8L}},{{0x8961EDC5L,0x8961EDC5L},{7UL,0x8961EDC5L},{0x8961EDC5L,0x74FC9ED8L},{0xD526DDCCL,9UL},{7UL,0xD526DDCCL},{9UL,0x74FC9ED8L},{9UL,0xD526DDCCL}}};
                    uint64_t *l_2369 = &l_2216[0];
                    int i, j, k;
                    l_2361[3][0][1]--;
                    (*l_2206) = (safe_rshift_func_int16_t_s_u(((safe_sub_func_uint64_t_u_u(l_2368, ((*l_2369) = p_26))) | (((safe_div_func_uint16_t_u_u(((!((l_2359 = (safe_mod_func_uint16_t_u_u(((void*)0 != &g_1341), ((+(p_26 == ((*g_1025) = (safe_lshift_func_int16_t_s_u((-7L), l_2378))))) , (*g_1352))))) , p_27)) != (-1L)), 0xE1ABL)) ^ l_2340.f0) < l_2317)), l_2320[0]));
                }
            }
            (*l_2209) = ((((safe_lshift_func_uint8_t_u_s((7L || ((*g_1352) = (safe_sub_func_uint16_t_u_u(((0x862B6342L || ((safe_div_func_uint32_t_u_u((((void*)0 == &l_2213) >= (p_26 > (((*l_2239) = p_27) > ((((*g_1352) < p_26) && 0xDEEAF01AL) , 0x6BB2935AL)))), p_27)) == p_27)) <= p_27), (*l_2206))))), 5)) || (*g_445)) == l_2245) >= 0x903C9904L);
            (*l_2200) ^= ((((*l_2210) &= l_2318) | (p_27 && ((l_2385 == l_2387) , (((l_2232 = ((*l_2388) = (*l_2388))) == (g_2390 = (g_2389 = &g_2151[2][0][0]))) == (((safe_sub_func_uint8_t_u_u(0xD8L, l_2316)) == (**g_1024)) | l_2378))))) > l_2393);
            for (l_2208 = (-17); (l_2208 < 2); l_2208++)
            { 
                union U2 l_2397 = {0x5BL};
                uint8_t **l_2408 = &g_1025;
                if ((((l_2396 != (void*)0) <= (&g_99 != (void*)0)) && (p_27 != 0xDC6756F2L)))
                { 
                    (*l_2203) |= ((l_2397 , ((safe_rshift_func_int16_t_s_u((l_2340 , ((p_27 , (p_27 ^ ((safe_lshift_func_uint16_t_u_s((*g_445), (*g_2390))) , (safe_add_func_uint8_t_u_u(((*g_1025) = (((p_26 < l_2340.f0) && p_26) ^ 0x5CA7A6CA386CA4E4LL)), (*l_2202)))))) || 0x2C94L)), 9)) <= l_2304)) <= p_26);
                    l_2359 &= (l_2324 >= (+(*l_2209)));
                    return l_2397.f0;
                }
                else
                { 
                    uint16_t l_2409[3][4] = {{0xA5C4L,65530UL,65530UL,0xA5C4L},{65530UL,65530UL,65528UL,65530UL},{65530UL,0x7FB6L,65528UL,65528UL}};
                    int i, j;
                    (*p_25) = l_2405;
                    (*l_2405) = ((p_26 , (void*)0) != (((*l_2206) = (((*g_2390) | 0x0745L) || ((*g_445) <= (safe_mod_func_int64_t_s_s((&g_574[0] != (void*)0), (*l_2405)))))) , l_2408));
                    l_2409[1][1]++;
                }
            }
        }
        else
        { 
            uint16_t l_2425 = 6UL;
            uint16_t **l_2433 = (void*)0;
            if ((*l_2405))
                break;
            for (l_2207 = 0; (l_2207 <= 4); l_2207 += 1)
            { 
                struct S0 l_2412 = {0xAD38EBAADA4104C4LL,0xB8D9L,18446744073709551615UL};
                int32_t l_2430 = 0xE8875302L;
                uint8_t l_2438 = 255UL;
            }
        }
        if ((*l_2405))
            continue;
        for (l_2258 = 1; (l_2258 >= 0); l_2258 -= 1)
        { 
            return p_26;
        }
        for (l_2221 = 0; (l_2221 <= 3); l_2221 += 1)
        { 
            int16_t l_2457 = (-10L);
            int32_t l_2464 = 0x265930A2L;
            uint8_t l_2472 = 255UL;
            int32_t l_2476 = 0x62BC26D7L;
            int32_t l_2478 = (-8L);
            int32_t l_2480 = 0L;
            uint8_t ***l_2492[1][5] = {{&g_1024,&g_1024,&g_1024,&g_1024,&g_1024}};
            uint8_t ****l_2491[1][6] = {{&l_2492[0][4],&l_2492[0][1],&l_2492[0][1],&l_2492[0][4],&l_2492[0][1],&l_2492[0][1]}};
            uint64_t l_2508 = 0xEB130CEF9EFC5373LL;
            union U1 ***l_2530 = &g_692;
            int32_t l_2582 = 0xEF3A59EEL;
            int32_t l_2583 = (-3L);
            int32_t l_2585 = 0xB2272AF2L;
            uint32_t *l_2590 = &g_1552[4];
            int64_t l_2621 = 1L;
            const struct S0 l_2628[2] = {{0xCEB82B1054114055LL,0xB39BL,0x4583231AL},{0xCEB82B1054114055LL,0xB39BL,0x4583231AL}};
            int i, j;
            for (g_152.f0 = 0; (g_152.f0 <= 1); g_152.f0 += 1)
            { 
                int8_t **l_2451 = &l_2243;
                const uint16_t **l_2452 = (void*)0;
                int32_t l_2471 = (-10L);
                int32_t l_2475 = 0x145B2DFAL;
                int32_t l_2477 = 0xF979F36CL;
                int32_t l_2479[3];
                int64_t l_2481 = 0x1A0A693CB0AE595ELL;
                uint64_t *l_2486 = &g_1181;
                union U2 **l_2493[1];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_2479[i] = 1L;
                for (i = 0; i < 1; i++)
                    l_2493[i] = &g_673[1];
                if ((safe_sub_func_uint16_t_u_u(((((**g_1024) &= g_9[l_2221]) , &g_1709) != (((safe_mod_func_uint64_t_u_u(p_26, (safe_div_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((0x1DL < ((safe_add_func_int8_t_s_s((l_2449 , ((((*l_2243) = (l_2450 , (p_26 == (*g_445)))) < 0x9FL) ^ g_4)), p_26)) & 0x51CF86B4L)) <= (*l_2405)), 0xD9L)) != (*g_445)), p_26)))) ^ 0x316BE48E941699B2LL) , l_2451)), 65535UL)))
                { 
                    return (*g_1709);
                }
                else
                { 
                    int64_t *l_2458 = (void*)0;
                    int64_t *l_2459 = &g_168[0];
                    int64_t *l_2460 = &l_2449.f2;
                    int64_t *l_2461 = &g_67.f2;
                    int64_t *l_2462 = &l_2449.f2;
                    int64_t *l_2463 = &g_1533.f2;
                    int32_t l_2466 = 1L;
                    int32_t l_2467 = 0L;
                    int32_t l_2468[4][2] = {{0L,0xC04A6F3AL},{0L,0xC04A6F3AL},{0L,0xC04A6F3AL},{0L,0xC04A6F3AL}};
                    int8_t l_2470 = 0xBEL;
                    uint8_t l_2482[3][2] = {{0x17L,0x84L},{0x84L,0x17L},{0x84L,0x84L}};
                    int i, j, k;
                    (*l_2200) = (0xF52F9216L <= (&g_445 != l_2452));
                    (*l_2204) = (safe_mod_func_uint8_t_u_u(((**g_1024) = (safe_mod_func_int64_t_s_s(((*l_2459) = l_2457), (l_2464 ^= g_2151[2][0][0])))), l_2465));
                    l_2472--;
                    --l_2482[0][0];
                }
                if (g_4)
                    goto lbl_2485;
                if (p_26)
                    continue;
                if (((&l_2393 != &l_2393) & (0x2CCC5DA8L ^ ((((((*l_2486) |= 18446744073709551612UL) == ((*g_692) != &l_2449)) & (*l_2405)) ^ 0xF8B4L) & l_2487))))
                { 
                    (*l_2209) ^= 1L;
                }
                else
                { 
                    int64_t *l_2509[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2509[i] = &l_2487;
                    (*l_2206) ^= ((l_2464 = (safe_lshift_func_int16_t_s_s(((***l_2387) = ((*g_2389) = (g_2490 == l_2491[0][1]))), (g_2432[l_2221][l_2221][g_152.f0] == (void*)0)))) == ((((*g_1264) = l_2493[0]) == l_2494) >= ((void*)0 == &l_2206)));
                    (*p_25) = ((safe_div_func_uint32_t_u_u((((*l_2405) = ((((((*l_2239)++) || (l_2499 | (!((((l_2478 = (((*l_2486) = ((((safe_rshift_func_int8_t_s_s(((**l_2451) &= ((l_2503[2][1] = (*l_2396)) , l_2464)), 4)) , (*g_1352)) , (safe_rshift_func_int16_t_s_u((*l_2405), 9))) >= (safe_add_func_int32_t_s_s(l_2476, (0x17L >= l_2508))))) || g_1710[4][0])) ^ 0x1FL) != 1L) | g_273[0][0][1])))) , p_26) , l_2450) , 0x4FA5F51338D015C9LL)) < p_26), p_26)) , (void*)0);
                    if (l_2449.f3)
                        goto lbl_2485;
                    if (l_2510)
                        continue;
                }
                (*g_692) = g_2511;
            }
            l_2537[3] = ((safe_sub_func_uint32_t_u_u((((safe_unary_minus_func_uint32_t_u((safe_mul_func_uint8_t_u_u((l_2476 &= ((safe_unary_minus_func_uint32_t_u((((((*g_445) , (safe_mod_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(g_1961[0], (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u((((((((safe_lshift_func_uint8_t_u_s((&g_1341 == l_2530), (safe_div_func_uint8_t_u_u(((*g_1025) = ((void*)0 == g_2533)), (safe_mod_func_int32_t_s_s(p_27, p_27)))))) > 0x2E33L) || (*l_2405)) > p_26) && l_2536) | p_27) & 0L), g_273[0][0][1])), 14)), 2)))), g_9[3]))) || 0x4D95B1A96398B6AALL) == p_26) != 2L))) <= (*l_2405))), p_26)))) , (-1L)) <= p_27), g_421)) | p_27);
            for (l_2449.f2 = 1; (l_2449.f2 >= 0); l_2449.f2 -= 1)
            { 
                int64_t *l_2540 = &g_1863;
                int i;
                (*l_2202) = (0x2C9377FA699B9E67LL >= ((*l_2540) = (safe_rshift_func_uint8_t_u_s((((void*)0 != &l_2216[(l_2221 + 1)]) >= 4294967294UL), 3))));
                if (p_27)
                    continue;
            }
            for (g_1585.f0 = 0; (g_1585.f0 <= 1); g_1585.f0 += 1)
            { 
                uint64_t ****l_2551 = &g_574[2];
                int32_t l_2569 = (-1L);
                int32_t l_2572 = 0x58E84E05L;
                int32_t l_2577 = (-8L);
                int32_t l_2578 = 2L;
                int32_t l_2579 = 0xA5ABCC8AL;
                int32_t l_2580 = (-10L);
                int32_t l_2581 = (-9L);
                int32_t l_2584 = (-8L);
                int32_t l_2586 = 5L;
                uint8_t l_2591 = 255UL;
                uint32_t l_2611 = 0xF5041DBCL;
                union U1 l_2623 = {0x42B7L};
                uint64_t * const *l_2645[3];
                uint64_t * const **l_2644 = &l_2645[0];
                uint64_t * const ***l_2643 = &l_2644;
                uint64_t * const ****l_2642 = &l_2643;
                int16_t l_2664 = 0xE577L;
                const struct S0 l_2665 = {18446744073709551609UL,0x55FFL,0x408753EDL};
                int i;
                for (i = 0; i < 3; i++)
                    l_2645[i] = (void*)0;
                for (g_366 = 0; (g_366 <= 1); g_366 += 1)
                { 
                    const int32_t l_2552 = 1L;
                    int32_t l_2570 = 0x17CA1FBDL;
                    uint64_t *l_2571[1];
                    int32_t l_2573 = 0xD65C5555L;
                    int32_t l_2574 = 0xC243C613L;
                    int32_t l_2575 = 0xE1D9824FL;
                    int32_t l_2576[4] = {0x0CA5980EL,0x0CA5980EL,0x0CA5980EL,0x0CA5980EL};
                    const uint32_t l_2599 = 0x5C9A78FFL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_2571[i] = &l_2216[0];
                    l_2554 = ((((*l_2209) |= ((((*l_2243) ^= (safe_add_func_uint8_t_u_u(0xD5L, (safe_lshift_func_uint8_t_u_s(((*l_2396) , (~((&p_25 != (void*)0) && (~g_9[1])))), 7))))) == p_26) <= ((safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((void*)0 == l_2551), p_27)), l_2552)) , 0x803BL))) ^ p_27) , l_2553);
                    l_2591 &= ((*l_2405) ^= (safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u(((l_2552 == (((*l_2553) , (((((g_152.f2 & (((*l_2553) , ((safe_rshift_func_int16_t_s_u(p_26, 2)) || l_2552)) , ((l_2590 = func_49((((*l_2243) = (safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((((--l_2587) | 7UL) == 8UL), l_2573)), p_26))) != l_2582), p_26, (*g_445), &l_2578)) != &g_232))) | (*l_2204)) != 2UL) | 0x0D61L) || l_2573)) > l_2582)) < p_27), 0xDB98C73FL)), p_26)), p_27)));
                    (*l_2202) &= (safe_add_func_int32_t_s_s((((*g_1025) |= (((*g_445) ^= (0x0B54DFE2L ^ 0x8C340FE1L)) || (l_2576[0] = ((((safe_mod_func_uint16_t_u_u(((((*l_2209) , g_232) < (safe_add_func_int8_t_s_s((((*l_2405) , (((void*)0 != l_2598) | l_2478)) > (*l_2209)), l_2580))) | 18446744073709551615UL), l_2478)) < p_26) != (-1L)) != l_2599)))) ^ (*l_2405)), 0xABE31772L));
                    (*l_2200) = (safe_rshift_func_uint8_t_u_s((*g_1025), 4));
                    l_2605++;
                }
                for (g_152.f2 = 0; (g_152.f2 <= 1); g_152.f2 += 1)
                { 
                    uint16_t l_2610 = 0x6E2DL;
                    int64_t *l_2618[5][6] = {{&g_1863,&g_1863,&g_1863,(void*)0,&l_2487,&l_2487},{(void*)0,&l_2487,&l_2487,(void*)0,&g_1863,&g_1863},{&g_1863,(void*)0,(void*)0,&g_1863,&g_1863,(void*)0},{&g_1863,&g_1863,&g_168[0],&g_1863,&g_1863,&l_2449.f2},{(void*)0,(void*)0,&l_2449.f2,&g_168[0],&g_1863,(void*)0}};
                    int i, j;
                    (*l_2405) = ((++(*g_445)) != ((void*)0 != &p_27));
                    (*l_2203) |= ((l_2610 != l_2611) ^ (((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((~(*g_445)), (+(l_2582 = ((*g_573) != (void*)0))))), (safe_add_func_int32_t_s_s((l_2621 = ((*g_1352) >= ((g_273[0][0][1] , l_2591) && g_1163[5][3][3]))), p_27)))) < 0x09L) | (*g_1352)));
                    (*l_2200) &= ((safe_unary_minus_func_uint64_t_u(p_26)) > (l_2623 , (*l_2405)));
                    if (l_2610)
                        continue;
                }
                if ((safe_div_func_uint32_t_u_u(g_421, ((safe_mul_func_int16_t_s_s((*l_2210), (p_26 ^ (p_27 >= ((l_2628[0] , &l_2314) == (((*l_2243) = (*l_2405)) , (void*)0)))))) , (*l_2405)))))
                { 
                    int16_t l_2631 = 0x32B4L;
                    uint64_t *****l_2641 = &l_2551;
                    uint16_t *l_2652 = &l_2449.f0;
                    int32_t l_2653 = 0x4C10600BL;
                    struct S0 l_2660 = {18446744073709551615UL,1UL,0x8255188BL};
                    uint32_t *l_2663[4][3] = {{&l_2378,&l_2378,&l_2378},{(void*)0,(void*)0,(void*)0},{&l_2378,&l_2378,&l_2378},{(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    l_2653 = (safe_add_func_uint8_t_u_u(l_2631, (+(l_2631 ^ (safe_add_func_uint64_t_u_u((((safe_add_func_uint16_t_u_u((*g_445), ((*l_2405) = (((*l_2652) = (1UL & ((safe_lshift_func_uint8_t_u_s((*l_2405), 2)) ^ (safe_lshift_func_int16_t_s_s((((l_2641 != (l_2646[6] = l_2642)) || 1L) , 0xDA88L), (*g_2389)))))) && (*g_2389))))) ^ l_2591) | 0xEA70FB13F3D854EELL), p_27))))));
                    l_2577 &= (0x3FEDDFD2L != (((*g_2390) |= ((safe_rshift_func_int8_t_s_u((~(~(-4L))), (((l_2631 , l_2628[0].f1) >= (safe_mul_func_uint16_t_u_u((((l_2660 , ((g_232 = ((*l_2590)++)) <= 0x69D3539FL)) >= ((*l_2405) = (l_2628[0] , (-1L)))) >= p_26), (*g_445)))) < g_1961[0]))) | l_2664)) , 0x4443A390L));
                }
                else
                { 
                    (*l_2396) = l_2665;
                    (*l_2396) = l_2665;
                    if ((*l_2200))
                        continue;
                    if (l_2572)
                        break;
                }
                if (g_1585.f0)
                    goto lbl_2485;
            }
            for (l_2464 = 1; (l_2464 >= 0); l_2464 -= 1)
            { 
                uint16_t l_2666 = 0xE606L;
                union U1 **l_2678 = &g_693;
                int32_t l_2681 = (-1L);
                union U2 *l_2682 = (void*)0;
                for (g_152.f0 = 0; (g_152.f0 <= 2); g_152.f0 += 1)
                { 
                    return p_27;
                }
                l_2666++;
                for (l_2587 = 0; (l_2587 <= 1); l_2587 += 1)
                { 
                    uint16_t l_2669 = 1UL;
                    if (l_2669)
                        break;
                    (*l_2494) = (l_2585 , ((l_2681 = ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s(((((*l_2206) = 0x6A3BFEB0L) | l_2666) && (safe_rshift_func_uint8_t_u_s(p_27, 4))), (((*g_1709) , (l_2678 == ((safe_sub_func_int16_t_s_s((*g_2389), (-1L))) , &g_693))) & l_2669))) , l_2628[0]) , (*l_2405)), (*g_445))), 3)) <= 3L)) , l_2682));
                }
            }
        }
    }
    return (*l_2203);
}



static uint16_t  func_30(const int64_t  p_31, int32_t  p_32, int32_t * p_33, int32_t ** p_34, uint64_t  p_35)
{ 
    int8_t l_39 = (-1L);
    int32_t *l_47 = &g_4;
    int32_t **l_46 = &l_47;
    int32_t ***l_45 = &l_46;
    int8_t *l_2152 = &l_39;
    int32_t *l_2176 = &g_1961[0];
    int32_t *l_2177 = &g_9[0];
    int32_t *l_2178 = &g_2179;
    uint16_t **l_2189 = &g_445;
    union U1 l_2190 = {0x1F3AL};
    union U1 l_2191 = {0xC510L};
    int64_t *l_2192 = &g_1863;
    int64_t *l_2193 = &g_67.f2;
    uint16_t *l_2194 = (void*)0;
    uint16_t *l_2195 = &g_1533.f0;
    union U2 l_2199 = {0x99L};
    p_32 |= l_39;
    (*l_2178) &= ((*l_2177) = ((*l_2176) = (func_40(((((*l_45) = (void*)0) == g_48) || (g_48 == (*l_45))), func_49((((*l_2152) = func_54((g_114[0][0][3] = func_59(l_45, g_9[5], ((safe_div_func_uint32_t_u_u((((((safe_add_func_int32_t_s_s((*l_47), 0x176A90D2L)) >= g_4) , g_3) , g_9[5]) <= p_35), 4294967287UL)) || (*l_47)))), g_48, g_4, (*l_47))) , g_1552[0]), p_32, p_32, (*p_34)), g_48, (*l_47)) , (*l_47))));
    (*l_2176) = ((safe_lshift_func_uint16_t_u_s(((*l_2195) |= ((safe_mod_func_uint32_t_u_u(g_2059, p_31)) > (safe_mul_func_uint16_t_u_u((((*g_1025) = (3UL > ((*l_2193) = ((*l_2192) = (((safe_lshift_func_uint16_t_u_u((!(**g_1024)), ((p_35 , l_2189) != ((l_2191 = (l_2190 = l_2190)) , l_2189)))) == (*l_2178)) ^ 18446744073709551615UL))))) && (*l_2176)), g_152.f1)))), p_31)) | (*l_2178));
    (*l_2176) |= (safe_mul_func_uint8_t_u_u(0x4EL, 0xC4L));
    (*l_2177) = ((*l_2176) &= (safe_unary_minus_func_int64_t_s(((*l_2192) = (l_2199 , 0xEB95CEC5E8B7BA38LL)))));
    return (*g_445);
}



static uint64_t  func_40(uint32_t  p_41, int32_t * p_42, int32_t ** p_43, uint64_t  p_44)
{ 
    uint32_t l_2162[6][5][2] = {{{0UL,0xADAF65EDL},{7UL,4UL},{4UL,7UL},{0xADAF65EDL,0UL},{0x9D1D845EL,0x068EC750L}},{{4UL,0x6161DA27L},{0x068EC750L,0xADAF65EDL},{0x301D2B11L,0xADAF65EDL},{0x068EC750L,0x6161DA27L},{4UL,0x068EC750L}},{{0x9D1D845EL,0UL},{0xADAF65EDL,7UL},{4UL,4UL},{7UL,0xADAF65EDL},{0UL,0x9D1D845EL}},{{0x068EC750L,4UL},{0x6161DA27L,0x068EC750L},{0xADAF65EDL,0x301D2B11L},{0xADAF65EDL,0x068EC750L},{0x6161DA27L,4UL}},{{0x068EC750L,0x9D1D845EL},{0UL,0xADAF65EDL},{7UL,4UL},{4UL,7UL},{0xADAF65EDL,0UL}},{{0x9D1D845EL,0x068EC750L},{4UL,0x6161DA27L},{0x068EC750L,0xADAF65EDL},{0x301D2B11L,0xADAF65EDL},{0x068EC750L,0x6161DA27L}}};
    int8_t *l_2163 = &g_106;
    uint8_t l_2168 = 1UL;
    int32_t *l_2169 = &g_9[5];
    int32_t *l_2170 = (void*)0;
    int32_t *l_2171[5][1][1];
    uint32_t l_2172 = 0x54E62427L;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_2171[i][j][k] = (void*)0;
        }
    }
    (*p_42) = (g_1478 , ((((*l_2163) = l_2162[4][1][1]) != (safe_mul_func_int8_t_s_s(p_44, (safe_lshift_func_int8_t_s_u((((((l_2162[4][1][1] || (0x76L >= ((&l_2163 == (void*)0) && p_44))) || l_2162[3][4][0]) , &g_573) == (void*)0) || 0x0D6146A2B3D1204BLL), (*g_1025)))))) != l_2168));
    --l_2172;
    for (g_1000.f0 = 0; (g_1000.f0 <= 4); g_1000.f0 += 1)
    { 
        uint32_t l_2175 = 18446744073709551615UL;
        return l_2175;
    }
    return p_44;
}



static int32_t * func_49(uint32_t  p_50, int16_t  p_51, uint16_t  p_52, int32_t * p_53)
{ 
    uint64_t l_2155 = 0x625347EE41A932F1LL;
    int32_t *l_2156 = &g_9[4];
    int8_t *l_2160 = &g_1325;
    int8_t **l_2159 = &l_2160;
    int8_t ***l_2158 = &l_2159;
    int8_t ****l_2157 = &l_2158;
    int8_t *****l_2161 = &l_2157;
    (*l_2156) = ((p_51 > 1UL) >= (((*g_1352) ^= 0x9829L) != (safe_rshift_func_int16_t_s_s(l_2155, 13))));
    (*l_2161) = l_2157;
    return &g_9[0];
}



static int8_t  func_54(int32_t * p_55, int32_t ** p_56, uint32_t  p_57, uint8_t  p_58)
{ 
    uint16_t l_540 = 65535UL;
    union U2 l_541 = {255UL};
    uint32_t *l_544 = &g_421;
    int32_t *l_549 = &g_9[5];
    int64_t *l_554 = &g_168[0];
    union U1 *l_567[5];
    union U1 **l_566 = &l_567[4];
    int64_t l_603 = 0x3A9AA3AF1600EFC2LL;
    int32_t l_605 = 0x5F1A789DL;
    int32_t l_606 = (-9L);
    int32_t l_607 = 0x3832D81BL;
    int32_t l_608 = 0x63B88482L;
    int32_t l_609 = 0x95A86D3AL;
    int32_t l_610 = 0x0FEEB227L;
    int32_t l_611 = 0x40A41758L;
    int32_t l_612 = 0x342E5554L;
    uint64_t *l_641 = &g_152.f0;
    int32_t l_654 = 0x44155492L;
    int32_t l_655[5][3] = {{(-1L),(-1L),0xC070DCE3L},{0xCA9D9993L,0xCA9D9993L,0x32848A8CL},{(-1L),(-1L),0xC070DCE3L},{0xCA9D9993L,0xCA9D9993L,0x32848A8CL},{(-1L),(-1L),0xC070DCE3L}};
    int8_t l_656[6] = {0L,0L,0L,0L,0L,0L};
    int8_t l_657 = 0x10L;
    int16_t l_660 = 0L;
    uint16_t l_683 = 5UL;
    const uint16_t l_727 = 0x056DL;
    uint64_t *** const *l_751 = &g_574[0];
    const int16_t l_797[2] = {0x2558L,0x2558L};
    struct S0 l_927 = {18446744073709551611UL,0x646FL,0x9D54E887L};
    int16_t l_981 = 0xAE85L;
    union U2 * const *l_996 = &g_673[1];
    int32_t ** const *l_1012 = &g_48;
    uint16_t **l_1034 = &g_445;
    int8_t *l_1035[6] = {&l_656[5],&l_656[5],&l_656[5],&l_656[5],&l_656[5],&l_656[5]};
    uint32_t *l_1154 = &g_421;
    struct S0 *l_1167 = &l_927;
    int32_t ***l_1194 = (void*)0;
    uint64_t *****l_1260 = &g_573;
    int32_t *l_1274[6][3] = {{&l_610,&l_610,&l_610},{&l_612,&l_609,&l_612},{&l_610,&l_610,&l_610},{&l_612,&l_609,&l_612},{&l_610,&l_610,&l_610},{&l_612,&l_609,&l_612}};
    union U2 **l_1288 = &g_673[1];
    uint32_t l_1319 = 0x1FF9C543L;
    int32_t l_1324 = 0xA1255208L;
    int32_t *l_1366 = &l_606;
    union U2 *l_1377 = &l_541;
    uint32_t l_1427 = 0xD50F1A47L;
    int8_t l_1516[7] = {0x96L,(-9L),0x96L,0x96L,(-9L),0x96L,0x96L};
    uint32_t l_1544 = 1UL;
    uint8_t l_1554[3][5][5] = {{{5UL,0x77L,0x77L,5UL,0xD4L},{0x22L,0x77L,0x72L,0xEEL,5UL},{1UL,0xD4L,0x22L,1UL,0x3FL},{0x72L,0UL,4UL,0xEEL,0xEEL},{0UL,1UL,0UL,0UL,0x3FL}},{{0x78L,0x77L,0xD4L,4UL,0x72L},{5UL,3UL,1UL,0x22L,0xEEL},{4UL,1UL,0xD4L,0x72L,0xD4L},{255UL,255UL,0x78L,0x77L,0xD4L},{0UL,0x3FL,3UL,0x4AL,0xEEL}},{{247UL,0x4AL,255UL,255UL,0x72L},{255UL,0x3FL,5UL,5UL,0x3FL},{0xEEL,255UL,0x22L,5UL,1UL},{1UL,1UL,1UL,255UL,0x4AL},{0x77L,3UL,0x72L,0x4AL,0UL}}};
    const uint64_t l_1623 = 0x440483BEE522FD70LL;
    uint8_t l_1671[1][6] = {{0UL,0UL,0x42L,0UL,0UL,0x42L}};
    union U1 l_1677[4][6] = {{{0x8932L},{1UL},{1UL},{0x8932L},{65530UL},{0x8932L}},{{0x8932L},{65530UL},{0x8932L},{1UL},{1UL},{0x8932L}},{{65533UL},{65533UL},{1UL},{0UL},{1UL},{65533UL}},{{1UL},{65530UL},{0UL},{0UL},{65530UL},{1UL}}};
    union U1 *l_1721[7];
    int16_t l_1727 = (-1L);
    int64_t l_1792 = 0x84E6D1EA760F8764LL;
    uint8_t l_1890 = 1UL;
    uint64_t l_1969 = 0x07CCB3B6ADE431DBLL;
    struct S0 l_2042 = {8UL,0x1E5BL,0x4DB87F14L};
    uint32_t l_2094[7][4][1] = {{{1UL},{4294967294UL},{4294967294UL},{1UL}},{{1UL},{0x92BB849BL},{1UL},{1UL}},{{4294967294UL},{4294967294UL},{1UL},{1UL}},{{0x92BB849BL},{1UL},{1UL},{4294967294UL}},{{4294967294UL},{1UL},{1UL},{0x92BB849BL}},{{1UL},{1UL},{4294967294UL},{4294967294UL}},{{1UL},{1UL},{0x92BB849BL},{1UL}}};
    int64_t l_2127 = 0x50AF277E6723FDEELL;
    int8_t * const *l_2148 = (void*)0;
    uint32_t l_2150 = 0xDBE8BD68L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_567[i] = (void*)0;
    for (i = 0; i < 7; i++)
        l_1721[i] = &l_1677[3][5];
    return p_57;
}



static int32_t * func_59(int32_t *** p_60, int32_t  p_61, uint64_t  p_62)
{ 
    union U1 *l_68 = &g_67;
    int32_t l_69 = 1L;
    uint8_t *l_70 = &g_71;
    int32_t l_95 = 0x992811E2L;
    union U2 * const l_98 = &g_99;
    union U2 *l_100 = &g_99;
    int16_t l_129 = 0x029BL;
    int32_t l_134 = 1L;
    struct S0 l_153 = {0x385A9E9F99A3F6E0LL,65529UL,0xB10D0903L};
    uint16_t l_204[4];
    int16_t l_225 = 3L;
    int32_t l_263 = (-6L);
    int32_t l_264 = 0L;
    int32_t l_265 = 0x4948AC97L;
    int32_t l_266 = 0x164C548DL;
    int32_t l_267 = 7L;
    int32_t l_268 = 0x5043EF79L;
    uint64_t l_303 = 18446744073709551611UL;
    uint32_t l_368 = 18446744073709551614UL;
    const int16_t l_382 = 0x529EL;
    int64_t *l_385[5];
    uint32_t l_476 = 0x7C2D0D50L;
    uint64_t l_477[6] = {0x6984C69644BDA8C9LL,0x6984C69644BDA8C9LL,0x6984C69644BDA8C9LL,0x6984C69644BDA8C9LL,0x6984C69644BDA8C9LL,0x6984C69644BDA8C9LL};
    uint8_t ***l_484 = (void*)0;
    int32_t *l_533 = &l_263;
    int32_t *l_534[4];
    int8_t l_535[3][5][7] = {{{0xDAL,0x92L,0xD3L,8L,0L,0xDAL,(-1L)},{1L,0xA6L,0xDAL,0x7CL,(-1L),0x7CL,0xDAL},{0x90L,0x90L,0xDAL,0x51L,(-5L),0L,3L},{0xC1L,(-8L),0xD3L,(-5L),0x90L,0xD8L,0xA6L},{0x8AL,0L,0x7CL,(-8L),(-5L),(-2L),0L}},{{0xDAL,(-1L),(-1L),(-1L),(-1L),0xDAL,0L},{(-2L),(-5L),(-8L),0x7CL,0L,0x8AL,0xA6L},{0xD8L,0x90L,(-5L),0xD3L,(-8L),0xC1L,3L},{0L,(-5L),0x51L,0xDAL,0x90L,0x90L,0xDAL},{0x7CL,(-1L),0x7CL,0xDAL,0xA6L,1L,(-1L)}},{{0xDAL,0L,8L,0xD3L,0x92L,0x85L,0L},{0x51L,0x8AL,(-2L),0xD3L,0L,8L,1L},{0xA6L,0xDAL,0x7CL,(-1L),0x7CL,0xDAL,0xA6L},{0xA6L,(-2L),0x92L,0x8AL,0xDAL,(-5L),0x7CL},{0x51L,0xD8L,0xD3L,1L,0x85L,(-1L),0xD8L}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_204[i] = 1UL;
    for (i = 0; i < 5; i++)
        l_385[i] = &g_168[0];
    for (i = 0; i < 4; i++)
        l_534[i] = &l_267;
    if ((((*l_68) = g_67) , (((l_69 >= ((*l_70) = 6UL)) || (p_62 || ((safe_mod_func_uint32_t_u_u((p_61 & (g_9[5] && (((safe_sub_func_int16_t_s_s((((g_67 , l_69) , g_9[2]) , p_62), 0xFE6CL)) == p_61) , l_69))), 0x451CEE08L)) == 0x91AD473CB3F04BF7LL))) >= p_61)))
    { 
        union U2 l_78[7][4][6] = {{{{0x6BL},{1UL},{1UL},{0x6BL},{255UL},{0x62L}},{{0x8CL},{0x62L},{0xFFL},{1UL},{255UL},{0x53L}},{{0xF8L},{8UL},{255UL},{0UL},{255UL},{0x0BL}},{{246UL},{0x62L},{1UL},{0xF8L},{255UL},{1UL}}},{{{0xFAL},{1UL},{0UL},{0xF8L},{0x62L},{0UL}},{{246UL},{0UL},{0x0BL},{0UL},{0x0BL},{0UL}},{{0xF8L},{0xFFL},{0x0BL},{1UL},{1UL},{0UL}},{{0x8CL},{0x53L},{0UL},{0x6BL},{0x53L},{1UL}}},{{{0x6BL},{0x53L},{1UL},{0xF5L},{1UL},{0x0BL}},{{0xCAL},{0xFFL},{255UL},{246UL},{0x0BL},{0x53L}},{{0xCAL},{0UL},{0xFFL},{0xF5L},{0x62L},{0x62L}},{{0x6BL},{1UL},{1UL},{0x6BL},{255UL},{0x62L}}},{{{0x8CL},{0x62L},{0xFFL},{1UL},{255UL},{0x53L}},{{0xF8L},{8UL},{255UL},{0UL},{255UL},{0x0BL}},{{246UL},{0x62L},{1UL},{0xF8L},{255UL},{1UL}},{{0xFAL},{1UL},{0UL},{0xF8L},{0x62L},{0UL}}},{{{246UL},{0UL},{0x0BL},{0UL},{0x0BL},{0UL}},{{0xF8L},{0xFFL},{0x0BL},{1UL},{1UL},{0UL}},{{0x8CL},{0x53L},{0UL},{0x6BL},{0x53L},{1UL}},{{0x6BL},{0x53L},{1UL},{0xF5L},{1UL},{0x0BL}}},{{{0xCAL},{0xFFL},{255UL},{246UL},{0x0BL},{0x53L}},{{0xCAL},{0UL},{0xFFL},{0xF5L},{0x62L},{0x62L}},{{0x6BL},{1UL},{1UL},{0x6BL},{255UL},{0x62L}},{{0x8CL},{0x62L},{0xFFL},{1UL},{255UL},{0x53L}}},{{{0xF8L},{8UL},{255UL},{0UL},{255UL},{0x0BL}},{{246UL},{0x62L},{1UL},{0xF8L},{255UL},{1UL}},{{0xFAL},{1UL},{0UL},{0xF8L},{0x62L},{1UL}},{{8UL},{0x1EL},{0xC4L},{0xFFL},{0xC4L},{0x1EL}}}};
        int32_t *l_87[7][6] = {{(void*)0,(void*)0,&g_9[1],&g_9[5],&g_3,(void*)0},{(void*)0,&g_9[5],(void*)0,&l_69,&g_9[5],&g_9[1]},{&g_9[5],(void*)0,(void*)0,&l_69,(void*)0,(void*)0},{&g_9[5],&l_69,&g_9[1],&g_4,&g_4,&g_9[5]},{&g_4,&g_4,&g_9[5],(void*)0,&g_9[5],&g_4},{(void*)0,&g_4,&g_3,&g_3,&g_4,(void*)0},{&g_4,&l_69,(void*)0,&g_9[5],(void*)0,&l_69}};
        int32_t **l_86[5];
        uint16_t *l_96 = (void*)0;
        uint16_t *l_97 = &g_67.f0;
        uint32_t l_135 = 5UL;
        struct S0 l_161[2] = {{18446744073709551606UL,0UL,0xD43417B0L},{18446744073709551606UL,0UL,0xD43417B0L}};
        uint8_t **l_173 = &l_70;
        uint8_t ***l_172 = &l_173;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_86[i] = &l_87[1][2];
        if ((safe_rshift_func_int16_t_s_u((0xF54CL && ((*l_97) = ((l_78[3][1][0] , &l_69) == ((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(l_69, ((((((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint8_t_u_u((g_48 != l_86[1]), (+(safe_mod_func_int32_t_s_s((l_95 = (safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(g_4, 0xEA92L)), 5))), (-1L)))))))) && l_69) < g_3) >= 0x45L) == l_69) ^ l_69))) > g_9[5]), 13)) , &l_69)))), 4)))
        { 
            int32_t *l_101 = &g_3;
            int8_t *l_105 = &g_106;
            int32_t l_120 = 0x46BED5E3L;
            int32_t l_124 = 0x86D5588BL;
            int32_t l_125 = 0x1C9B9BB5L;
            int32_t l_126 = 0L;
            int32_t l_130 = 0x45CF57BCL;
            int32_t l_131[4];
            int i;
            for (i = 0; i < 4; i++)
                l_131[i] = 0x02E9BE69L;
            l_100 = l_98;
            if ((l_101 != ((safe_mul_func_int16_t_s_s(((g_113 |= (~((g_67.f2 = g_9[3]) , ((((((*l_105) = 1L) | (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_99.f0, 8)), g_71))) <= ((safe_add_func_int32_t_s_s(0x660DC513L, (((-1L) && p_62) && p_62))) , 0x748CL)) <= p_62) & 255UL)))) , 0x6A0BL), 0x15FDL)) , (void*)0)))
            { 
                g_114[3][3][0] = &g_9[5];
            }
            else
            { 
                const uint32_t l_115[3][6][7] = {{{0xEFD05EA4L,0x103E2EA9L,1UL,0xD18AF38EL,0xF96B43B7L,0xA25E917AL,0x91E88D44L},{1UL,0xB5DB3291L,0xF96B43B7L,0UL,0x277C3F9EL,8UL,1UL},{0x27EC9291L,18446744073709551613UL,0x16E3A478L,0UL,0x103E2EA9L,0xFDE8E729L,0xED79FF3DL},{0x31A92BC7L,0x4E20030BL,0x4750ADD4L,0xD18AF38EL,0x6933D78BL,0UL,0xFDE8E729L},{0x8BC82935L,5UL,0x26A3224DL,0UL,0x26A3224DL,5UL,0x8BC82935L},{0xE47ACEDFL,0xA19B6E0FL,0xCA947FBAL,1UL,0xA25E917AL,1UL,18446744073709551613UL}},{{0xB2AC3FE9L,0UL,1UL,18446744073709551611UL,1UL,0x8BC82935L,1UL},{18446744073709551614UL,0x26A3224DL,0xCA947FBAL,1UL,0UL,0xD18AF38EL,0x18C4EF54L},{0UL,0x5CBE7429L,0x26A3224DL,1UL,18446744073709551615UL,0x12FB1C12L,0x83FE5607L},{18446744073709551615UL,0UL,0x4750ADD4L,0xB2AC3FE9L,0x5F813544L,0x6933D78BL,0xF96B43B7L},{0UL,0xFDE8E729L,0x16E3A478L,18446744073709551615UL,0xE47ACEDFL,0xF96B43B7L,1UL},{18446744073709551614UL,0xFDE8E729L,0xF96B43B7L,18446744073709551612UL,0x24672FDCL,1UL,0x6933D78BL}},{{0x91E88D44L,0UL,1UL,1UL,1UL,0x5F813544L,0x5F813544L},{0UL,0x5CBE7429L,0UL,0x5CBE7429L,0UL,18446744073709551612UL,0x545B7E4AL},{0xF96B43B7L,0x26A3224DL,18446744073709551613UL,0xA19B6E0FL,1UL,0x5CBE7429L,0x16E3A478L},{0xED79FF3DL,0UL,0x12FB1C12L,0x4E20030BL,8UL,0x26141094L,18446744073709551611UL},{0xF96B43B7L,0xA19B6E0FL,1UL,18446744073709551615UL,18446744073709551615UL,18446744073709551614UL,0xE47ACEDFL},{0UL,5UL,18446744073709551615UL,0x83FE5607L,18446744073709551613UL,6UL,0x5CBE7429L}}};
                int32_t l_121 = 6L;
                int32_t l_128 = 0x524DCE97L;
                int32_t l_132 = 0xB0378A54L;
                union U2 l_147 = {0x88L};
                uint8_t **l_150 = &l_70;
                int32_t l_155[2][5][3] = {{{(-1L),(-1L),(-1L)},{0xE92AE7ECL,0xE92AE7ECL,0xE92AE7ECL},{(-1L),(-1L),(-1L)},{0xE92AE7ECL,0xE92AE7ECL,0xE92AE7ECL},{(-1L),(-1L),(-1L)}},{{0xE92AE7ECL,0xE92AE7ECL,0xE92AE7ECL},{(-1L),(-1L),(-1L)},{0xE92AE7ECL,0xE92AE7ECL,0xE92AE7ECL},{(-1L),(-1L),(-1L)},{0xE92AE7ECL,0xE92AE7ECL,0xE92AE7ECL}}};
                uint8_t l_156 = 0x71L;
                struct S0 *l_159 = (void*)0;
                struct S0 *l_160 = &l_153;
                int i, j, k;
                if (l_115[1][1][1])
                { 
                    uint32_t l_116[7] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                    int32_t l_119 = 0L;
                    int32_t l_122 = 1L;
                    int32_t l_123 = (-1L);
                    int32_t l_127 = 0x327924F7L;
                    int32_t l_133[5];
                    int32_t *l_138[4];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_133[i] = 0xD5F11A4DL;
                    for (i = 0; i < 4; i++)
                        l_138[i] = (void*)0;
                    l_116[2]++;
                    l_119 &= (0x9527C1939B73AA95LL <= (l_115[0][2][3] == p_62));
                    ++l_135;
                    l_138[0] = &l_127;
                }
                else
                { 
                    uint64_t l_139 = 0UL;
                    uint8_t ***l_151 = &l_150;
                    int32_t l_154[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_154[i] = 0xA616365CL;
                    ++l_139;
                    l_95 ^= (safe_div_func_uint32_t_u_u(p_62, (((((*l_101) | (~(((safe_sub_func_int64_t_s_s(1L, 0x64A0B003D96624DCLL)) & (l_147 , ((safe_mul_func_uint8_t_u_u(((((*l_70) = g_67.f1) < 8L) , g_106), p_61)) != p_61))) && p_61))) >= 1L) ^ p_62) & l_69)));
                    (*l_151) = l_150;
                    l_153 = g_152;
                    ++l_156;
                }
                l_161[1] = ((*l_160) = g_152);
            }
        }
        else
        { 
            uint32_t l_171 = 0UL;
            int32_t l_175 = 0L;
            int32_t l_185 = (-10L);
            int64_t l_206 = 0xA25D3297F8498B0FLL;
            const uint32_t l_207 = 18446744073709551614UL;
            int32_t l_211[7] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
            int8_t *l_212[1];
            int i;
            for (i = 0; i < 1; i++)
                l_212[i] = &g_106;
            for (l_95 = 0; (l_95 > 3); l_95 = safe_add_func_uint64_t_u_u(l_95, 5))
            { 
                struct S0 l_166[1][3][3] = {{{{0xB9F4142C4E7C1DA2LL,0UL,0UL},{0x06B0F8228610EFDCLL,0xB63DL,18446744073709551615UL},{0xB9F4142C4E7C1DA2LL,0UL,0UL}},{{0xB9F4142C4E7C1DA2LL,0UL,0UL},{0x06B0F8228610EFDCLL,0xB63DL,18446744073709551615UL},{0xB9F4142C4E7C1DA2LL,0UL,0UL}},{{0xB9F4142C4E7C1DA2LL,0UL,0UL},{0x06B0F8228610EFDCLL,0xB63DL,18446744073709551615UL},{0xB9F4142C4E7C1DA2LL,0UL,0UL}}}};
                int64_t *l_167[2][7][5] = {{{&g_67.f2,&g_67.f2,&g_67.f2,&g_67.f2,&g_67.f2},{&g_168[0],(void*)0,&g_168[0],(void*)0,&g_168[0]},{&g_67.f2,&g_67.f2,&g_67.f2,&g_67.f2,&g_67.f2},{&g_168[0],(void*)0,&g_168[0],(void*)0,&g_168[0]},{&g_67.f2,&g_67.f2,&g_67.f2,&g_67.f2,&g_67.f2},{&g_168[0],(void*)0,&g_168[0],(void*)0,&g_168[0]},{&g_67.f2,&g_67.f2,&g_67.f2,&g_67.f2,&g_67.f2}},{{&g_168[0],(void*)0,&g_168[0],(void*)0,&g_168[0]},{&g_67.f2,&g_67.f2,&g_67.f2,&g_67.f2,&g_67.f2},{&g_168[0],(void*)0,&g_168[0],(void*)0,&g_168[0]},{&g_67.f2,&g_67.f2,&g_67.f2,&g_67.f2,&g_67.f2},{&g_168[0],(void*)0,&g_168[0],(void*)0,&g_168[0]},{&g_67.f2,&g_67.f2,&g_67.f2,&g_67.f2,&g_67.f2},{&g_168[0],(void*)0,&g_168[0],(void*)0,&g_168[0]}}};
                int32_t *l_178[5] = {&l_95,&l_95,&l_95,&l_95,&l_95};
                uint64_t l_183 = 0UL;
                uint32_t *l_184 = &g_67.f1;
                int i, j, k;
                l_134 |= ((((safe_div_func_int64_t_s_s((l_166[0][0][1] , (g_67.f2 = (l_69 | g_67.f0))), (safe_sub_func_uint16_t_u_u((&g_99 != (l_78[3][1][0] , &g_99)), l_171)))) , l_172) != (void*)0) , p_62);
                l_175 = (!l_166[0][0][1].f1);
                for (g_113 = (-25); (g_113 < (-2)); ++g_113)
                { 
                    return &g_3;
                }
                if (((g_67 , ((0x3273023F3548BEFDLL == (safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((l_185 ^= ((g_152.f1 != ((l_175 &= (((*l_184) = (l_183 , 6UL)) || 4294967292UL)) || p_62)) | g_99.f0)), l_134)), p_62))) && g_152.f0)) || 0UL))
                { 
                    int32_t *l_186 = &l_185;
                    l_186 = l_186;
                }
                else
                { 
                    int8_t *l_205 = &g_106;
                    int32_t *l_208 = &g_9[5];
                    l_134 ^= (l_69 = (safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((((1UL > (((safe_mod_func_int8_t_s_s(0x6AL, ((*l_205) &= ((safe_mul_func_uint16_t_u_u(65534UL, (safe_add_func_int32_t_s_s(((p_61 & (safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(p_62, ((1L != (safe_unary_minus_func_uint16_t_u(p_61))) && l_175))) | g_71), l_204[1])), 1L))) & p_61), l_153.f2)))) , l_175)))) , (void*)0) == &l_70)) == l_206) && p_62), l_207)), g_99.f0)));
                    if (l_134)
                        continue;
                    if (l_134)
                        continue;
                    l_178[0] = l_208;
                }
            }
            l_225 = (l_175 |= (((safe_rshift_func_int16_t_s_s((l_185 , ((l_153.f1 >= (l_95 = l_211[4])) ^ l_185)), 0)) , (safe_mod_func_int64_t_s_s(l_185, (safe_div_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((*l_97) = p_61), (safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(l_171, 2)), 6L)))), g_9[5])) && l_153.f1), 1UL))))) ^ p_61));
        }
    }
    else
    { 
        int32_t l_243 = (-3L);
        int32_t l_244 = (-1L);
        uint8_t l_245 = 1UL;
        uint32_t l_269 = 4UL;
        int32_t l_274 = 0x063B8ECFL;
        uint64_t l_286 = 0UL;
        int16_t l_336 = (-1L);
        int32_t l_360[4][1][5];
        uint8_t **l_370 = &l_70;
        int32_t l_393[7] = {0x31822C5AL,1L,0x31822C5AL,0x31822C5AL,1L,0x31822C5AL,0x31822C5AL};
        uint64_t l_418 = 0UL;
        int16_t l_422 = 0xE615L;
        int64_t *l_439 = (void*)0;
        int64_t *l_440[3][1];
        int32_t *l_446 = &l_265;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 5; k++)
                    l_360[i][j][k] = 0x4883A074L;
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_440[i][j] = &g_168[0];
        }
        for (l_225 = 0; (l_225 <= 0); l_225 += 1)
        { 
            uint32_t *l_231[2][5][3] = {{{&g_232,&g_232,&g_232},{&g_232,&g_232,&g_232},{&g_232,&g_232,&g_232},{&g_232,&g_232,&g_232},{&g_232,&g_232,&g_232}},{{&g_232,&g_232,&g_232},{&g_232,&g_232,&g_232},{&g_232,&g_232,&g_232},{&g_232,&g_232,&g_232},{&g_232,&g_232,&g_232}}};
            int64_t l_246 = 0x85E572430E13A423LL;
            int32_t l_261[2];
            int32_t l_288 = 0x17EB9657L;
            int32_t *l_290 = (void*)0;
            int32_t *l_291 = &l_95;
            uint16_t *l_295 = &l_204[1];
            struct S0 *l_304 = &l_153;
            uint8_t **l_310 = (void*)0;
            uint8_t ***l_309 = &l_310;
            uint32_t l_399 = 4294967289UL;
            int16_t l_415[6];
            int64_t l_420 = 0x2ADC42E792ADB9C2LL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_261[i] = 0x8A97C905L;
            for (i = 0; i < 6; i++)
                l_415[i] = 0x3D8CL;
            if (((g_168[l_225] && (g_113 ^= ((safe_unary_minus_func_uint8_t_u(((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_168[0], g_67.f3)), (((l_95 ^= ((g_232 = g_168[l_225]) && (l_244 = (safe_add_func_uint8_t_u_u(((*l_70) = (((safe_rshift_func_uint8_t_u_u(((p_61 && ((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(((&g_67 != ((((l_69 = l_204[1]) && p_61) | 0UL) , (void*)0)) , 0xFDL), l_243)), g_67.f3)) & 0x574DF4CCD7627243LL)) , p_61), 2)) == 0xC93DL) != p_61)), g_4))))) | l_245) ^ 0UL))) < 0x9C300522L))) & l_153.f2))) == l_246))
            { 
                union U1 **l_247 = &l_68;
                union U1 *l_248 = (void*)0;
                int8_t *l_257 = &g_106;
                const int32_t l_258 = 3L;
                int32_t l_262[5][6] = {{(-1L),(-1L),0xA6F62464L,0xA6F62464L,(-1L),(-1L)},{(-1L),0xA6F62464L,0xA6F62464L,(-1L),(-1L),0xA6F62464L},{(-1L),(-1L),0xA6F62464L,0xA6F62464L,(-1L),(-1L)},{(-1L),0xA6F62464L,0xA6F62464L,(-1L),(-1L),0xA6F62464L},{(-1L),(-1L),0xA6F62464L,0xA6F62464L,(-1L),(-1L)}};
                int i, j;
                if ((((g_99.f0 , (((((*l_247) = l_68) == l_248) & ((safe_mod_func_int8_t_s_s((-1L), 255UL)) & ((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((((*l_257) = (safe_div_func_int8_t_s_s((((1L ^ g_4) , &g_106) != (void*)0), 0x71L))) < p_61), 4)), 0xA9A293F61F614FD7LL)) <= p_61))) , g_168[l_225])) | g_152.f0) != l_258))
                { 
                    int32_t *l_259 = &l_134;
                    int32_t *l_260[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_260[i] = &g_9[0];
                    l_269--;
                    (*l_259) &= 0L;
                }
                else
                { 
                    int32_t **l_272 = &g_114[3][3][0];
                    int64_t l_287 = (-1L);
                    (*l_272) = &l_265;
                    l_288 = ((0L || ((((((g_273[0][0][1] &= (l_261[1] = g_232)) , (&g_106 != (void*)0)) >= (((l_274 | ((~(safe_div_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_s(((safe_div_func_int64_t_s_s((l_246 || (((safe_add_func_int32_t_s_s(((l_244 == g_152.f0) ^ g_71), 9UL)) <= p_62) < l_286)), p_62)) > l_287), 11)) != p_62) >= l_262[2][5]), 5)) & p_62) , (void*)0) == (void*)0), p_62))) == 0x8CL)) ^ l_258) & 1UL)) , 0x77L) < p_61) <= p_61)) >= p_61);
                }
            }
            else
            { 
                int32_t *l_289 = &g_9[5];
                (*l_289) = (l_244 ^= 0x7592093BL);
            }
            (*l_291) ^= l_269;
            (*l_291) ^= ((0x70815F8AL >= (+(safe_sub_func_uint16_t_u_u(((*l_295) = 65527UL), ((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(3UL, (p_61 , ((((+l_274) && (((1L >= l_303) == 8L) >= g_99.f0)) , p_62) , p_61)))), l_225)), g_152.f2)) < 0x11L))))) != 1L);
            (*l_304) = l_153;
            for (g_67.f2 = 4; (g_67.f2 >= 1); g_67.f2 -= 1)
            { 
                int64_t l_308 = 0L;
                uint64_t *l_311 = (void*)0;
                uint64_t *l_312 = &l_286;
                uint8_t * const l_321 = &g_322;
                uint8_t * const *l_320 = &l_321;
                uint8_t * const **l_319 = &l_320;
                uint8_t * const **l_325 = &g_323;
                const struct S0 l_334 = {0UL,0x2E06L,0xF0E95BBEL};
                uint32_t l_367 = 4294967295UL;
                int32_t *l_371[3][1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_371[i][j] = &l_95;
                }
                if ((((*l_312) = (((+((safe_rshift_func_int16_t_s_u(l_308, 9)) || 0xF896339FL)) , (void*)0) != l_309)) <= (safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(l_204[1], ((safe_lshift_func_uint8_t_u_u(((*l_70) = (((*l_319) = &l_70) != ((*l_325) = g_323))), l_69)) >= g_67.f1))), 0UL))))
                { 
                    int8_t *l_328 = &g_106;
                    int32_t l_333 = 9L;
                    (*l_304) = (((((0xE7L < (0x0AL && ((*l_328) = (safe_div_func_int16_t_s_s(g_67.f0, l_308))))) & ((((safe_rshift_func_int16_t_s_u(g_168[0], 5)) >= (((p_62 <= l_245) & l_333) >= p_62)) <= 6UL) || p_61)) < g_273[0][4][0]) < 0x70390666L) , l_334);
                }
                else
                { 
                    (*l_291) = (safe_unary_minus_func_int32_t_s(l_95));
                    if (l_336)
                        continue;
                }
                (*l_291) ^= l_245;
                for (g_152.f1 = 0; (g_152.f1 <= 0); g_152.f1 += 1)
                { 
                    int8_t *l_362 = (void*)0;
                    int8_t *l_363 = (void*)0;
                    int8_t *l_364 = &g_106;
                    int32_t l_365 = (-1L);
                    uint8_t **l_369 = &l_70;
                    int i;
                    l_244 ^= (safe_rshift_func_int8_t_s_u((l_334.f0 | (((safe_sub_func_int16_t_s_s((g_113 & ((p_61 | 0x9C743024L) || (safe_lshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((safe_div_func_int8_t_s_s(((g_168[l_225] = (((*l_312) = p_61) <= ((((safe_add_func_int16_t_s_s(((safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_s(((+(((safe_rshift_func_int8_t_s_u(l_360[2][0][4], 5)) <= (~((*l_364) = (*l_291)))) || 0x8DF115A7B03AEDEELL)) > l_365), g_366)) , (void*)0) != (void*)0), 6)), l_367)), g_152.f0)) <= l_365), p_61)) && l_334.f0) < l_153.f2) , l_368))) || p_61), l_265)) > l_264), g_232)) || 1L), 3)))), g_152.f0)) != 0x9D0C0530D646BEEDLL) < p_61)), 6));
                    l_370 = l_369;
                    return &g_3;
                }
            }
            for (l_303 = 1; (l_303 <= 4); l_303 += 1)
            { 
                uint32_t l_394 = 0x488B7F67L;
                int32_t l_423 = 0L;
                int32_t l_424 = 1L;
                uint64_t l_434 = 0xB7E7C520808413C5LL;
                (*l_291) = (safe_sub_func_uint16_t_u_u(g_9[3], l_268));
                l_290 = &l_244;
                for (g_99.f0 = 1; (g_99.f0 <= 4); g_99.f0 += 1)
                { 
                    int32_t *l_386 = &l_264;
                    int32_t *l_387 = &l_288;
                    int32_t *l_388 = &g_9[0];
                    int32_t *l_389 = (void*)0;
                    int32_t *l_390 = &g_9[2];
                    int32_t l_391[1];
                    int32_t *l_392[6][6][4] = {{{&l_391[0],(void*)0,&l_391[0],&l_263},{&l_266,&g_3,&l_263,&l_264},{&l_267,&l_261[0],(void*)0,&l_264},{&l_264,&l_134,(void*)0,&l_244},{&l_391[0],&g_3,&g_9[3],(void*)0},{&l_261[0],(void*)0,&l_391[0],&l_391[0]}},{{&l_391[0],&l_391[0],&l_261[0],&l_261[0]},{&g_3,&l_261[0],(void*)0,&g_9[3]},{&l_391[0],&l_264,&l_391[0],&l_391[0]},{&l_391[0],&l_391[0],(void*)0,&l_244},{&l_261[0],&l_134,&g_3,&l_391[0]},{&l_265,&l_288,&g_9[3],&g_3}},{{&l_261[0],&l_288,(void*)0,&l_391[0]},{&l_288,&l_134,(void*)0,&l_244},{&g_3,&l_391[0],&l_288,&l_391[0]},{&l_261[0],&l_264,&l_95,&g_9[3]},{&l_265,&l_261[0],(void*)0,&l_261[0]},{&l_263,&l_391[0],(void*)0,&l_391[0]}},{{&l_261[0],(void*)0,&l_391[0],(void*)0},{&l_261[0],&g_3,&l_288,&l_244},{&l_391[0],&l_134,&l_265,&l_264},{&l_391[0],&l_261[0],&l_288,&l_95},{&l_261[0],&l_264,&l_391[0],&g_9[3]},{&l_261[0],&g_4,(void*)0,&l_244}},{{&l_263,&l_261[0],(void*)0,&l_244},{&l_265,(void*)0,&l_95,(void*)0},{&l_261[0],&l_288,&l_288,&l_261[0]},{&g_3,&l_391[0],(void*)0,&l_264},{&l_288,&g_4,(void*)0,&l_391[0]},{&l_261[0],&l_263,&g_9[3],&l_391[0]}},{{&l_265,&g_4,&g_3,&l_264},{&l_261[0],&l_391[0],(void*)0,&l_261[0]},{&l_391[0],&l_288,&l_391[0],(void*)0},{&l_391[0],(void*)0,(void*)0,&l_244},{&g_3,&l_261[0],&l_261[0],&l_244},{&l_391[0],&g_4,&l_391[0],&g_9[3]}}};
                    uint8_t l_419 = 1UL;
                    uint16_t l_425 = 0x699EL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_391[i] = (-7L);
                    (*l_291) = (safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((0x2B8E166FL >= ((safe_unary_minus_func_int64_t_s(((safe_sub_func_int16_t_s_s((~(g_99 , l_382)), (safe_div_func_uint64_t_u_u((l_385[4] == &g_168[l_225]), 0xCAFC2E89DF86A6F9LL)))) == 1UL))) && l_303)), 253UL)) && g_152.f2), g_113));
                    if (l_153.f1)
                        continue;
                    l_394++;
                    g_421 = ((*l_390) = ((safe_mul_func_uint8_t_u_u(l_399, (((safe_lshift_func_uint16_t_u_u((!((safe_mod_func_int32_t_s_s(l_394, l_264)) , (safe_mod_func_int64_t_s_s((((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u((((safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_415[1], (safe_rshift_func_uint16_t_u_u((((-1L) != l_418) > g_67.f2), g_273[0][0][1])))), l_419)) , (void*)0) == (void*)0), p_61)) == p_61), 2)) == p_62) <= g_106), 0xC17BD7970D75DFE7LL)))), 5)) || p_61) | l_420))) > g_113));
                    l_425--;
                }
                for (g_152.f2 = (-12); (g_152.f2 != 2); g_152.f2 = safe_add_func_uint32_t_u_u(g_152.f2, 7))
                { 
                    int32_t *l_430 = &l_263;
                    int32_t *l_431 = &l_265;
                    int32_t *l_432 = &l_261[0];
                    int32_t *l_433[6][2][1] = {{{(void*)0},{&l_423}},{{&l_266},{&l_423}},{{(void*)0},{(void*)0}},{{(void*)0},{&l_423}},{{&l_266},{&l_423}},{{(void*)0},{(void*)0}}};
                    int i, j, k;
                    ++l_434;
                    return &g_9[0];
                }
            }
        }
        l_134 |= (p_61 , ((*l_446) = ((safe_mod_func_uint32_t_u_u((l_303 != ((l_439 != l_440[1][0]) || (safe_div_func_uint64_t_u_u(0xAE87EE55952B5E47LL, (safe_div_func_int32_t_s_s(((void*)0 == g_445), p_61)))))), l_267)) , p_62)));
    }
    if ((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_int32_t_s((l_263 < (((safe_div_func_uint64_t_u_u((safe_add_func_int16_t_s_s(l_204[1], ((l_134 |= ((((safe_rshift_func_uint8_t_u_s(p_61, ((safe_mul_func_uint8_t_u_u(l_225, ((l_153.f0 < (safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(l_95, (l_476 = (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(g_99.f0, p_61)), l_267)) < 1UL), 0x9D32L)), 65535UL)), g_152.f0)) > p_62), g_4))))), 0)), l_263))) >= l_267))) < 247UL))) , l_266) , 1UL) == l_477[5])) != g_152.f2))), 0x2569070D5EA6A1BBLL)) , 0x28889A2521D76BE4LL) & p_61)))) >= 0xB4D226501C975E57LL) , (*g_445)), p_62)))
    { 
        uint8_t ****l_485 = (void*)0;
        uint8_t ***l_486 = (void*)0;
        uint8_t **l_488 = &l_70;
        uint8_t ***l_487 = &l_488;
        uint64_t *l_491[3];
        uint64_t **l_492 = &l_491[2];
        int32_t l_496 = 0x9366429CL;
        const int32_t l_513 = 0L;
        int32_t *l_516 = &l_496;
        uint64_t ***l_519 = &l_492;
        int i;
        for (i = 0; i < 3; i++)
            l_491[i] = &l_153.f0;
        if ((((1L >= ((safe_mod_func_uint8_t_u_u(((**l_488) = (safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((((l_486 = (l_484 = l_484)) != l_487) || ((safe_mod_func_uint32_t_u_u((((*l_492) = l_491[2]) == (void*)0), l_69)) < ((safe_sub_func_uint8_t_u_u((+p_62), l_496)) && p_62))) < g_99.f0), l_264)), p_61))), g_168[0])) >= l_134)) > p_61) && p_62))
        { 
            uint8_t l_514 = 0x0BL;
            int32_t *l_515 = &l_266;
            for (g_71 = 26; (g_71 >= 22); g_71 = safe_sub_func_int32_t_s_s(g_71, 9))
            { 
                union U1 l_501 = {0x1224L};
                struct S0 l_502 = {18446744073709551614UL,65529UL,0x474AD7A4L};
                int8_t *l_509[6][5] = {{(void*)0,&g_106,&g_106,(void*)0,(void*)0},{(void*)0,&g_106,(void*)0,&g_106,&g_106},{&g_106,&g_106,(void*)0,&g_106,&g_106},{&g_106,&g_106,&g_106,&g_106,(void*)0},{(void*)0,&g_106,(void*)0,&g_106,&g_106},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_510[6] = {0xBE86AD9FL,0xBE86AD9FL,0xBE86AD9FL,0xBE86AD9FL,0xBE86AD9FL,0xBE86AD9FL};
                int i, j;
                l_510[4] &= (safe_mul_func_int8_t_s_s(g_71, (l_501 , (l_502 , ((safe_div_func_uint8_t_u_u((0xEFL <= ((g_3 != ((safe_lshift_func_int8_t_s_u((g_106 &= (safe_sub_func_uint16_t_u_u(((g_273[0][0][1] = (g_273[0][3][1] & (p_61 <= g_99.f0))) ^ p_62), (*g_445)))), p_61)) < 65531UL)) | 65535UL)), 0xAEL)) > l_268)))));
                l_514 = ((safe_sub_func_uint16_t_u_u(0xFAA5L, l_513)) <= 0UL);
            }
            return &g_3;
        }
        else
        { 
            uint64_t ***l_518 = &l_492;
            uint64_t ****l_517[1];
            int i;
            for (i = 0; i < 1; i++)
                l_517[i] = &l_518;
            l_519 = (void*)0;
            (*l_516) ^= p_61;
        }
    }
    else
    { 
        int32_t *l_523 = &g_9[5];
        int32_t *l_524 = &l_134;
        int32_t *l_525 = &l_95;
        int32_t *l_526 = &g_9[5];
        int32_t *l_527 = &l_267;
        int32_t *l_528 = &l_267;
        int32_t *l_529[7][4] = {{&l_268,&l_268,&l_268,&l_268},{&l_268,&l_268,&l_268,&l_268},{&l_268,&l_268,&l_268,&l_268},{&l_268,&l_268,&l_268,&l_268},{&l_268,&l_268,&l_268,&l_268},{&l_268,&l_268,&l_268,&l_268},{&l_268,&l_268,&l_268,&l_268}};
        uint32_t l_530 = 0xFB616575L;
        int i, j;
        for (l_303 = 0; (l_303 < 38); l_303++)
        { 
            int32_t *l_522[1][5] = {{&l_134,&l_134,&l_134,&l_134,&l_134}};
            int i, j;
            return l_523;
        }
        (*l_523) ^= l_153.f1;
        l_530++;
    }
    l_535[2][1][5] &= ((*l_533) = (0x6932D8EDL <= 0xD7A92535L));
    return &g_3;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);

    }
    transparent_crc(g_67.f0, "g_67.f0", print_hash_value);
    transparent_crc(g_67.f3, "g_67.f3", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_152.f0, "g_152.f0", print_hash_value);
    transparent_crc(g_152.f1, "g_152.f1", print_hash_value);
    transparent_crc(g_152.f2, "g_152.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_168[i], "g_168[i]", print_hash_value);

    }
    transparent_crc(g_232, "g_232", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_273[i][j][k], "g_273[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_696, "g_696", print_hash_value);
    transparent_crc(g_995.f0, "g_995.f0", print_hash_value);
    transparent_crc(g_1000.f0, "g_1000.f0", print_hash_value);
    transparent_crc(g_1153, "g_1153", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1163[i][j][k], "g_1163[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1175, "g_1175", print_hash_value);
    transparent_crc(g_1181, "g_1181", print_hash_value);
    transparent_crc(g_1325, "g_1325", print_hash_value);
    transparent_crc(g_1478, "g_1478", print_hash_value);
    transparent_crc(g_1533.f0, "g_1533.f0", print_hash_value);
    transparent_crc(g_1533.f3, "g_1533.f3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1552[i], "g_1552[i]", print_hash_value);

    }
    transparent_crc(g_1585.f0, "g_1585.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1710[i][j], "g_1710[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1863, "g_1863", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1961[i], "g_1961[i]", print_hash_value);

    }
    transparent_crc(g_2059, "g_2059", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_2151[i][j][k], "g_2151[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2179, "g_2179", print_hash_value);
    transparent_crc(g_2246, "g_2246", print_hash_value);
    transparent_crc(g_2651, "g_2651", print_hash_value);
    transparent_crc(g_2683, "g_2683", print_hash_value);
    transparent_crc(g_2727, "g_2727", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2819[i], "g_2819[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2824[i], "g_2824[i]", print_hash_value);

    }
    transparent_crc(g_2832.f0, "g_2832.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2928[i][j], "g_2928[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2929, "g_2929", print_hash_value);
    transparent_crc(g_3030, "g_3030", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_3149[i][j], "g_3149[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_3232, "g_3232", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_3280[i], "g_3280[i]", print_hash_value);

    }
    transparent_crc(g_3281, "g_3281", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}

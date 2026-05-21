// SPDX-License-Identifier: MIT
// cctest_csmith_ed27cb40.c --- cctest case csmith_ed27cb40 (csmith seed 3978808128)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd5ed1cb6 */

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

// Options:   -s 3978808128 -o /tmp/csmith_gen_tksd7eat/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
};
#pragma pack(pop)

struct S1 {
   int16_t  f0;
   int32_t  f1;
   uint32_t  f2;
   const uint8_t  f3;
   uint32_t  f4;
};

union U2 {
   int32_t  f0;
   int8_t  f1;
   uint16_t  f2;
};


static uint32_t g_6 = 0xE4D9EDBDL;
static struct S1 g_11 = {0x245CL,-6L,0xC4307E4AL,0x06L,4294967289UL};
static union U2 g_12 = {0xE0710DD0L};
static struct S0 g_44 = {18446744073709551615UL};
static uint64_t g_52 = 0UL;
static uint8_t g_72 = 0x1EL;
static uint8_t g_103 = 0xB3L;
static uint16_t g_123 = 0x7F50L;
static uint64_t g_126 = 1UL;
static uint32_t g_184 = 0x4E8CAA09L;
static uint32_t g_201 = 0UL;
static uint32_t g_202 = 0UL;
static uint32_t g_203[3][4] = {{1UL,0x3F7625D6L,1UL,1UL},{0x3F7625D6L,0x3F7625D6L,4294967289UL,0x3F7625D6L},{0x3F7625D6L,1UL,1UL,0x3F7625D6L}};
static int64_t g_204 = 1L;
static uint32_t g_206 = 18446744073709551615UL;
static uint16_t g_225 = 65535UL;
static uint16_t g_238 = 0x2149L;
static int16_t g_261 = (-2L);



static uint16_t  func_1(void);
static int16_t  func_7(struct S1  p_8, int16_t  p_9, union U2  p_10);
static int32_t  func_16(union U2  p_17);
static union U2  func_18(uint16_t  p_19, uint32_t  p_20, struct S0  p_21);




static uint16_t  func_1(void)
{ 
    const int32_t l_209 = 1L;
    int32_t l_218 = (-6L);
    int32_t l_224 = 1L;
    uint8_t l_237 = 1UL;
    struct S0 l_240 = {0UL};
    if ((((safe_div_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(g_6, (func_7(g_11, g_11.f0, g_12) < l_209))) , g_52) | g_11.f3), g_6)) | g_11.f3) || 0x639E2500L))
    { 
        uint16_t l_210[3];
        int i;
        for (i = 0; i < 3; i++)
            l_210[i] = 65535UL;
        g_12.f0 = (l_210[2] = 4L);
        for (g_52 = 8; (g_52 == 20); g_52 = safe_add_func_uint8_t_u_u(g_52, 8))
        { 
            int32_t l_213 = 0L;
            l_213 = g_11.f0;
            g_12.f0 = l_213;
            g_12.f0 = 0x6FF74A9DL;
        }
        return l_209;
    }
    else
    { 
        uint16_t l_217 = 0x9F92L;
        int32_t l_219[5][5] = {{0x7C09D144L,(-1L),(-1L),0x7C09D144L,1L},{0x927E87AFL,0x6AFBF693L,0x6AFBF693L,0x927E87AFL,0x292E266AL},{0x7C09D144L,(-1L),(-1L),0x7C09D144L,1L},{0x927E87AFL,0x6AFBF693L,0x6AFBF693L,0x927E87AFL,0x292E266AL},{0x7C09D144L,(-1L),(-1L),0x7C09D144L,1L}};
        int i, j;
        l_219[2][1] = (g_6 <= ((((l_218 = (safe_unary_minus_func_int8_t_s((0xB61AE5F7L > (safe_mul_func_uint16_t_u_u(((0xA880BC6D34CFEFF8LL <= (1UL > l_217)) ^ l_217), l_217)))))) , 0x7219EB45L) && g_123) , 0xE320L));
    }
    for (g_12.f1 = 0; (g_12.f1 < (-11)); g_12.f1 = safe_sub_func_uint32_t_u_u(g_12.f1, 1))
    { 
        int32_t l_222[4];
        int32_t l_223[1];
        uint32_t l_236 = 0xF2DFD3FBL;
        int i;
        for (i = 0; i < 4; i++)
            l_222[i] = 0x03624ADBL;
        for (i = 0; i < 1; i++)
            l_223[i] = 1L;
        g_225--;
        if ((g_238 |= ((safe_div_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s((((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(251UL, (l_236 == ((g_202 | 1L) >= g_11.f0)))), l_237)) | (-8L)) & g_11.f1), 9)) != 0x33B6CD964B614F71LL) ^ 0x75L), g_11.f3)) & g_203[1][2])))
        { 
            int8_t l_243 = 7L;
            int16_t l_258 = (-1L);
            for (l_224 = 3; (l_224 >= 0); l_224 -= 1)
            { 
                int32_t l_239 = 0L;
                int i;
                l_239 = l_222[l_224];
                if (g_6)
                    continue;
            }
            l_240 = g_44;
            l_218 = (safe_sub_func_uint8_t_u_u(l_243, (((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((g_6 & (safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(l_258, 14)) > (g_203[1][2] < (-10L))), l_236)), 0xFC477129L)), l_258))), g_206)) < l_223[0]), 0L)), l_258)) >= 0xDB8EC8C7DFA00B79LL) & 7L)));
        }
        else
        { 
            for (g_238 = 0; (g_238 != 35); g_238 = safe_add_func_uint64_t_u_u(g_238, 7))
            { 
                uint8_t l_262 = 0x7AL;
                --l_262;
            }
        }
    }
    return g_184;
}



static int16_t  func_7(struct S1  p_8, int16_t  p_9, union U2  p_10)
{ 
    int32_t l_28 = (-1L);
    struct S0 l_29[5] = {{4UL},{4UL},{4UL},{4UL},{4UL}};
    int32_t l_141 = 0x2EDDAFFDL;
    int32_t l_143[1][5][1] = {{{0x9BFB87D1L},{1L},{0x9BFB87D1L},{1L},{0x9BFB87D1L}}};
    const int32_t l_159 = 5L;
    uint16_t l_173 = 0xCA15L;
    int32_t l_183 = (-6L);
    int i, j, k;
    for (p_10.f1 = 0; (p_10.f1 != 25); p_10.f1 = safe_add_func_uint8_t_u_u(p_10.f1, 5))
    { 
        uint32_t l_15 = 9UL;
        return l_15;
    }
    if (func_16(func_18((safe_lshift_func_uint8_t_u_u(((p_8.f3 <= ((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(0x6B37L, (g_12.f2 = (g_11 , 65535UL)))), l_28)) | p_8.f4)) >= (-3L)), 2)), g_11.f0, l_29[0])))
    { 
        uint32_t l_109 = 0xBF1637F2L;
        for (g_44.f0 = 0; (g_44.f0 > 47); g_44.f0++)
        { 
            int8_t l_108 = 1L;
            g_12.f0 = (safe_rshift_func_int8_t_s_s((g_103 &= (g_12 , (-2L))), 6));
            p_10.f0 = (safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((l_108 , g_44) , g_11) , g_11.f0), l_109)), l_108));
        }
    }
    else
    { 
        const int64_t l_114 = 0x652714D024A44AA9LL;
        int32_t l_122 = 0x3DC045D8L;
        const struct S0 l_157 = {0x6FC58545L};
        int32_t l_158[4] = {(-1L),(-1L),(-1L),(-1L)};
        uint32_t l_165 = 0xA7EA209BL;
        struct S0 l_166 = {0x9E8ABCB0L};
        int32_t l_205 = 0x9F1C35A1L;
        int i;
        if ((((safe_add_func_uint16_t_u_u((((g_103 >= ((safe_div_func_int16_t_s_s((g_11.f0 ^= 0x2B6AL), 65531UL)) ^ l_114)) ^ p_9) == 0L), (-1L))) & g_11.f3) < 0xB5813BB0L))
        { 
            int8_t l_115 = 0x2CL;
            const uint8_t l_116 = 0xA2L;
            int32_t l_121 = 0x5AF5334EL;
            if ((l_115 && ((((((l_116 < 1L) ^ (safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(g_11.f3, l_114)), p_8.f0))) < l_29[0].f0) > 0xA4BB2EE2B33A3617LL) <= 0x16565E83L) == 0xFEB6L)))
            { 
lbl_156:
                g_123++;
                return p_9;
            }
            else
            { 
                int8_t l_142[4] = {2L,2L,2L,2L};
                const struct S0 l_145 = {18446744073709551615UL};
                struct S0 l_146[4] = {{0x3C26F71AL},{0x3C26F71AL},{0x3C26F71AL},{0x3C26F71AL}};
                int i;
                g_126--;
                if (g_11.f1)
                    goto lbl_144;
lbl_144:
                g_12.f0 ^= ((l_143[0][0][0] |= (g_6 || (safe_mod_func_int8_t_s_s((p_10.f1 < (safe_mul_func_uint8_t_u_u((l_142[1] = (l_29[0].f0 == (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((l_141 |= (safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(p_8.f0, 8)), p_9))), 2)), g_52)))), g_72))), (-7L))))) && g_126);
                l_146[3] = l_145;
            }
            for (g_11.f4 = (-16); (g_11.f4 <= 27); g_11.f4++)
            { 
                int32_t l_155 = 1L;
                l_122 = (g_126 & (safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((l_114 != (safe_mod_func_uint16_t_u_u(((l_141 & (((p_8.f2 = (l_155 >= l_114)) >= g_6) | 1L)) == (-1L)), l_115))), p_8.f0)), 0x058001A0L)));
            }
            if (g_11.f1)
                goto lbl_156;
        }
        else
        { 
            struct S0 l_163 = {18446744073709551615UL};
            int32_t l_164[2][1][2];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_164[i][j][k] = 3L;
                }
            }
            l_122 ^= ((g_103 >= 0xBDL) , ((l_158[3] = (((l_157 , p_9) || 1UL) == g_11.f0)) & l_159));
            if (((((!0x6B5F6A14961C1CC9LL) | ((((((safe_mul_func_uint8_t_u_u(((l_163 = g_44) , (g_72 = (l_163.f0 & (65526UL && 65535UL)))), p_8.f1)) != p_9) ^ l_164[0][0][1]) || p_8.f0) , p_8.f2) && l_165)) < 0x420AL) , 0xCA001A1BL))
            { 
                l_166 = (g_44 = l_163);
            }
            else
            { 
                return g_52;
            }
            g_184 = (safe_mul_func_int16_t_s_s(0x2732L, (((safe_div_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u((l_173 | ((safe_lshift_func_int8_t_s_u(p_8.f2, 0)) , ((((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(((l_183 ^= ((l_143[0][3][0] = (((g_12.f0 ^= ((safe_rshift_func_uint16_t_u_s(((p_8.f4 , p_8.f4) > g_52), l_122)) , g_126)) != l_141) != 9UL)) != g_126)) <= l_165))) , g_72), l_158[3])) | p_8.f1), (-8L))) == g_44.f0) , l_141) , 5UL))), l_164[0][0][0])) , 4UL), 0x7A05F2A7C57E4F70LL)) ^ g_44.f0) ^ 0xC375L)));
        }
        g_203[1][2] = (g_202 = (g_11.f1 < ((((g_201 = (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((p_8 , (((safe_rshift_func_uint16_t_u_s((g_12.f2++), 13)) <= (safe_rshift_func_int16_t_s_u((((safe_div_func_int16_t_s_s((((p_8.f4 && (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(0x4C97L, 13)), g_44.f0))) | l_165) || g_103), p_9)) >= 0x13D90FEA2692C927LL) < p_8.f3), l_165))) <= g_11.f4)), 0L)), p_9))) < 0x87L) , 0x8217L) && l_143[0][3][0])));
        --g_206;
    }
    return g_11.f0;
}



static int32_t  func_16(union U2  p_17)
{ 
    return g_12.f1;
}



static union U2  func_18(uint16_t  p_19, uint32_t  p_20, struct S0  p_21)
{ 
    uint32_t l_37 = 0x1606DC06L;
    struct S0 l_40 = {7UL};
    int32_t l_43 = 0x3DDB2097L;
    struct S1 l_47[1][1][2] = {{{{0xB4ABL,1L,0x8DD0BB26L,0UL,0x260039C1L},{0xB4ABL,1L,0x8DD0BB26L,0UL,0x260039C1L}}}};
    int32_t l_51[3][3] = {{7L,7L,(-5L)},{7L,7L,(-5L)},{7L,7L,(-5L)}};
    union U2 l_62 = {-1L};
    int i, j, k;
    g_12.f0 = ((safe_sub_func_int8_t_s_s(p_19, (((safe_lshift_func_int8_t_s_u(((((safe_lshift_func_int8_t_s_u((l_43 = ((~(l_37++)) , (l_40 , (safe_div_func_uint8_t_u_u(1UL, g_11.f3))))), p_19)) && l_37) > g_11.f4) >= l_40.f0), g_6)) & 0x9145L) | l_40.f0))) > l_40.f0);
    g_44 = g_44;
    if ((safe_add_func_int64_t_s_s((l_47[0][0][1] , 0x545435D7D231D576LL), (l_47[0][0][1].f0 != ((((safe_unary_minus_func_uint16_t_u(((safe_mul_func_int8_t_s_s(((++g_52) > (safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((+((safe_rshift_func_uint16_t_u_s(l_47[0][0][1].f1, 10)) || p_21.f0)), l_47[0][0][1].f0)), p_21.f0))), 0x7FL)) < p_21.f0))) , p_19) && g_11.f0) < p_19)))))
    { 
        return l_62;
    }
    else
    { 
        uint32_t l_75[5];
        int32_t l_80[3][5][4] = {{{(-1L),0xE71D51ADL,0x1A018BFDL,0x1A018BFDL},{0xEA20016CL,0xEA20016CL,(-1L),0x1A018BFDL},{0xEB5F43E0L,0xE71D51ADL,0xEB5F43E0L,(-1L)},{0xEB5F43E0L,(-1L),(-1L),0xEB5F43E0L},{0xEA20016CL,(-1L),0x1A018BFDL,(-1L)}},{{(-1L),0xE71D51ADL,0x1A018BFDL,0x1A018BFDL},{0xEA20016CL,0xEA20016CL,(-1L),0x1A018BFDL},{0xEB5F43E0L,0xE71D51ADL,0xEB5F43E0L,(-1L)},{0xEB5F43E0L,(-1L),(-1L),0xEB5F43E0L},{0xEA20016CL,(-1L),0x1A018BFDL,(-1L)}},{{(-1L),0xE71D51ADL,0x1A018BFDL,0x1A018BFDL},{0xEA20016CL,0xEA20016CL,(-1L),0x1A018BFDL},{0xEB5F43E0L,0xE71D51ADL,0xEB5F43E0L,(-1L)},{0xEB5F43E0L,(-1L),(-1L),0xEB5F43E0L},{0xEA20016CL,(-1L),0x1A018BFDL,(-1L)}}};
        uint32_t l_81 = 0xCEB51834L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_75[i] = 4294967294UL;
        for (g_11.f0 = 2; (g_11.f0 >= 0); g_11.f0 -= 1)
        { 
            g_12.f0 |= 0x5BDF5444L;
            if (p_21.f0)
                break;
            for (g_44.f0 = 0; (g_44.f0 <= 2); g_44.f0 += 1)
            { 
                int i, j;
            }
        }
        if ((safe_lshift_func_int16_t_s_s((((l_75[1] & ((safe_add_func_int64_t_s_s((safe_mod_func_int16_t_s_s((g_11.f2 , ((((l_80[0][0][0] &= ((((((l_62 , g_11.f1) >= 1UL) > l_43) <= l_62.f2) != l_47[0][0][1].f0) <= (-4L))) ^ g_72) || g_11.f2) , g_6)), 2UL)), 1L)) || 0xEE2C543511282808LL)) >= l_81) & 0xBDFFL), 0)))
        { 
            uint8_t l_82 = 0x9EL;
            uint32_t l_85 = 0xA1048D1DL;
            g_12.f0 = (l_82 == ((((safe_add_func_uint16_t_u_u((l_85 >= (((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(((((safe_sub_func_uint8_t_u_u((g_12.f0 , l_80[0][0][0]), 0x74L)) , 0x69L) || g_12.f0) == l_47[0][0][1].f4), l_51[2][0])) >= 0xA12EL), p_19)) >= l_82) & l_47[0][0][1].f2)), g_11.f2)) > l_82) == 0x5FB0L) , l_80[0][2][0]));
            return g_12;
        }
        else
        { 
            uint64_t l_95 = 7UL;
            int32_t l_98 = 0xC927B072L;
            if (((g_12 , 4294967295UL) | (-3L)))
            { 
                g_44 = (g_44 , p_21);
                g_44 = g_44;
            }
            else
            { 
                int64_t l_92 = 0xBC8947EB49816E07LL;
                int32_t l_93 = 0x311F6BCDL;
                int32_t l_94 = 5L;
                p_21 = p_21;
                l_92 ^= (l_80[0][0][0] = p_19);
                l_95++;
            }
            l_98 |= l_95;
        }
        g_12.f0 |= (p_21.f0 && p_20);
    }
    return l_62;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    transparent_crc(g_11.f3, "g_11.f3", print_hash_value);
    transparent_crc(g_11.f4, "g_11.f4", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_44.f0, "g_44.f0", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_203[i][j], "g_203[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}

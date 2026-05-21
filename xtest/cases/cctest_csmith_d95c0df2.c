// SPDX-License-Identifier: MIT
// cctest_csmith_d95c0df2.c --- cctest case csmith_d95c0df2 (csmith seed 3646688754)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcd888319 */

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

// Options:   -s 3646688754 -o /tmp/csmith_gen_3ldhko8l/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   const int32_t  f1;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
};


static int32_t g_3[2][4][3] = {{{(-10L),0xB25B3B9DL,(-10L)},{(-1L),1L,(-1L)},{(-10L),0xB25B3B9DL,(-10L)},{(-1L),1L,(-1L)}},{{(-10L),0xB25B3B9DL,(-10L)},{(-1L),1L,(-1L)},{(-10L),0xB25B3B9DL,(-10L)},{(-1L),1L,(-1L)}}};
static int32_t g_4 = 0x17059141L;
static uint16_t g_39[5][1] = {{0x221EL},{0x0906L},{0x221EL},{0x0906L},{0x221EL}};
static int32_t g_40 = 0xE20B395BL;
static uint32_t g_46 = 0x27AB8100L;
static union U1 g_64 = {1UL};
static uint32_t g_65[4][2] = {{0xD8654EFDL,0xD8654EFDL},{0xD8654EFDL,0xD8654EFDL},{0xD8654EFDL,0xD8654EFDL},{0xD8654EFDL,0xD8654EFDL}};
static int16_t g_106 = 0xD6F4L;
static uint8_t g_124 = 0x41L;
static uint64_t g_174 = 0xE63CD3D8531B7E96LL;
static uint32_t g_216 = 4294967289UL;
static uint8_t g_256 = 0x5DL;
static uint32_t g_262[5][2][1] = {{{0x0675B281L},{0x229619C6L}},{{0x0675B281L},{0x229619C6L}},{{0x0675B281L},{0x229619C6L}},{{0x0675B281L},{0x229619C6L}},{{0x0675B281L},{0x229619C6L}}};
static uint64_t g_267 = 0x16CB2FF3143DF592LL;
static struct S0 g_268 = {65535UL,0L};



static struct S0  func_1(void);
static int8_t  func_7(int64_t  p_8, uint16_t  p_9, int32_t  p_10, int16_t  p_11);
static int8_t  func_14(uint8_t  p_15, uint8_t  p_16);
static uint64_t  func_21(uint32_t  p_22, const int8_t  p_23);




static struct S0  func_1(void)
{ 
    uint16_t l_2[3][1];
    int32_t l_221 = 0x9440195CL;
    int32_t l_269 = 0x8F6AE03AL;
    int32_t l_270[2][5][1] = {{{(-10L)},{0L},{(-10L)},{(-10L)},{0L}},{{(-10L)},{(-10L)},{0L},{(-10L)},{(-10L)}}};
    uint64_t l_271 = 0x4F71ED02848F1E6FLL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_2[i][j] = 0UL;
    }
    for (g_3[0][3][2] = 0; (g_3[0][3][2] >= 0); g_3[0][3][2] -= 1)
    { 
        int16_t l_28 = 0xF59FL;
        const int32_t l_29 = (-6L);
        int32_t l_30 = 0L;
        for (g_4 = 0; (g_4 >= 0); g_4 -= 1)
        { 
            if (g_3[0][3][2])
                break;
        }
        g_267 = (safe_lshift_func_int16_t_s_u((func_7((safe_add_func_uint32_t_u_u((((g_262[2][1][0] ^= func_14(((safe_mod_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u(l_2[0][0], 2)) && (l_221 |= func_21((l_2[2][0] || ((safe_sub_func_uint16_t_u_u(((((-1L) | ((safe_rshift_func_int16_t_s_u((((l_28 ^= (l_2[1][0] || (-1L))) > g_3[1][2][2]) ^ l_2[0][0]), g_3[0][1][2])) | l_29)) , l_30) > l_29), 0xF433L)) , l_2[0][0])), g_3[0][3][2]))), 1L)) , g_46), l_2[2][0])) > g_3[0][3][2]) , l_221), g_64.f0)), g_3[1][3][0], l_29, g_256) > l_2[2][0]), 13));
        for (g_4 = 0; (g_4 <= 0); g_4 += 1)
        { 
            return g_268;
        }
    }
    l_271++;
    return g_268;
}



static int8_t  func_7(int64_t  p_8, uint16_t  p_9, int32_t  p_10, int16_t  p_11)
{ 
    uint8_t l_263 = 0xFFL;
    int32_t l_266 = 8L;
    l_266 = (l_263 < (safe_mod_func_uint64_t_u_u(0xA4C42D59610F7576LL, l_263)));
    return p_10;
}



static int8_t  func_14(uint8_t  p_15, uint8_t  p_16)
{ 
    uint32_t l_228 = 0x50297C0CL;
    uint32_t l_229 = 0UL;
    union U1 l_235 = {4294967291UL};
    int64_t l_257 = 0L;
    if ((safe_add_func_uint32_t_u_u(g_64.f0, (safe_mul_func_uint16_t_u_u(g_65[2][0], (safe_sub_func_uint32_t_u_u(0x0F59ADD7L, (18446744073709551611UL > l_228))))))))
    { 
        int64_t l_239 = 6L;
        uint32_t l_240 = 0x7ACA667CL;
        int32_t l_241 = 0xF9EDCDB7L;
        l_241 = ((l_229 , (!(safe_mul_func_int8_t_s_s(((l_239 = ((safe_rshift_func_uint16_t_u_s(((((l_235 , (safe_sub_func_int8_t_s_s(g_124, (!(p_16 == p_16))))) <= l_229) == g_3[1][3][2]) , 0x30B9L), l_229)) >= 0x40A8A390L)) >= l_240), 0x28L)))) < g_124);
        for (p_15 = 0; (p_15 < 4); p_15 = safe_add_func_int32_t_s_s(p_15, 8))
        { 
            return g_174;
        }
        g_4 &= (l_241 = g_3[0][3][2]);
    }
    else
    { 
        int32_t l_258 = 0x4F0C07E3L;
        int32_t l_259 = 0xECBCC985L;
        g_4 &= (((l_259 = ((p_15 || ((l_258 = (!(safe_mod_func_uint16_t_u_u((g_3[0][3][2] , (safe_mul_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((((((g_40 , (safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((!((g_46 == g_174) ^ g_3[0][3][2])), 8)), g_216))) && 0x3EE79D9DL) < g_256) < l_257) != g_64.f0), l_258)) < p_16), g_174))), l_258)))) | g_256)) & l_259)) , p_16) & p_15);
        g_4 = (!(+l_258));
    }
    return g_174;
}



static uint64_t  func_21(uint32_t  p_22, const int8_t  p_23)
{ 
    int16_t l_31[5][1][5] = {{{0L,(-8L),0L,0L,(-8L)}},{{0x035AL,0xFFEAL,0xFFEAL,0x035AL,0xFFEAL}},{{(-8L),(-8L),0x0C43L,(-8L),(-8L)}},{{0xFFEAL,0x035AL,0xFFEAL,0xFFEAL,0x035AL}},{{(-8L),0L,0L,(-8L),0L}}};
    int32_t l_36[3];
    int8_t l_60 = (-1L);
    int8_t l_61 = 8L;
    union U1 l_69 = {0xE384C7D0L};
    int32_t l_105 = 0x4368EC64L;
    int32_t l_117 = 0L;
    int8_t l_126 = 1L;
    struct S0 l_133 = {9UL,-1L};
    uint64_t l_155 = 0x599F0A174F72E784LL;
    uint64_t l_204[2][1][2];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_36[i] = 0xBE776E9FL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_204[i][j][k] = 0UL;
        }
    }
    for (p_22 = 0; (p_22 <= 0); p_22 += 1)
    { 
        int64_t l_37 = (-1L);
        int32_t l_41[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        int i;
        g_4 ^= (p_22 ^ (l_36[1] = (safe_lshift_func_int8_t_s_u(((g_3[0][3][2] < 0x46L) != (safe_rshift_func_uint16_t_u_s(p_22, 6))), 1))));
        for (g_4 = 0; (g_4 <= 0); g_4 += 1)
        { 
            return l_37;
        }
        for (l_37 = 0; (l_37 <= 0); l_37 += 1)
        { 
            uint8_t l_38 = 0x46L;
            for (g_4 = 0; (g_4 >= 0); g_4 -= 1)
            { 
                int i, j, k;
                return l_31[(p_22 + 1)][g_4][(l_37 + 3)];
            }
            if (l_38)
                continue;
            return l_38;
        }
        for (g_4 = 0; (g_4 <= 0); g_4 += 1)
        { 
            int32_t l_42 = 1L;
            int32_t l_43 = 0x2BC12A55L;
            int32_t l_44 = 5L;
            int32_t l_45 = 0x881F6C98L;
            uint8_t l_98 = 251UL;
            g_39[1][0] = g_3[1][3][1];
            --g_46;
            if ((safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((!((safe_mul_func_uint8_t_u_u((0x37L | (0x30L != p_22)), (((safe_mod_func_uint32_t_u_u(((((safe_mod_func_uint16_t_u_u(l_60, p_22)) , l_61) , g_40) , l_60), 0xD4F00D13L)) == g_39[0][0]) || p_22))) ^ g_46)), p_23)), 0xDCAEL)))
            { 
                uint32_t l_66 = 4294967292UL;
                g_65[2][0] &= (l_45 < (safe_rshift_func_int8_t_s_s((g_64 , g_40), 4)));
                l_66 = (-1L);
                return g_39[0][0];
            }
            else
            { 
                int8_t l_90 = 1L;
                int32_t l_91[4] = {(-5L),(-5L),(-5L),(-5L)};
                int i;
                l_44 |= (safe_add_func_int8_t_s_s((l_69 , ((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((l_91[2] = (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((l_37 > 9L), (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((0xDCL ^ l_90) < l_42), 3UL)), l_90)), p_22)), 8)))) || 0x3E1A65742D117B57LL), l_45)) == g_46), p_23)) != p_23), l_36[1]))), 254UL)), g_3[1][0][1])) >= 1UL)), l_60));
            }
            for (l_45 = 0; (l_45 <= 0); l_45 += 1)
            { 
                int i, j, k;
                g_40 = l_31[(p_22 + 3)][g_4][(l_45 + 2)];
                g_40 &= (safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_98 , (g_64.f0 , p_22)), 12)), 0x42DFL)), 0x06L));
            }
        }
    }
    if (((safe_mul_func_uint8_t_u_u(4UL, (((safe_add_func_uint8_t_u_u((g_106 &= (((l_60 != p_22) && (safe_lshift_func_int16_t_s_u((p_23 , l_105), 7))) < p_22)), g_46)) > 0x80BBL) || 1UL))) < 0x77L))
    { 
        struct S0 l_111 = {0x4647L,3L};
        l_36[1] = ((safe_mul_func_uint8_t_u_u(6UL, (safe_mul_func_int8_t_s_s(((l_105 &= ((l_111 , l_69) , (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((~l_69.f0), l_60)), p_22)))) , p_22), (-10L))))) && (-7L));
        return l_117;
    }
    else
    { 
        const uint16_t l_125 = 0xB745L;
        int32_t l_144[5];
        int32_t l_206 = 0x8F40BAC0L;
        int i;
        for (i = 0; i < 5; i++)
            l_144[i] = 0x306111E2L;
        l_36[1] = (((g_40 && (safe_mul_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(g_40, (safe_mul_func_uint8_t_u_u((g_124 = g_46), p_23)))) > p_22), l_125))) <= l_125) == l_126);
        for (l_61 = 0; (l_61 >= (-12)); l_61 = safe_sub_func_int16_t_s_s(l_61, 6))
        { 
            uint64_t l_129[3];
            int32_t l_143 = 1L;
            uint64_t l_154 = 0x36FC2CA393CC16ADLL;
            int8_t l_211 = 0x51L;
            int i;
            for (i = 0; i < 3; i++)
                l_129[i] = 0x97F862FE7C9D89B7LL;
            if (g_39[0][0])
            { 
                const uint32_t l_140[2] = {18446744073709551613UL,18446744073709551613UL};
                uint16_t l_141 = 65535UL;
                int32_t l_142[2][5] = {{0x5EFA727DL,0L,0x5EFA727DL,6L,6L},{0x5EFA727DL,0L,0x5EFA727DL,6L,6L}};
                int i, j;
                g_4 = (((l_129[1] | p_23) ^ (p_22 || ((g_3[1][0][1] <= (-4L)) & 0x27A5L))) ^ 0xB24AL);
                l_142[0][1] = (safe_mod_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s((((((l_133 , (((safe_mod_func_int64_t_s_s((g_124 && (((((((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_60, 0xF9L)), p_22)) < p_23) && g_65[2][0]) ^ 0x1623CC279608170ALL) & l_140[1]) , 5UL) || g_106)), (-2L))) > (-1L)) >= l_141)) , p_22) != p_22) ^ 0x3EL) , p_23))), g_106));
            }
            else
            { 
                uint32_t l_145 = 0x52824790L;
                l_144[2] = (l_143 = (-1L));
                l_145--;
            }
            if ((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((65531UL > (8UL >= g_3[0][3][2])) && p_22), 1UL)), l_154)))
            { 
                l_155++;
                l_36[0] = ((safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s((((l_105 &= (safe_mod_func_int64_t_s_s((g_174 = (((safe_add_func_uint64_t_u_u(l_125, l_154)) < 0UL) >= (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(0x5FL, l_144[2])), 4294967295UL)), 3)), g_65[2][0])))), 18446744073709551614UL))) <= 0L) >= p_22), g_106)), g_39[1][0])) || p_23);
            }
            else
            { 
                struct S0 l_197[5][1] = {{{1UL,-1L}},{{9UL,-1L}},{{1UL,-1L}},{{9UL,-1L}},{{1UL,-1L}}};
                uint16_t l_205 = 1UL;
                int32_t l_212[1][2][4] = {{{0xD5B373B1L,0xD5B373B1L,0xD5B373B1L,0xD5B373B1L},{0xD5B373B1L,0xD5B373B1L,0xD5B373B1L,0xD5B373B1L}}};
                int32_t l_213 = 0x8C0EF684L;
                int i, j, k;
                l_36[0] = (l_206 &= ((((safe_lshift_func_int8_t_s_u((((((safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u((0x9547L || 0xECA1L), (safe_mul_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u((l_197[1][0] , (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0x6BB9L, g_46)), 15)), p_23))), g_39[2][0])) , 0x0440L) & g_174), g_39[1][0])), l_144[2])) , p_22), p_23)))), 0xAE951E9A90B212F5LL)) || g_46), p_23)), l_204[1][0][0])) ^ g_39[0][0]), l_197[1][0].f1)), l_205)) , 0xD1B5B473D79527A0LL) != 0x4B5D444B5CFA680ELL) | p_22) == l_125), 7)) , 1L) > l_31[3][0][1]) != 65530UL));
                l_213 = (((0xF5FA4EC0DFEC3DBCLL == ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint64_t_u_u((l_212[0][1][1] = ((p_23 > l_211) || ((g_106 >= g_4) >= 0xEA8A685AL))), p_23)) & l_205), g_39[1][0])) ^ g_64.f0)) & (-1L)) == p_22);
            }
            g_4 ^= ((l_155 ^ (safe_mod_func_int64_t_s_s(((g_216 = p_22) ^ ((((safe_mod_func_int16_t_s_s(l_211, (safe_mod_func_int16_t_s_s(((0xE4L | p_23) , g_174), l_125)))) , g_106) <= l_36[1]) || 65535UL)), 0x95D819CC642A9DD3LL))) != 0x64L);
        }
    }
    return l_36[2];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_39[i][j], "g_39[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_65[i][j], "g_65[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_262[i][j][k], "g_262[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_268.f0, "g_268.f0", print_hash_value);
    transparent_crc(g_268.f1, "g_268.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}

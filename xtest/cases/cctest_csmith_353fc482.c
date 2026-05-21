// SPDX-License-Identifier: MIT
// cctest_csmith_353fc482.c --- cctest case csmith_353fc482 (csmith seed 893371522)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x691d48a6 */

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

// Options:   -s 893371522 -o /tmp/csmith_gen_eki0n8yh/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int8_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   struct S0  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int64_t  f0;
   int16_t  f1;
   int64_t  f2;
};
#pragma pack(pop)

struct S3 {
   uint32_t  f0;
   uint8_t  f1;
   uint8_t  f2;
   struct S2  f3;
   int32_t  f4;
   struct S0  f5;
};

union U4 {
   struct S3  f0;
   uint8_t  f1;
   const uint8_t  f2;
   const int32_t  f3;
};


static int16_t g_11 = 0xCC4BL;
static uint32_t g_15[5] = {2UL,2UL,2UL,2UL,2UL};
static struct S2 g_20 = {2L,-1L,-1L};
static union U4 g_29 = {{1UL,250UL,250UL,{0x1A0197CBB4028481LL,1L,0xACC167DF2DDFDAF0LL},0x56FE18BDL,{0UL,0xCBL}}};
static uint16_t g_53 = 8UL;
static int16_t g_54 = 0x320CL;
static int64_t g_61 = 0xB5E352544EE79622LL;
static uint16_t g_62 = 65534UL;
static int32_t g_64 = 0x79F159E9L;
static struct S1 g_81 = {{0xF5B2801FL,0L}};
static uint16_t g_128 = 0xF570L;
static uint32_t g_129 = 0xECC4D8AAL;
static struct S3 g_133 = {0x6EB45B50L,3UL,252UL,{0xEF617C72CAAA7E9ALL,0x5541L,0xA662571DCDCBB970LL},0x0A5B6558L,{0x82A7E1DDL,0x8EL}};



static uint32_t  func_1(void);
static int32_t  func_2(uint32_t  p_3, uint8_t  p_4, struct S3  p_5);
static uint8_t  func_8(int16_t  p_9, int8_t  p_10);
static int32_t  func_16(uint8_t  p_17, int32_t  p_18);




static uint32_t  func_1(void)
{ 
    uint16_t l_14 = 6UL;
    struct S3 l_42 = {0xCF3D0097L,247UL,9UL,{0L,0xD55FL,0xF230988A21DEC743LL},0x7240E601L,{1UL,-5L}};
    int32_t l_44 = 0x2D95C788L;
    struct S1 l_80 = {{18446744073709551615UL,-8L}};
    uint16_t l_94 = 0xAAD4L;
    struct S3 l_134 = {0x18D2ECADL,3UL,0xAFL,{-1L,2L,0x5037CFC119431DCFLL},0L,{18446744073709551615UL,0x35L}};
    l_44 = (func_2((safe_sub_func_uint8_t_u_u(func_8(g_11, (safe_mul_func_uint16_t_u_u(g_11, ((((g_11 & (l_14 > g_11)) | g_11) < l_14) & 0xD402DA3CL)))), 0x34L)), g_15[3], l_42) == g_15[1]);
    if ((g_29.f0.f5 , (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((g_54 ^= (((g_53 &= ((g_15[4] && ((g_11 &= (safe_rshift_func_int16_t_s_s(((l_44 &= ((l_42.f5.f0 || (g_29.f0.f1++)) ^ (l_42.f3.f0 >= g_15[4]))) != l_14), 15))) < l_42.f0)) , g_29.f0.f5.f0)) && l_42.f5.f0) == 0x4540E516L)), g_20.f1)), 0))))
    { 
        int32_t l_57[2];
        union U4 l_60 = {{0xFF7B51EFL,0x77L,4UL,{1L,0x20B6L,0x2EDFCA599F3DF38ELL},0xA276D00DL,{0UL,0x8EL}}};
        int32_t l_63[2][2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_57[i] = 1L;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_63[i][j] = 0x365AED0EL;
        }
        l_63[1][1] = (safe_rshift_func_int16_t_s_s((l_57[0] ^ ((safe_lshift_func_uint8_t_u_s((g_29.f0.f1 <= (g_62 = (((((l_57[0] , (l_60 , g_61)) ^ (-1L)) == l_57[0]) && l_42.f3.f0) == l_42.f2))), 7)) & g_29.f0.f5.f1)), g_29.f0.f4));
        g_64 = l_60.f0.f2;
        g_81 = (l_80 = ((g_29.f0.f4 = ((((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((safe_mod_func_int64_t_s_s((l_63[0][0] >= 7UL), (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((+((g_29.f0.f3 , g_29.f0.f3.f1) , 0L)) & 0xE4CBE064EC4FEF29LL), l_42.f3.f0)), 2)))), 2L)), 3)), 1L)), l_60.f0.f5.f1)) , 6UL) | l_42.f5.f0) > 0x41CECC2FCF81C7DCLL)) , l_80));
    }
    else
    { 
        int8_t l_98 = 0x0EL;
        int32_t l_100 = (-1L);
        int32_t l_111 = 0x299A07EFL;
        for (g_62 = 0; (g_62 != 28); g_62 = safe_add_func_int8_t_s_s(g_62, 1))
        { 
            int64_t l_95 = 0x0FB7EBE1D701D6BCLL;
            int32_t l_99 = (-4L);
            struct S1 l_130 = {{18446744073709551607UL,0x62L}};
            if ((((safe_rshift_func_int16_t_s_s(((l_100 |= (l_99 = ((safe_lshift_func_int8_t_s_s((g_81.f0.f1 = (safe_mod_func_uint8_t_u_u(255UL, ((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((g_29.f1 = l_94), l_95)) & ((safe_rshift_func_int16_t_s_u(((g_81 , 0x079FL) & l_98), 7)) >= g_61)), g_61)) && 0x7D68548FL)))), 7)) > l_95))) > g_11), l_95)) <= 18446744073709551608UL) <= l_42.f3.f2))
            { 
                uint32_t l_108 = 18446744073709551609UL;
                int32_t l_126 = 1L;
                int8_t l_127 = 0x3BL;
                l_44 |= ((safe_mod_func_uint8_t_u_u(g_81.f0.f0, (4L | l_42.f3.f2))) || (safe_add_func_int32_t_s_s(((safe_mod_func_uint64_t_u_u(((l_99 ^ l_14) >= g_54), g_20.f0)) || g_54), g_62)));
                l_44 ^= (-1L);
                g_129 = (g_128 = (g_64 = ((((((g_81 , l_80) , ((!(l_111 |= (l_108--))) || (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((g_81.f0 , (safe_mod_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u(((((g_61 |= (safe_mod_func_int64_t_s_s(((l_126 = ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((0x48A18BD6C3DA0ACFLL == 4UL), l_98)), g_62)) != g_62)) == 0x4001E8EAL), g_20.f0))) != g_64) > 0x218FE463L) == 0x74L), g_20.f1)) > (-1L)), g_81.f0.f1))), g_20.f0)), l_95)))) & 0L) | l_127) & 0x32B3D10AL) , g_61)));
            }
            else
            { 
                l_44 = g_81.f0.f1;
                l_130 = l_80;
                l_44 = l_42.f5.f1;
            }
        }
        for (l_42.f5.f0 = 0; (l_42.f5.f0 <= 50); ++l_42.f5.f0)
        { 
            uint32_t l_142 = 0UL;
            l_134 = g_133;
            for (g_133.f5.f0 = 0; (g_133.f5.f0 <= 4); g_133.f5.f0 += 1)
            { 
                int16_t l_141[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_141[i] = 0L;
                l_100 |= (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(g_15[g_133.f5.f0], (-4L))), (safe_add_func_uint16_t_u_u(((l_141[1] = g_15[g_133.f5.f0]) != 0L), 65535UL))));
            }
            if (l_142)
                break;
        }
    }
    return g_133.f4;
}



static int32_t  func_2(uint32_t  p_3, uint8_t  p_4, struct S3  p_5)
{ 
    int16_t l_43 = 0x3464L;
    l_43 ^= p_5.f3.f2;
    return g_20.f1;
}



static uint8_t  func_8(int16_t  p_9, int8_t  p_10)
{ 
    int64_t l_19 = (-9L);
    int32_t l_39 = 0x3DCEDB1AL;
    const struct S0 l_40 = {0x8F0B53CFL,0x4CL};
    const struct S2 l_41 = {-8L,0L,0x4674E6A83B1D319DLL};
    for (g_11 = 0; (g_11 <= 4); g_11 += 1)
    { 
        return g_15[4];
    }
    l_39 = func_16(g_11, l_19);
    g_29.f0.f3 = (l_40 , l_41);
    return g_29.f0.f0;
}



static int32_t  func_16(uint8_t  p_17, int32_t  p_18)
{ 
    uint8_t l_30 = 248UL;
    int32_t l_31 = 0xE1289ED5L;
    struct S1 l_36 = {{0x95EF2B5DL,1L}};
    int32_t l_37 = 0x15A0349BL;
    int32_t l_38 = 0x70BB1DCEL;
    g_20 = g_20;
    l_38 ^= (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((l_37 = ((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((l_31 = (g_29 , l_30)), p_17)), (safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((((l_36 , p_17) & g_29.f0.f3.f0) , 1L) == g_29.f0.f3.f2), g_29.f0.f3.f2)), 7)))) <= g_11)) & l_36.f0.f0), 1)), g_29.f0.f4));
    return p_17;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_15[i], "g_15[i]", print_hash_value);

    }
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_20.f1, "g_20.f1", print_hash_value);
    transparent_crc(g_20.f2, "g_20.f2", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_81.f0.f0, "g_81.f0.f0", print_hash_value);
    transparent_crc(g_81.f0.f1, "g_81.f0.f1", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_133.f0, "g_133.f0", print_hash_value);
    transparent_crc(g_133.f1, "g_133.f1", print_hash_value);
    transparent_crc(g_133.f2, "g_133.f2", print_hash_value);
    transparent_crc(g_133.f3.f0, "g_133.f3.f0", print_hash_value);
    transparent_crc(g_133.f3.f1, "g_133.f3.f1", print_hash_value);
    transparent_crc(g_133.f3.f2, "g_133.f3.f2", print_hash_value);
    transparent_crc(g_133.f4, "g_133.f4", print_hash_value);
    transparent_crc(g_133.f5.f0, "g_133.f5.f0", print_hash_value);
    transparent_crc(g_133.f5.f1, "g_133.f5.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
